//
//  BCConfigurator.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 2/13/13.
//  Copyright (c) 2013 Bluecats. All rights reserved.
//

@class BCApp;

@interface BCConfigurator : NSObject

@property (nonatomic, assign, getter=isConfigured, readonly) BOOL configured;
@property (nonatomic, copy) NSString *appToken;
@property (nonatomic, readonly, copy) NSString *userName;
@property (nonatomic, readonly, copy) NSString *password;

//SDK options from user, [BlueCatsSDK setOptions:options]
@property (nonatomic, copy) NSDictionary *userOptions;
//SDK options from remote configuration
@property (nonatomic, copy) NSDictionary *remoteOptions;
//A combination of userOptions and remoteOptions
@property (readonly, nonatomic, copy) NSDictionary *options;


- (void)setCredentialsWithUserName:(NSString *)userName
                          password:(NSString *)password;

- (void)configureBlueCatsSDK;
- (void)configureNetworking;

//- (void)verifyAppWithToken:(NSString *)appToken completion:(void (^)(BCApp *app,NSError *error))completion;
- (void)verifyAppWithCompletion:(void (^)(BCApp *app,NSError *error))completion;

- (void)runWithAppToken;

- (NSString *)apiBaseURL;
- (BOOL)trackBeaconVisits;
- (BOOL)monitorBlueCatsRegionOnStartup;
- (BOOL)monitorAllAvailableRegionsOnStartup;
- (NSString *) targetRegionPrefix;

- (BOOL)useEnergySaverScanStrategy;
- (BOOL)scanInBackground;
- (NSTimeInterval)backgroundSessionTimeIntervalInSeconds;
- (NSInteger)maximumDailyBackgroundUsageInMinutes;
- (BOOL)crowdSourceBeaconUpdates;
- (BOOL)useLocalStorage;
- (BOOL)cacheAllBeaconsForApp;
- (BOOL)discoverBeaconsNearby;
- (BOOL)cacheSitesNearby;
- (BOOL)showBluetoothPowerWarningMessage;
- (BOOL)trackStandardEvents;
- (NSTimeInterval)cacheRefreshTimeInterval;
- (BOOL)isUsingApi;

#pragma mark - remote configuration
- (NSTimeInterval)remoteConfigurationRefreshTimeIntervalInSeconds;
- (NSTimeInterval)remoteConfigurationExpirationTimeIntervalInSeconds;

- (BOOL) isRemoteConfigurationValid:(NSTimeInterval)timeIntervalSinceLastVerified;
- (BOOL) isRemoteConfigurationExpired:(NSTimeInterval)timeIntervalSinceLastVerified;


+ (BCConfigurator *)sharedConfigurator;

@end
