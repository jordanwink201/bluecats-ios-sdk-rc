//
//  BCBeaconInternal.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 11/15/15.
//  Copyright © 2015 BlueCats. All rights reserved.
//

#import "BCBeacon.h"
#import "BCDefinitionsInternal.h"

@class BCBeaconLoudness, BCTargetSpeed, BCBeaconRegion, BCBeaconMode, BCNetworkAccess;

@interface BCBeacon ()

// Other api properties
@property (nonatomic, copy) NSString *siteID;
@property (nonatomic, copy) NSString *siteName;
@property (nonatomic, copy) BCNetworkAccess *networkAccess;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSDate *modifiedAt;
@property (nonatomic, assign) BCFeatureFlags featureBitmask;

// Identity properties
@property (nonatomic, copy) NSString *bluetoothAddress;

// Context properties
@property (nonatomic, strong) NSArray *customValues;

// Versioned properties
@property (nonatomic, copy) BCBeaconMode *beaconMode;
@property (nonatomic, copy) BCBeaconRegion *beaconRegion;
@property (nonatomic, copy) BCBeaconLoudness *beaconLoudness;
@property (nonatomic, copy) BCTargetSpeed *targetSpeed;
@property (nonatomic, copy) NSNumber *measuredPowerAt1Meter;
@property (nonatomic, copy) NSNumber *privacyDuration;
@property (nonatomic, copy) NSNumber *version;
@property (nonatomic, copy) NSNumber *pendingVersion;

// Firmware properties
@property (nonatomic, copy) NSString *firmwareVersion;
@property (nonatomic, assign) BOOL upgradableOTA;
@property (nonatomic, copy) NSString *latestFirmwareVersion;

// CoreBluetooth properties
@property (nonatomic, copy) NSUUID *peripheralIdentifier;
@property (nonatomic, copy) NSDate *firstDiscoveredAt;
@property (nonatomic, copy) NSDate *lastDiscoveredAt;
- (BOOL)wasDiscovered;

// iBeacon properties
@property (nonatomic, copy, readonly) NSString *iBeaconKey;

// BeaconManagerInternal properties
@property (nonatomic, copy) NSDate *cachedAt;
@property (nonatomic, copy) NSDate *syncedAt;
@property (nonatomic, assign) BCSyncStatus syncStatus;
- (BOOL)isSyncedOrRestored;
@property (nonatomic, copy) NSDate *firstRangedAt;


// Verification properties
@property (nonatomic, copy) NSDate *verifiedAt;
@property (nonatomic, assign) BCVerificationStatus verificationStatus;
@property (nonatomic, strong) NSDate *sequenceNumberChangedAt;

// Ad data properties
@property (nonatomic, strong) NSMutableDictionary *latestAdData;

// Block data properties
@property (nonatomic, strong) NSMutableArray *reassembledBlockData;
@property (nonatomic, strong) NSMutableDictionary *partialBlockData;

- (void)setCacheIdentifier:(NSString *)cacheIdentifier;

- (NSNumber *)averageAdsPerMinuteForAdDataType:(NSString *)adDataTypeKey;
- (void)removeAllAdData;
- (void)removeAdDataForAdDataTypeKey:(NSString *)adDataTypeKey;
- (void)setAdData:(NSDictionary *)adData forAdDataTypeKey:(NSString *)adDataTypeKey;
- (NSDictionary *)adDataForAdDataTypeKey:(NSString *)adDataTypeKey;

- (NSArray *)reassembledBlockDataWithDataType:(BCBlockDataType)dataType;
- (NSDictionary *)lastReassembledBlockDataWithDataType:(BCBlockDataType)dataType;

- (BCVerificationStatus)updateVerificationStatus;

- (id)objectFromLatestBlueCatsAdDataForKey:(NSString *)key;
- (id)objectFromLatestIBeaconAdDataForKey:(NSString *)key;
- (id)objectFromLatestAdDataWithKey:(NSString *)key;
- (id)objectFromLatestAdDataForKey:(NSString *)key adDataTypeKeys:(NSArray *)adDataTypeKeys;

+ (void)storedBeaconsWithPredicate:(NSPredicate *)predicate sortDescriptors:(NSArray *)sortDesc
                           success:(void (^)(NSArray *beacons))success
                           failure:(void (^)(NSError *error))failure;

+ (void)numberOfBeaconsWithPredicate:(NSPredicate *)predicate
                             success:(void (^)(NSUInteger count))success
                             failure:(void (^)(NSError *error))failure;
@end