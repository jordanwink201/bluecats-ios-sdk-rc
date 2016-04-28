//
//  BCStreamFileDataCommand.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 5/27/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import "BCPeripheralCommand.h"

@interface BCStreamFileDataCommand : BCPeripheralCommand

@property (nonatomic, readonly, strong) CBCharacteristic *characteristic;

- (id)initWithPeripheral:(CBPeripheral *)peripheral
                 service:(CBService *)service
      characteristic:(CBCharacteristic *)characteristic
                filePath:(NSString *)filePath
      delayBetweenWrites:(float)delayBetweenWrites;

@end
