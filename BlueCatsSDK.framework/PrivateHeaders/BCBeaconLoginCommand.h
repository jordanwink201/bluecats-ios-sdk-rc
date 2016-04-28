//
//  BCBeaconLoginCommand.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 9/22/15.
//  Copyright © 2015 BlueCats. All rights reserved.
//

#import "BCPeripheralCommand.h"
#import "BCBeaconOperation.h"

@class BCBeacon;

@interface BCBeaconLoginCommand : BCPeripheralCommand

@property (nonatomic) BCBeaconIndicatorResponse loginResult;
@property (nonatomic, strong) CBService *blueCatsService;
@property (nonatomic, strong) NSArray *characteristicsToDiscover;
@property (nonatomic, readonly, strong) NSDictionary *discoveredCharacteristics;

- (id)initWithBeacon:(BCBeacon *)beacon peripheral:(CBPeripheral *)peripheral;
- (id)initWithBeacon:(BCBeacon *)beacon
          peripheral:(CBPeripheral *)peripheral
         andPasscode:(NSData *)passcode;
@end
