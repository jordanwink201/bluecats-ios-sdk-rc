//
//  BCBeaconFirmware.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 5/18/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import "BCJSONModel.h"
#import <Foundation/Foundation.h>

@interface BCBeaconFirmware : BCJSONModel

@property (nonatomic, copy) NSString *beaconFirmwareID;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, copy) NSString *description;
@property (nonatomic, copy) NSString *hexFileHash;
@property (nonatomic, copy) NSString *otaFileHash;

@end
