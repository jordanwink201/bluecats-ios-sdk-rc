//
//  NSArray+BCBeacon.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 3/1/13.
//
//

#import <Foundation/Foundation.h>
#import "BCBeacon.h"

@class BCBeaconMode;

@interface NSArray (BCBeacon)

- (NSArray<BCBeacon *> *)sortedBeaconArrayUsingAccuracyAscending:(BOOL)ascending;
- (NSArray<BCBeacon *> *)sortedBeaconArrayUsingIBeaconKeyAscending:(BOOL)ascending;
- (NSArray<BCBeacon *> *)sortedBeaconArrayUsingSiteNameAscending:(BOOL)ascending;

- (NSArray<BCBeacon *> *)filteredBeaconArrayUsingProximity:(BCProximity)proximity;
- (NSArray<BCBeacon *> *)filteredBeaconArrayUsingSiteID:(NSString *)siteID;
- (NSArray<BCBeacon *> *)filteredBeaconArrayUsingSyncStatus:(BCSyncStatus)syncStatus;
- (NSArray<BCBeacon *> *)filteredBeaconArrayUsingSynced:(BOOL)synced;
- (NSArray<BCBeacon *> *)filteredBeaconArrayUsingDiscovered:(BOOL)discovered;
- (NSArray<BCBeacon *> *)filteredBeaconArrayUsingLastAdvertisedAfter:(NSDate *)lastAdvertisedAfter;
- (NSArray<BCBeacon *> *)filteredBeaconArrayUsingLastRangedAfter:(NSDate *)lastRangedAfter;
- (NSArray<BCBeacon *> *)filteredBeaconArrayUsingLastDiscoveredAfter:(NSDate *)lastDiscoveredAfter;
- (NSArray<BCBeacon *> *)filteredBeaconArrayUsingBeaconMode:(BCBeaconMode *)beaconMode;
- (NSArray<BCBeacon *> *)filteredBeaconArrayUsingTeams:(NSArray *)teams;
- (NSArray<BCBeacon *> *)filteredBeaconArrayUsingBeaconAccessRole:(BCBeaconAccessRole)beaconAccessRole;
- (NSArray<BCBeacon *> *)filteredBeaconArrayUsingIsIBeacon:(BOOL)isIBeacon;
- (NSArray<BCBeacon *> *)filteredBeaconArrayUsingIsEddystone:(BOOL)isEddystone;
- (NSArray<BCBeacon *> *)filteredBeaconArrayUsingNewborn:(BOOL)newborn;

- (BCBeacon *)beaconWithBeaconID:(NSString *)beaconID;
- (BCBeacon *)beaconWithSerialNumber:(NSString *)serialNumber;

@end
