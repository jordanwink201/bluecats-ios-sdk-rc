//
//  BCBeacon+Api.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 4/17/13.
//  Copyright (c) 2013 Bluecats. All rights reserved.
//

#import "BCBeacon.h"

@class BCTeam, BCSite, BCPaginator, BCBeaconVersion, BCBeaconLoudness, BCBeaconMode, BCTargetSpeed;

@interface BCBeacon (Api)

- (void)copyApiPropertiesFromBeacon:(BCBeacon *)beacon;

- (void)updateBeaconWithSuccess:(void (^)(BCBeacon *updatedBeacon))success
                        failure:(void (^)(NSError *error))failure;

- (void)moveBeaconToTeam:(BCTeam *)toTeam
                    site:(BCSite *)toSite
          keepCategories:(BOOL)keepCategories
                 success:(void (^)(BCBeacon *))success
                 failure:(void (^)(NSError *))failure;

- (BCPaginator *)beaconVersionPaginator;

- (void)getBeaconVersion:(NSInteger)version
                 success:(void (^)(BCBeaconVersion *))success
                 failure:(void (^)(NSError *))failure;

- (void)getLatestBeaconVersionWithSuccess:(void (^)(BCBeaconVersion *))success
                                  failure:(void (^)(NSError *))failure;

- (void)confirmBeaconVersion:(NSInteger)version
                     success:(void (^)(void))success
                     failure:(void (^)(NSError *))failure;

- (void)refreshBeaconWithSuccess:(void (^)(void))success
                         failure:(void (^)(NSError *))failure;

- (void)getLatestBeaconWithSuccess:(void (^)(BCBeacon *))success
                           failure:(void (^)(NSError *))failure;

- (void)getTargetSpeedsWithParams:(NSDictionary *)params
                          success:(void (^)(NSArray <BCTargetSpeed *> *))success
                          failure:(void (^)(NSError *))failure;

- (void)getBeaconModesWithParams:(NSDictionary *)params
                         success:(void (^)(NSArray <BCBeaconMode *> *))success
                         failure:(void (^)(NSError *))failure;

- (void)getBeaconLoudnessesWithParams:(NSDictionary *)params
                              success:(void (^)(NSArray <BCBeaconLoudness *> *))success
                              failure:(void (^)(NSError *))failure;

@end
