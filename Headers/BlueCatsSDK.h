//
//  BlueCatsBlueCatsSDK.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 2/13/13.
//  Copyright (c) 2013 Bluecats. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for BlueCatsSDK.
FOUNDATION_EXPORT double BlueCatsVersionNumber;

//! Project version string for BlueCatsSDK.
FOUNDATION_EXPORT const unsigned char BlueCatsSDKVersionString[];


#import "BCZone.h"
#import "BCZoneMonitor.h"
#import "BCTrigger.h"
#import "BCTriggeredEvent.h"
#import "BCSite.h"
#import "BCResource.h"
#import "BCPoint.h"
#import "BCMicroLocationManager.h"
#import "BCMicroLocation.h"
#import "BCMapPoint.h"
#import "BCMap.h"
#import "BCLocalNotification.h"
#import "BCLocalNotificationManager.h"
#import "BCJSONModel.h"
#import "BCJSONModel+BCCustomValueDataSource.h"
#import "BCCategoryDataSource.h"
#import "BCBeaconRegionVisit.h"
#import "BCBeaconDataSource.h"
#import "BCBeacon.h"
#import "BCApp.h"
#import "BCAddress.h"
#import "BCLassoManager.h"
#import "BCLasso.h"
#import "BCEventManager.h"
#import "BCEventFilterContext.h"
#import "BCEventFilter.h"
#import "BCEvent.h"
#import "BCCustomValue.h"
#import "BCCategory.h"
#import "BCBeaconVisit.h"
#import "BCDefinitions.h"

@interface BlueCatsSDK : NSObject

+ (void)setOptions:(NSDictionary*)options;

+ (void)startPurring:(void (^)(BCStatus status))completion;
+ (void)startPurringWithAppToken:(NSString *)appToken completion:(void (^)(BCStatus status))completion;

+ (void)stopPurring;

+ (void)setAppToken:(NSString *)appToken;
+ (void)setCredentialsWithUserName:(NSString *)userName password:(NSString *)password;

+ (BCStatus)status;
+ (BCAppTokenVerificationStatus)appTokenVerificationStatus;
+ (BOOL)isNetworkReachable;
+ (BOOL)isLocationAuthorized;
+ (BOOL)isBluetoothEnabled;

#if defined(__IPHONE_OS_VERSION_MIN_REQUIRED)
+ (void)requestAlwaysLocationAuthorization;
+ (void)requestWhenInUseLocationAuthorization;
#else
+ (void)requestLocationAuthorization;
#endif


+(BCApp*) currentApp;

+(void)logEventWithValue:(NSString *)value1 value:(NSString *)value2 value:(NSString *)value3;

@end

extern NSString * const BCOptionApiBaseURL;
extern NSString * const BCOptionUseStageApi;
extern NSString * const BCOptionTrackBeaconVisits;
extern NSString * const BCOptionMonitorBlueCatsRegionOnStartup;
extern NSString * const BCOptionMonitorAllAvailableRegionsOnStartup;
extern NSString * const BCOptionUseEnergySaverScanStrategy;
extern NSString * const BCOptionScanInBackground;
extern NSString * const BCOptionBackgroundSessionTimeIntervalInSeconds;
extern NSString * const BCOptionMaximumDailyBackgroundUsageInMinutes;
extern NSString * const BCOptionCrowdSourceBeaconUpdates;
extern NSString * const BCOptionUseLocalStorage;
extern NSString * const BCOptionCacheAllBeaconsForApp;
extern NSString * const BCOptionDiscoverBeaconsNearby;
extern NSString * const BCOptionCacheSitesNearbyByLocation;
extern NSString * const BCOptionCacheRefreshTimeIntervalInSeconds;
extern NSString * const BCOptionShowBluetoothPowerWarningMessage;
extern NSString * const BCOptionAutoTrackStandardEvents;

// public notifications

extern NSString * const BCNotificationBluetoothPoweredOn;

// standard event keys

extern NSString * const BCAnalyticEventAppEnteredForeground;
extern NSString * const BCAnalyticEventAppEnteredBackground;
extern NSString * const BCAnalyticEventAppResignedActive;
extern NSString * const BCAnalyticEventAppBecameActive;
extern NSString * const BCAnalyticEventAppWillTerminate;
extern NSString * const BCAnalyticeVentAppDidRxLocalNotification;
extern NSString * const BCAnalyticEventSDKStartPurring;
extern NSString * const BCAnalyticEventSDKStopPurring;
