//
//  BCBeaconFirmwareUpdateOperation.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 1/5/16.
//  Copyright © 2016 BlueCats. All rights reserved.
//

#import "BCBeaconOperation.h"

@interface BCBeaconFirmwareUpdateOperation : BCBeaconOperation
@property (nonatomic) NSString *targetFwVersion;
@end
