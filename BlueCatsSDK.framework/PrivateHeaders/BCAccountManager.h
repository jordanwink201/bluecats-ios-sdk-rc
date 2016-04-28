//
//  BCAccountManager.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 2/20/13.
//  Copyright (c) 2013 Bluecats. All rights reserved.
//

#import "BlueCatsSDK.h"

extern NSString* const BCAccountManagerDidLogInPerson;
extern NSString* const BCAccountManagerDidFailLogIn;
extern NSString* const BCAccountManagerDidLogOff;

@class BCTeam, BCPerson, BCBeacon, BCApp;

@interface BCAccountManager : NSObject

@property (nonatomic, copy) NSString *appToken;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *password;

@property (nonatomic, strong) BCPerson *loggedInPerson;
@property (nonatomic, strong) BCApp *verifiedApp;
@property (nonatomic, assign) BCAppTokenVerificationStatus appTokenStatus;
@property (nonatomic, strong) NSArray *platformTypes;
@property (nonatomic, strong) NSArray *beaconLoudnesses;
@property (nonatomic, strong) NSArray *targetSpeeds;
@property (nonatomic, strong) NSArray *siteAccessTypes;
@property (nonatomic, strong) NSArray *beaconModes;

- (BOOL)isLoggedIn;

- (void)verifyCredentialsWithSuccess:(void (^)(BCPerson *loggedInPerson))success failure:(void (^)(NSError *error))failure;

- (void)verifyAppWithToken:(NSString*)appToken
                   success:(void (^)(BCApp *))success
                   failure:(void (^)(NSError *))failure;

- (void)logOff;

- (void)getPlatformTypesWithSuccess:(void (^)(NSArray *))success
                            failure:(void (^)(NSError *))failure;

- (void)getBeaconLoudnessesWithSuccess:(void (^)(NSArray *))success
                               failure:(void (^)(NSError *))failure;

- (void)getTargetSpeedsWithSuccess:(void (^)(NSArray *))success
                           failure:(void (^)(NSError *))failure;

- (void)getSiteAccessTypesWithSuccess:(void (^)(NSArray *))success
                              failure:(void (^)(NSError *))failure;

- (void)getBeaconModesWithSuccess:(void (^)(NSArray *))success
                          failure:(void (^)(NSError *))failure;

- (void)getBeaconWithBeaconID:(NSString *)beaconID
                      version:(NSInteger)version
                      success:(void (^)(BCBeacon *))success
                      failure:(void (^)(NSError *))failure;

+ (BCAccountManager *)sharedManager;

@end

