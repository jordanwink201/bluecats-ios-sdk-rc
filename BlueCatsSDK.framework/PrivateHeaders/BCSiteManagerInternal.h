//
//  BCSiteManagerInternal.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 11/14/12.
//  Copyright (c) 2012 BlueCats. All rights reserved.
//

#import "BCSiteActivityMonitor.h"
#import "BCDefinitionsInternal.h"

@class BCSite, BCSiteSyncResult, BCBeacon;

@protocol BCSiteManagerInternalDelegate;

@interface BCSiteManagerInternal : NSObject

@property (nonatomic, strong, readonly) NSDate* lastCacheRefreshForAllSitesForApp;
@property (nonatomic, strong, readonly) NSDate* latestCachedSiteModifiedAtForApp;

- (NSArray *)allCachedSites;
- (BCSite *)cachedSiteWithSiteID:(NSString *)siteID;
- (NSArray *)cachedSitesWithSiteIDs:(NSArray *)siteIDs;
- (BOOL)hasCacheExpiredForSiteWithID:(NSString*)siteID;
- (BOOL)hasCacheExpiredForSitesForApp;

- (BCCachingStatus)cacheSite:(BCSite *)site multicast:(BOOL)multicast;
- (void)cacheSitesFromSyncResult:(BCSiteSyncResult*)syncResult;
- (void)removeCachedSite:(BCSite *)cachedSite;

- (NSOrderedSet *)nearbySitesUsingDistanceFilter:(double)distanceFilter;

- (void)requestStateForSite:(BCSite *)site;

- (void)addDelegate:(id)delegate;
- (void)removeDelegate:(id)delegate;

+ (BCSiteManagerInternal *)sharedInternal;

@end


@protocol BCSiteManagerInternalDelegate <NSObject>

@optional

- (void)siteManagerDidRemoveAllActivityMonitors:(BCSiteManagerInternal *)siteManagerInternal;

- (void)siteManagerInternal:(BCSiteManagerInternal *)siteManagerInternal
              didCacheSites:(NSArray<BCSite *> *)sites;

- (void)siteManagerInternal:(BCSiteManagerInternal *)siteManagerInternal
            didRestoreSites:(NSArray<BCSite *> *)sites;

- (void)siteManagerInternal:(BCSiteManagerInternal *)siteManagerInternal
               didSyncSites:(NSArray<BCSite *> *)sites;

- (void)siteManagerInternal:(BCSiteManagerInternal *)siteManagerInternal
               didEnterSite:(BCSite *)site;

- (void)siteManagerInternal:(BCSiteManagerInternal *)siteManagerInternal
                didExitSite:(BCSite *)site;

- (void)siteManagerInternal:(BCSiteManagerInternal *)siteManagerInternal
          didDetermineState:(BCSiteState)state
                    forSite:(BCSite *)site;

- (void)siteManagerInternal:(BCSiteManagerInternal *)siteManagerInternal
            didRangeBeacons:(NSArray<BCBeacon *> *)beacons
                     inSite:(BCSite *)site;

- (void)siteManagerInternal:(BCSiteManagerInternal *)siteManagerInternal
   didRangeBeaconsForSiteID:(NSDictionary *)beaconsForSiteID
                    inSites:(NSArray *)sites;

- (void)siteManagerInternal:(BCSiteManagerInternal *)siteManagerInternal
            didRangeBeacons:(NSArray<BCBeacon *> *)beacons;

@end
