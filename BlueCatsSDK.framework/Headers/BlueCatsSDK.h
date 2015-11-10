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

//! Project version string for BlueCatsBlueCatsSDK.
FOUNDATION_EXPORT const unsigned char BlueCatsBlueCatsSDKVersionString[];


#import <BlueCatsSDK/BCZone.h>
#import <BlueCatsSDK/BCZoneMonitor.h>
#import <BlueCatsSDK/BCTrigger.h>
#import <BlueCatsSDK/BCTriggeredEvent.h>
#import <BlueCatsSDK/BCSite.h>
#import <BlueCatsSDK/BCResource.h>
#import <BlueCatsSDK/BCPoint.h>
#import <BlueCatsSDK/BCMicroLocationManager.h>
#import <BlueCatsSDK/BCMicroLocation.h>
#import <BlueCatsSDK/BCMapPoint.h>
#import <BlueCatsSDK/BCMap.h>
#import <BlueCatsSDK/BCLocalNotification.h>
#import <BlueCatsSDK/BCLocalNotificationManager.h>
#import <BlueCatsSDK/BCJSONModel.h>
#import <BlueCatsSDK/BCJSONModel+BCCustomValueDataSource.h>
#import <BlueCatsSDK/BCCategoryDataSource.h>
#import <BlueCatsSDK/BCBeaconRegionVisit.h>
#import <BlueCatsSDK/BCBeaconDataSource.h>
#import <BlueCatsSDK/BCBeacon.h>
#import <BlueCatsSDK/BCApp.h>
#import <BlueCatsSDK/BCAddress.h>
#import <BlueCatsSDK/BCLassoManager.h>
#import <BlueCatsSDK/BCLasso.h>
#import <BlueCatsSDK/BCEventManager.h>
#import <BlueCatsSDK/BCEventFilterContext.h>
#import <BlueCatsSDK/BCEventFilter.h>
#import <BlueCatsSDK/BCEvent.h>
#import <BlueCatsSDK/BCCustomValue.h>
#import <BlueCatsSDK/BCCategory.h>
#import <BlueCatsSDK/BCBeaconVisit.h>
#import <BlueCatsSDK/BCDefinitions.h>

typedef NS_ENUM(int, BCStatus) {
    kBCStatusNeverPurred = 0,
    kBCStatusPurring,
    kBCStatusPurringWithErrors
};

typedef NS_ENUM(int, BCAppTokenVerificationStatus) {
    kBCAppTokenVerificationStatusNotProvided = 0,
    kBCAppTokenVerificationStatusNotVerified,
    kBCAppTokenVerificationStatusVerified,
    kBCAppTokenVerificationStatusInvalid
};

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
