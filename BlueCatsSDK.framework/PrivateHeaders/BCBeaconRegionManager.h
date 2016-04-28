//
//  BCBeaconRegionManager.h
//  BlueCatsSDK
//
//  Created by Damien Clarke on 28/02/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

@class BCBeaconRegion, BCBeaconRegionSyncResult;

@protocol BCBeaconRegionManagerDelegate;

@interface BCBeaconRegionManager : NSObject

- (void)forceSyncBeaconRegions;
- (void)cacheBeaconRegions;
- (NSArray *)allCachedBeaconRegions;
- (BCBeaconRegion *)cachedBeaconRegionWithRegionIdentifier:(NSString *)regionIdentifier;
- (NSArray *)cachedBeaconRegionsWithRegionIdentifiers:(NSArray *)regionIdentifiers;
- (NSSet *)cachedProximityUUIDStrings;

- (void)cacheBeaconRegion:(BCBeaconRegion *)beaconRegion multicastAndUpdateStore:(BOOL)multicastAndUpdateStore;
- (void)cacheBeaconRegionsFromSyncResult:(BCBeaconRegionSyncResult *)syncResult;
- (void)removeCachedBeaconRegion:(BCBeaconRegion *)cachedBeaconRegion multicastAndUpdateStore:(BOOL)multicastAndUpdateStore;

- (void)addDelegate:(id)delegate;
- (void)removeDelegate:(id)delegate;

+ (BCBeaconRegionManager *)sharedManager;

@end


@protocol BCBeaconRegionManagerDelegate <NSObject>

@optional

- (void)beaconRegionManager:(BCBeaconRegionManager *)beaconRegionManager
      didCacheBeaconRegions:(NSArray *)beaconRegions;

- (void)beaconRegionManager:(BCBeaconRegionManager *)beaconRegionManager
      didRemoveCachedBeaconRegions:(NSArray *)beaconRegions;

- (void)beaconRegionManagerDidChangeBeaconRegionCache:(BCBeaconRegionManager *)beaconRegionManager;

@end

