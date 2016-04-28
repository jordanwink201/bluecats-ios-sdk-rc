//
//  BCBeaconRanger.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 4/22/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BCMutableDictionary, BCBeaconRegion, BCBeacon;

@protocol BCBeaconRangerDelegate;

@interface BCBeaconRanger : NSObject

@property (nonatomic, assign) NSObject<BCBeaconRangerDelegate> *delegate;

- (void)startRangingBeacons;
- (void)stopRangingBeacons;

- (void)discoveredBeacon:(NSString *)cacheIdentifier
              duringScan:(NSString *)scanID
                withRSSI:(NSInteger)rssi;

- (void)locationManagerRangedCLBeacons:(NSArray *)clBeacons
                      inBeaconRegion:(BCBeaconRegion *)beaconRegion;

@end


@protocol BCBeaconRangerDelegate <NSObject>

@required

- (void)beaconRanger:(BCBeaconRanger *)beaconRanger didRangeBeacons:(NSArray<BCBeacon *> *)beacons;

@end


@interface BCBeaconScanData : NSObject

@property (nonatomic, copy) NSString *cacheIdentifier;
@property (nonatomic, assign) NSInteger numberOfRSSIs;
@property (nonatomic, assign) NSInteger rssiRunningTotal;
@property (nonatomic, assign) NSInteger rssiRunningMean;

- (void)discoveredBeacon:(NSString *)cacheIdentifier withRSSI:(NSInteger)rssi;

@end


@interface BCScanActivityMonitor : NSObject

@property (nonatomic, copy) NSString *scanID;
@property (nonatomic, strong) NSDate *startedAt;
@property (nonatomic, strong) NSDate *stoppedAt;
@property (nonatomic, strong) BCMutableDictionary *beaconScanDataForBeaconKey;

- (void)discoveredBeacon:(NSString *)cacheIdentifier withRSSI:(NSInteger)rssi;

@end


@interface NSArray (BCScanActivityMonitor)

- (NSArray *)sortedBCScanActivityMonitorArrayUsingStartedAtAscending:(BOOL)ascending;

- (NSArray *)filteredBCScanActivityMonitorArrayUsingStartedBeforeDate:(NSDate *)date;

@end


@interface BCBeaconRegionActivityMonitor : NSObject

@property (nonatomic, copy) NSString *identifier;
@property (atomic, copy) NSDate *lastRangedAt;
@property (nonatomic, strong) NSArray *clBeacons;

- (void)rangedCLBeacons:(NSArray *)clBeacons;

@end


@interface NSArray (BCBeaconRegionActivityMonitor)

- (NSArray *)filteredBCBeaconRegionActivityMonitorArrayUsingLastRangedBeforeDate:(NSDate *)date;

@end
