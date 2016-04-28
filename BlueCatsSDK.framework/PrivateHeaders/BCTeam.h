//
//  BCTeam.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 3/11/13.
//
//

#import "BCJSONModel.h"
#import "BCTeamInvite.h"
#import "BCBeacon.h"
#import "BCBeaconDataSource.h"
#import "BCCategoryDataSource.h"

@class BCPerson, BCTeamRole, BCSite, BCCategory, BCApp;

@interface BCTeam : BCJSONModel<BCTeamInviteDataSource, BCBeaconDataSource, BCCategoryDataSource>

@property (nonatomic, copy) NSString *teamID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) BCPerson *owner;
@property (nonatomic, strong) BCTeamRole *teamRole;
@property (nonatomic, assign) NSInteger siteCount;
@property (nonatomic, assign) NSInteger appCount;
@property (nonatomic, assign) NSInteger teammateCount;
@property (nonatomic, assign) NSInteger beaconCount;
@property (nonatomic, assign) NSInteger categoryCount;
@property (nonatomic, copy) NSDate *createdAt;

@property (nonatomic, copy) NSArray *recentAlerts;
@property (nonatomic, copy) NSArray *beaconRegions;

- (BCSite *)cachedSiteWithSiteID:(NSString *)siteID;

@property (nonatomic, copy) NSArray *cachedApps;
@property (nonatomic, copy) NSDate *cachedAppsAt;
- (BOOL)hasAppsCacheExpired;

- (void)createApp:(BCApp *)app
          success:(void (^)(BCApp *))success
          failure:(void (^)(NSError *))failure;

- (void)deleteApp:(BCApp *)app
          success:(void (^)(void))success
          failure:(void (^)(NSError *))failure;


@property (nonatomic, copy) NSArray *cachedTeammates;
@property (nonatomic, copy) NSDate *cachedTeammatesAt;
- (BOOL)hasTeammatesCacheExpired;

- (NSArray *)cachedSites;
@property (nonatomic, assign) NSUInteger numberOfSitesCached;
@property (nonatomic, copy) NSDate *cachedSitesAt;
- (BOOL)hasSitesCacheExpired;

#pragma mark - BCCategoryDataSource

@property (nonatomic, copy) NSArray *cachedCategories;
@property (nonatomic, copy) NSDate *cachedCategoriesAt;
- (BOOL)hasCategoriesCacheExpired;

- (void)getCategoriesWithSuccess:(void (^)(NSArray *))success
                         failure:(void (^)(NSError *))failure
                    preferCached:(BOOL)preferCached;

- (void)createCategory:(BCCategory *)category
               success:(void (^)(BCCategory *))success
               failure:(void (^)(NSError *))failure;

- (void)deleteCategory:(BCCategory *)category
               success:(void (^)(void))success
               failure:(void (^)(NSError *))failure;

#pragma mark - BCBeaconDataSource

- (NSArray *)cachedBeacons;
@property (nonatomic, assign) NSUInteger numberOfBeaconsCached;
@property (nonatomic, copy) NSDate *cachedBeaconsAt;
- (BOOL)hasBeaconsCacheExpired;

- (void)getBeaconsWithSuccess:(void (^)(NSArray *))success
                       failure:(void (^)(NSError *))failure
                  preferCached:(BOOL)preferCached;

#pragma mark - BCTeamInviteDataSource

@property (nonatomic, copy) NSArray *cachedTeamInvites;
@property (nonatomic, copy) NSDate *cachedTeamInvitesAt;
- (BOOL)hasTeamInvitesCacheExpired;

- (void)getTeamInvitesWithSuccess:(void (^)(NSArray *))success
                           failure:(void (^)(NSError *))failure
                      preferCached:(BOOL)preferCached;

- (void)sendTeamInvite:(BCTeamInvite *)teamInvite
               success:(void (^)(BCTeamInvite *))success
               failure:(void (^)(NSError *))failure;

@end
