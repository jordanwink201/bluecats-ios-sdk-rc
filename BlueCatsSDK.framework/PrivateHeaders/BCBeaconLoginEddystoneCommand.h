//
//  BCBeaconLoginEddystoneCommand.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 3/1/16.
//  Copyright © 2016 BlueCats. All rights reserved.
//

#import "BCPeripheralCommand.h"
#import "BCDefinitionsInternal.h"

@class BCBeacon;

@interface BCBeaconLoginEddystoneCommand : BCPeripheralCommand

@property (nonatomic) BCBeaconIndicatorResponse loginResult;
@property (nonatomic, strong) CBService *eddyService;
@property (nonatomic, strong) NSArray *characteristicsToDiscover;
@property (nonatomic, readonly, strong) NSDictionary *discoveredCharacteristics;

- (id)initWithBeacon:(BCBeacon *)beacon peripheral:(CBPeripheral *)peripheral;
- (id)initWithBeacon:(BCBeacon *)beacon
          peripheral:(CBPeripheral *)peripheral
         andPasscode:(NSData *)passcode;

@end
