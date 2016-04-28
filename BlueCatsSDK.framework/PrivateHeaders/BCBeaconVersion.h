//
//  BCBeaconVersion.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 3/14/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import "BCJSONModel.h"
#import <Foundation/Foundation.h>

@class BCBeaconLoudness, BCTargetSpeed, BCBeaconRegion, BCBeaconMode;

@interface BCBeaconVersion : BCJSONModel

@property (nonatomic, copy) NSString *beaconVersionID;
@property (nonatomic, copy) NSNumber *version;
@property (nonatomic, copy) NSString *proximityUUIDString;
@property (nonatomic, copy) NSNumber *major;
@property (nonatomic, copy) NSNumber *minor;
@property (nonatomic, copy) BCTargetSpeed *targetSpeed;
@property (nonatomic, copy) BCBeaconLoudness *beaconLoudness;
@property (nonatomic, copy) NSNumber *measuredPowerAt1Meter;
@property (nonatomic, copy) BCBeaconRegion *beaconRegion;
@property (nonatomic, copy) BCBeaconMode *beaconMode;
@property (nonatomic, copy) NSString *firmwareVersion;
@property (nonatomic, copy) NSNumber *privacyDuration;
@property (nonatomic, copy) NSDate *confirmedAt;

- (NSNumber *)measuredPowerAt1MeterOrDefault;

- (BOOL)isFirmwareVersionGreaterThanVersion:(NSString *)version;
- (BOOL)isFirmwareVersionGreaterThanOrEqualVersion:(NSString *)version;
- (BOOL)isFirmwareVersionLessThanOrEqualVersion:(NSString *)version;
- (BOOL)isFirmwareVersionLessThanVersion:(NSString *)version;

@end
