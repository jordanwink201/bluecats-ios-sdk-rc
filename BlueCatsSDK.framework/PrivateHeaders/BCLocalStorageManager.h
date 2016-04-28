//
//  BCLocalStorageManager.h
//  BlueCatsSDK
//
//  Created by Damien Clarke on 30/06/2014.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class BCManagedBeaconVisit, BCBeacon, BCBeaconVisit, BCCategory, BCBeaconRegion,
BCEvent, BCEventSummary, BCBeaconRegionVisit, BCSite;

@interface BCLocalStorageManager : NSObject

@property (nonatomic, assign, getter=isLocalStorageEnabled) BOOL localStorageEnabled;

-(void)storeBeacon:(BCBeacon*)beacon;
-(void)storeBeaconRegion:(BCBeaconRegion *)beaconRegion;
-(void)storeEventSummary:(BCEventSummary *)eventSummary;
-(void)storeEvent:(BCEvent *)event;
-(void)storeSite:(BCSite *)site;

-(void)updateEvent:(NSString *)eventID postedAt:(NSDate *)postedAt;

- (BCEventSummary *)eventSummaryForIdentifier:(NSString *)eventIdentifier;
- (BCBeaconVisit *)managedBeaconVisitForSerialNumber:(NSString *)serialNumber;
- (BCBeaconRegionVisit *)managedBeaconRegionVisitForIdentifier:(NSString *)regionIdentifier;

- (BCBeacon *)fetchBeaconForIBeaconKey:(NSString *)iBeaconKey;
- (BCBeacon *)fetchBeaconForBluetoothAddress:(NSString *)bluetoothAddress;
- (BCBeacon *)fetchBeaconForEddystoneUIDString:(NSString *)eddystoneUIDString;

- (BCSite *)fetchSiteForSiteID:(NSString *)siteID;

- (void)fetchRecordsForEntitiesNamed:(NSString *)entityName
                       withPredicate:(NSPredicate *)predicate
                 withSortDescriptors:(NSArray *)sortDescriptors
                             success:(void (^)(NSArray *managedEntities))success
                             failure:(void (^)(NSError *error))failure;

- (void)countRecordsForEntitiesNamed:(NSString *)entityName
                       withPredicate:(NSPredicate *)predicate
                             success:(void (^)(NSUInteger entityCount))success
                             failure:(void (^)(NSError *error))failure;

- (void)deleteManagedBeaconVisitsFromObjectGraphThatBeganBeforeDate:(NSDate *)date orExceedLimit:(NSInteger)limit;

- (void)deleteManagedBeacon:(BCBeacon *)beacon;

- (void)deleteManagedEventsFromObjectGraphThatBeganBeforeDate:(NSDate *)date orExceedLimit:(NSInteger)limit;

- (void)saveContext;

+ (BCLocalStorageManager *)sharedManager;

@end
