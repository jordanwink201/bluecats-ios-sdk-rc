//
//  BCStreamDataCommand.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 1/12/16.
//  Copyright © 2016 BlueCats. All rights reserved.
//

#import "BCPeripheralCommand.h"

@interface BCStreamDataCommand : BCPeripheralCommand

@property (nonatomic, readonly, strong) CBCharacteristic *characteristic;
@property (nonatomic, assign) NSUInteger chunkSize;

- (id)initWithPeripheral:(CBPeripheral *)peripheral
                 service:(CBService *)service
          characteristic:(CBCharacteristic *)characteristic
                data:(NSData *)data
      delayBetweenWrites:(float)delayBetweenWrites;

@end
