//
//  BCBeaconSettingsUpdateOfflineOperation.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 11/6/15.
//  Copyright © 2015 BlueCats. All rights reserved.
//

#import "BCBeaconOperation.h"

@interface BCBeaconSettingsUpdateOfflineOperation : BCBeaconOperation

- (instancetype)initWithBeacon:(BCBeacon *)beacon
          peripheralIdentifier:(NSUUID*)peripheralIdentifier
                  settingForKey:(NSDictionary *)settingForKey;

@end
