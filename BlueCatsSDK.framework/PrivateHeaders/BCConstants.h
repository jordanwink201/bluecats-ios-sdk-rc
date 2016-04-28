//
//  BCGlobal.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 10/26/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const BCErrorDomain;

extern NSString *const BCDefaultBeaconProximityUUIDString;

extern NSString *const BCProximityUUIDString;
extern NSString *const BCBeaconRegionIdentifier;

extern NSString *const BCServiceUUIDStringEddystoneService;
extern NSString *const BCServiceUUIDStringBlueCatsLong;
extern NSString *const BCServiceUUIDStringBlueCatsLongReverse;
extern NSString *const BCServiceUUIDStringBlueCatsShort;
extern NSString *const BCServiceUUIDStringBattery;
extern NSString *const BCServiceUUIDStringTXPower;
extern NSString *const BCServiceUUIDStringDeviceInformation;
extern NSString *const BCCharacteristicUUIDStringWater;
extern NSString *const BCCharacteristicUUIDStringMilk;
extern NSString *const BCCharacteristicUUIDStringGravy;
extern NSString *const BCCharacteristicUUIDStringControl;
extern NSString *const BCCharacteristicUUIDStringIndicator;
extern NSString *const BCCharacteristicUUIDStringMeasuredPower;
extern NSString *const BCCharacteristicUUIDStringVersion;
extern NSString *const BCCharacteristicUUIDStringBeaconLoudness;
extern NSString *const BCCharacteristicUUIDStringTargetSpeed;
extern NSString *const BCCharacteristicUUIDStringProximityUUIDString;
extern NSString *const BCCharacteristicUUIDStringMajor;
extern NSString *const BCCharacteristicUUIDStringMinor;
extern NSString *const BCCharacteristicUUIDStringBatteryLevel;
extern NSString *const BCCharacteristicUUIDStringTXPowerLevel;
extern NSString *const BCCharacteristicUUIDStringMfrName;

extern NSString *const ESCharacteristicUUIDStringLockstate;
extern NSString *const ESCharacteristicUUIDStringUnlock;
extern NSString *const ESCharacteristicUUIDStringBroadcastCapability;
extern NSString *const ESCharacteristicUUIDStringRWADVSlot;
extern NSString *const ESCharacteristicUUIDStringActiveSlot;

extern NSString *const BCSDKVersion;
extern NSString *const BCApiBaseURL;
extern NSString *const BCSqliteDBFileName;
extern NSInteger const BCSqliteModelVersion;

extern double const BCDefaultNearbySitesDistanceFilterInMeters;

extern NSInteger const BCDistanceFromSiteInMeters;

extern NSTimeInterval const BCScanOnTimeIntervalInSeconds;
extern NSTimeInterval const BCShortScanOffTimeIntervalInSeconds;
extern NSTimeInterval const BCMediumScanOffTimeIntervalInSeconds;
extern NSTimeInterval const BCLongScanOffTimeIntervalInSeconds;
extern NSTimeInterval const BCRemainInAppInForegroundScanStateTimeIntervalInSeconds;
extern NSTimeInterval const BCRemainInAppInBackgroundScanStateTimeIntervalInSeconds;

extern NSTimeInterval const BCMinimumBackgroundSessionTimeIntervalInSeconds;
extern NSTimeInterval const BCBackgroundSessionTimeIntervalInSeconds;
extern NSTimeInterval const BCMinimumTimeIntervalBetweenBackgroundSessionsInSeconds;
extern NSInteger      const BCMaximumDailyBackgroundUsageInMinutes;

extern NSTimeInterval const BCCacheRefreshTimeIntervalInSeconds;
extern NSTimeInterval const BCCacheRefreshTimeIntervalLowPriorityInSeconds;
extern NSTimeInterval const BCMinimumCacheRefreshTimeIntervalInSeconds;
extern NSTimeInterval const BCCacheExpiryForAccessInSeconds;
extern NSTimeInterval const BCCacheExpiryForFullSyncInSeconds;

extern NSTimeInterval const BCApiRetryAfterDefaultTimeIntervalInSeconds;

extern NSInteger const BCEventHistoryRetainedForDays;
extern NSInteger const BCEventHistoryRecordLimit;

extern NSInteger const BCDateConstantMinutesInDay;

extern NSInteger const BCBeaconVisitsPerPostLimit;
extern NSInteger const BCEventsPerPostLimit;