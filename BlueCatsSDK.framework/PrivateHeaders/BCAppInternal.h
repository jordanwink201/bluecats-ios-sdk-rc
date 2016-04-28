//
//  BCAppInternal.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 11/24/15.
//  Copyright © 2015 BlueCats. All rights reserved.
//

#import "BCApp.h"
#import "BCBeaconDataSource.h"

@interface BCApp () <BCBeaconDataSource>

#pragma mark - remote configuration
//hash code for app token
@property (nonatomic, copy) NSString * verificationCode;
//the time stamp for the last verification
@property (nonatomic, assign) NSTimeInterval verifiedAt;
@property (nonatomic, assign, readonly) NSTimeInterval timeIntervalSinceVerified;
//remote SDK options from the server side
@property (nonatomic, copy) NSDictionary * remoteOptions;
//kill switch for the SDK, YES to stop running SDK
@property(nonatomic, assign) BOOL isAppInvalid;

- (void)copyApiPropertiesFromApp:(BCApp *)app;

- (NSDate *)cachedBeaconsAt;
- (NSArray *)cachedBeacons;
- (BOOL)hasBeaconsCacheExpired;

- (void)getBeaconsWithSuccess:(void (^)(NSArray *))success
                      failure:(void (^)(NSError *))failure
                 preferCached:(BOOL)preferCached;

- (NSDate *)cachedSitesAt;
- (NSArray *)cachedSites;
- (BOOL)hasSitesCacheExpired;

- (void)getSitesWithSuccess:(void (^)(NSArray *))success
                    failure:(void (^)(NSError *))failure
               preferCached:(BOOL)preferCached;

@end
