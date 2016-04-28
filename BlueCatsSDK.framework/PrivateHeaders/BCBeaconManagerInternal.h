//
//  BCBeaconManagerInternal.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 11/14/12.
//  Copyright (c) 2012 Bluecats. All rights reserved.
//

#import "BCDefinitions.h"
#import "BCDefinitionsInternal.h"
#import "BCBeaconControlOperation.h"

@protocol BCBeaconManagerInternalDelegate;

@class BCSite, BCBeacon, BCBeaconVisit, BCBeaconSyncResult;

@interface BCBeaconManagerInternal : NSObject

@property (nonatomic, assign, readonly, getter=isBeaconDiscoveringEnabled) BOOL beaconDiscoveringEnabled;

- (void)startDiscoveringBeacons;
- (void)stopDiscoveringBeacons;

- (NSArray<BCBeacon *> *)cachedBeaconsForRangingWithPredicate:(NSPredicate*)predicate;
- (BCBeacon *)cachedBeaconWithIBeaconKey:(NSString *)iBeaconKey;
- (BCBeacon *)cachedBeaconWithBluetoothAddress:(NSString *)bluetoothAddress;
- (BCBeacon *)cachedBeaconWithEddystoneUIDString:(NSString *)eddystoneUIDString;
- (BCBeacon *)cachedBeaconWithSerialNumber:(NSString *)serialNumber;
- (BCBeacon *)cachedBeaconWithBeaconID:(NSString *)beaconID;
- (BCBeacon *)cachedBeaconWithCacheIdentifier:(NSString *)cacheIdentifier;

- (void)cacheBeaconsForApp;

- (NSDate *)lastCacheRefreshForApp;
- (BOOL)shouldCacheAccessSyncForApp;
- (BOOL)shouldCacheFullSyncForApp;
- (BOOL)shouldCacheRefreshForApp;
- (BOOL)shouldCacheAccessSyncForSiteID:(NSString*)siteID;
- (BOOL)shouldCacheFullSyncForSiteID:(NSString*)siteID;
- (BOOL)shouldCacheRefreshForSiteID:(NSString*)siteID;
- (BOOL)canCacheAccessSyncForApp;
- (BOOL)canCacheFullSyncForApp;
- (BOOL)canCacheRefreshForApp;
- (BOOL)canCacheAccessSyncForSiteID:(NSString*)siteID;
- (BOOL)canCacheFullSyncForSiteID:(NSString*)siteID;
- (BOOL)canCacheRefreshForSiteID:(NSString*)siteID;

- (void)processEndedBeaconVisit:(BCBeaconVisit *)beaconVisit;

- (void)cacheBeaconsFromSyncResult:(BCBeaconSyncResult*)syncResult;

- (BOOL)isBluetoothPoweredOn;

- (void)siteManagerExitedSiteWithSiteID:(NSString *)siteID;

- (void)updateFirmwareInBeacon:(BCBeacon *)beacon
             toFirmwareVersion:(NSString *)fwVersion
                       success:(void (^)(void))success
                        status:(void (^)(NSString *))status
                      progress:(void (^)(float))progress
                       failure:(void (^)(NSError *))failure;

- (void)updateFirmwareInBeacon:(BCBeacon *)beacon
                       success:(void (^)(void))success
                        status:(void (^)(NSString *))status
                      progress:(void (^)(float))progress
                       failure:(void (^)(NSError *))failure;

- (void)updateSettingsInBeacon:(BCBeacon *)beacon
                      success:(void (^)(void))success
                       status:(void (^)(NSString *))status
                      failure:(void (^)(NSError *error))failure;

- (void)updateSettingsInBeacon:(BCBeacon *)beacon
                 settingForKey:(NSDictionary *)settingForKey
                       success:(void (^)(void))success
                        status:(void (^)(NSString *))status
                       failure:(void (^)(NSError *error))failure;

