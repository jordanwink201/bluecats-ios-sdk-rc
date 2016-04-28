//
//  BCBeaconControlCommand.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 12/19/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//

#import "BCBeaconOperation.h"

@class BCBeacon;

@interface BCBeaconControlOperation : BCBeaconOperation

@property (nonatomic, assign) BCBeaconOpcode opcode;

- (id)initWithBeacon:(BCBeacon *)beacon peripheralIdentifier:(NSUUID *)peripheralIdentifier opcode:(BCBeaconOpcode)opcode;

@end
