//
//  BCBeaconFirmwareUpdateLegacyOperation.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 5/17/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import "BCBeaconOperation.h"

@interface BCBeaconFirmwareUpdateLegacyOperation : BCBeaconOperation

@property (nonatomic, strong) NSNumber *delayBetweenWrites;

@end
