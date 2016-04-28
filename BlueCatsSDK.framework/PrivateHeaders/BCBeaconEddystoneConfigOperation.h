//
//  BCBeaconEddystoneConfigOperation.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 2/29/16.
//  Copyright © 2016 BlueCats. All rights reserved.
//

#import "BCBeaconOperation.h"

@class BCBeacon;

@interface BCBeaconEddystoneConfigOperation : BCBeaconOperation

- (instancetype)initWithBeacon:(BCBeacon *)beacon
          peripheralIdentifier:(NSUUID*)peripheralIdentifier
                 settingForKey:(NSDictionary *)settingForKey;
@end
