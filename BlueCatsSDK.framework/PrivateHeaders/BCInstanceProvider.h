//
//  BCInstanceProvider.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 8/13/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BCBeaconManagerInternal, BCSiteManagerInternal, BCIdentityProvider, BCLocationManagerClient, BCApiClient, BCUploadOperationManager, BCApiOperationManager, BCAccountManager, BCConfigurator, BCLocalNotificationManager, BCVisitTracker, BCBeaconRegionManager, BCLocalStorageManager, BCUserDefaultsManager, BCSessionManager;

typedef id(^BCSingletonProviderBlock)();

@interface BCInstanceProvider : NSObject

+ (BCInstanceProvider *)sharedProvider;

- (id)singletonForClass:(Class)instanceClass provider:(BCSingletonProviderBlock)provider;

- (BCBeaconManagerInternal *)sharedBeaconManagerInternal;

- (BCSiteManagerInternal *)sharedSiteManagerInternal;

- (BCIdentityProvider *)sharedIdentityProvider;

- (BCLocationManagerClient *)sharedLocationManagerClient;

- (BCApiClient *)sharedApiClient;

- (BCApiOperationManager *)sharedApiOperationManager;

- (BCAccountManager *)sharedAccountManager;

- (BCConfigurator *)sharedConfigurator;

#if defined(__IPHONE_OS_VERSION_MIN_REQUIRED)
- (BCLocalNotificationManager *)sharedLocalNotificationManager;
#endif

- (BCVisitTracker *)sharedVisitTracker;

- (BCBeaconRegionManager *)sharedBeaconRegionManager;

- (BCLocalStorageManager *)sharedLocalStorageManager;

- (BCUserDefaultsManager *)sharedUserDefaultsManager;

- (BCSessionManager *)sharedSessionManager;

@end
