//
//  BCUserDefaultsManager.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 10/27/15.
//  Copyright © 2015 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BCMutableDictionary, BCMutableArray, BCApp;

@interface BCUserDefaultsManager : NSObject

- (BCMutableDictionary *)loadBeaconRegionForRegionIdentifier;
- (void)storeBeaconRegionForRegionIdentifier:(BCMutableDictionary *)beaconRegionForRegionIdentifier;

- (NSString *)loadBlueCatsIdentifier;
- (void)storeBlueCatsIdentifier:(NSString *)blueCatsIdentifier;

- (BCMutableArray *)loadSessions;
- (void)storeSessions:(BCMutableArray *)sessions;

- (NSDate *)loadResumedZoneMonitoringAt;
- (void)storeResumedZoneMonitoringAt:(NSDate *)resumedZoneMonitoringAt;

- (NSDate *)loadSuspendedZoneMonitoringAt;
- (void)storeSuspendedZoneMonitoringAt:(NSDate *)suspendedZoneMonitoringAt;

- (BCApp *)loadSDKRemoteConfigurations;
- (void) storeSDKRemoteConfigurations:(BCApp *)app;

@property(nonatomic, copy) NSDate *apiRetryAfter;

+ (BCUserDefaultsManager *)sharedManager;

@end
