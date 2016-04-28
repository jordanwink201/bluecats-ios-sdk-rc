//
//  BCBeacon+Stringify.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 12/1/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import "BCBeacon.h"

@interface BCBeacon (Stringify)

- (NSString *)privacyDurationString;

- (NSString *)syncStatusString;

- (NSString *)verificationStatusString;

- (NSString *)versionString;

- (NSString *)versionStringFromBlueCatsAdData;

- (NSString *)pendingVersionString;

- (NSString *)adDataTypeStringFromBlueCatsAdData;

- (NSString *)targetSpeedString;

- (NSString *)targetSpeedInMillisecondsString;

- (NSString *)targetSpeedInMillisecondsStringFromBlueCatsAdData;

- (NSString *)beaconLoudnessString;

- (NSString *)beaconLoudnessLevelString;

- (NSString *)beaconLoudnessLevelStringFromBlueCatsAdData;

- (NSString *)majorString;

- (NSString *)majorStringFromBlueCatsAdData;

- (NSString *)minorString;

- (NSString *)minorStringFromBlueCatsAdData;

- (NSString *)batteryStatusString;

- (NSString *)batteryLevelStringFromBlueCatsAdData;

- (NSString *)txPowerLevelStringFromBlueCatsAdData;

- (NSString *)measuredPowerAt1MeterString;

- (NSString *)measuredPowerAt1MeterStringFromBlueCatsAdData;

- (NSString *)measuredPowerAt1MeterStringFromBeaconLoudness;

- (NSString *)accuracyString;

- (NSString *)proximityString;

- (NSString *)rssiString;

- (NSString *)mapPointString;

- (NSString *)categoryCountString;

- (NSString *)categoriesJoinedByString:(NSString *)separator;

- (NSString *)lastKnownBatteryLevelString;

@end