- (void)sendOpcode:(BCBeaconOpcode)opcode
          toBeacon:(BCBeacon *)beacon
           success:(void (^)(void))success
           failure:(void (^)(NSError *error))failure;

- (void)sendDataRequest:(NSData *)requestData
               toBeacon:(BCBeacon *)beacon
               endpoint:(BCBeaconEndpoint)endpoint
                success:(void (^)(NSData *responseData))success
                 status:(void (^)(NSString *statusString))status
                failure:(void (^)(NSError *error))failure;

- (void)sendDataRequests:(NSArray *)requestDataArray
                toBeacon:(BCBeacon *)beacon
                endpoint:(BCBeaconEndpoint)endpoint
                 success:(void (^)(NSArray *responseDataArray))success
                  status:(void (^)(NSString *statusString))status
                 failure:(void (^)(NSError *error))failure;

- (void)transportDataRequest:(NSData *)requestData
                    toBeacon:(BCBeacon *)beacon
                    endpoint:(BCBeaconEndpoint)endpoint
                     success:(void (^)(NSData *responseData))success
                      status:(void (^)(NSString *statusString))status
                     failure:(void (^)(NSError *error))failure;

- (void)addDelegate:(id)delegate;
- (void)removeDelegate:(id)delegate;

+ (BCBeaconManagerInternal *)sharedInternal;

@end


@protocol BCBeaconManagerInternalDelegate <NSObject>

@optional

- (void)beaconManagerInternalWillStartDiscoveringBeacons:(BCBeaconManagerInternal *)beaconManagerInternal;
- (void)beaconManagerInternalDidStartDiscoveringBeacons:(BCBeaconManagerInternal *)beaconManagerInternal;
- (void)beaconManagerInternalDidStopDiscoveringBeacons:(BCBeaconManagerInternal *)beaconManagerInternal;
- (void)beaconManagerInternal:(BCBeaconManagerInternal *)beaconManagerInternal discoveringDidFailWithError:(NSError *)error;

- (void)beaconManagerInternal:(BCBeaconManagerInternal *)beaconManagerInternal didUpdateBluetoothPoweredOn:(BOOL)poweredOn;

- (void)beaconManagerInternal:(BCBeaconManagerInternal *)beaconManagerInternal didCacheBeacons:(NSArray<BCBeacon *> *)beacons;
- (void)beaconManagerInternal:(BCBeaconManagerInternal *)beaconManagerInternal didSyncBeacons:(NSArray<BCBeacon *> *)beacons;
- (void)beaconManagerInternal:(BCBeaconManagerInternal *)beaconManagerInternal didRemoveBeacons:(NSArray<BCBeacon *> *)beacons;

- (void)beaconManagerInternal:(BCBeaconManagerInternal *)beaconManagerInternal didFirstDiscoverBeacon:(BCBeacon *)beacon;

- (void)beaconManagerInternal:(BCBeaconManagerInternal *)beaconManagerInternal didRangeBlueCatsBeacons:(NSArray *)beacons;
- (void)beaconManagerInternal:(BCBeaconManagerInternal *)beaconManagerInternal didRangeBlueCatsBeaconsForAnalytics:(NSArray *)beacons;
- (void)beaconManagerInternal:(BCBeaconManagerInternal *)beaconManagerInternal didRangeNewbornBeacons:(NSArray<BCBeacon *> *)newbornBeacons;
- (void)beaconManagerInternal:(BCBeaconManagerInternal *)beaconManagerInternal didRangeIBeacons:(NSArray<BCBeacon *> *)iBeacons;
- (void)beaconManagerInternal:(BCBeaconManagerInternal *)beaconManagerInternal didRangeEddystoneBeacons:(NSArray<BCBeacon *> *)eddystoneBeacons;
- (void)beaconManagerInternal:(BCBeaconManagerInternal *)beaconManagerInternal didRangeBeacons:(NSArray *)beacons;

@end
