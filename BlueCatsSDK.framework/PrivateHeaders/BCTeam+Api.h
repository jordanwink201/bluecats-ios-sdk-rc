//
//  BCTeam+Api.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 8/14/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//

#import "BCTeam.h"

@class BCCategory, BCSite;

@interface BCTeam (Api)

- (void)updateTeamWithSuccess:(void (^)(BCTeam *))success
                      failure:(void (^)(NSError *))failure;

- (void)getAlertsFromDate:(NSDate *)fromDate
                   toDate:(NSDate *)toDate
                  success:(void (^)(BCTeam *, NSArray *))success
                  failure:(void (^)(BCTeam *, NSError *))failure;

- (void)getAppsWithSuccess:(void (^)(BCTeam *, NSArray *))success
                   failure:(void (^)(BCTeam *, NSError *))failure
              preferCached:(BOOL)preferCached;

- (void)getTeammatesWithSuccess:(void (^)(BCTeam *, NSArray *))success
                        failure:(void (^)(BCTeam *, NSError *))failure
                   preferCached:(BOOL)preferCached;

- (void)createCategories:(NSArray *)categories
                 success:(void (^)(NSArray *))success
                 failure:(void (^)(NSError *))failure;

- (void)getSitesWithSuccess:(void (^)(BCTeam *, NSArray *))success
                    failure:(void (^)(BCTeam *, NSError *))failure
               preferCached:(BOOL)preferCached;

- (void)createSite:(BCSite *)site
           success:(void (^)(BCTeam *, BCSite *))success
           failure:(void (^)(BCTeam *, NSError *))failure;

- (void)deleteSite:(BCSite *)site
           success:(void (^)(BCTeam *))success
           failure:(void (^)(BCTeam *, NSError *))failure;

@end
