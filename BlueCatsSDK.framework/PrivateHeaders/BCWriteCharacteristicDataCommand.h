//
//  BCWriteCharacteristicDataCommand.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 4/19/13.
//  Copyright (c) 2013 Bluecats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BCPeripheralCommand.h"

@class CBPeripheral;

@interface BCWriteCharacteristicDataCommand : BCPeripheralCommand

@property (nonatomic, readonly) CBCharacteristic *characteristic;
@property (nonatomic) NSInteger writeDataBlockSize;
@property (nonatomic, readonly) CBCharacteristic *notifyCharacteristic;


- (id)initWithPeripheral:(CBPeripheral *)peripheral
                 service:(CBService *)service
          characteristic:(CBCharacteristic *)characteristic
      characteristicData:(NSData *)characteristicData;

- (id)initWithPeripheral:(CBPeripheral *)peripheral
                 service:(CBService *)service
      characteristic:(CBCharacteristic *)characteristic
      characteristicData:(NSData *)characteristicData
    notifyCharacteristic:(CBCharacteristic *)notifyCharacteristic;

@end
