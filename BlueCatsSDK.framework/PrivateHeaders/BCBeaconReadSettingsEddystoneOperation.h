//
//  BCBeaconReadSettingsEddystoneOperation.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 3/3/16.
//  Copyright © 2016 BlueCats. All rights reserved.
//

#import "BCBeaconOperation.h"

@interface BCBeaconReadSettingsEddystoneOperation : BCBeaconOperation

- (instancetype)initWithBeacon:(BCBeacon *)beacon
          peripheralIdentifier:(NSUUID*)peripheralIdentifier
                      passcode:(NSString *)passcode;

@property (nonatomic, readonly) NSDictionary *settings;
@end

extern NSString *const BCEddySettingVersionKey;
extern NSString *const BCEddySettingTotalNumSlotsKey;
extern NSString *const BCEddySettingTotalNumEIDSlotsKey;
extern NSString *const BCEddySettingCapabilitiesBitmaskKey;
extern NSString *const BCEddySettingFramesSupportedBitmaskKey;
extern NSString *const BCEddySettingTxPowersKey;
