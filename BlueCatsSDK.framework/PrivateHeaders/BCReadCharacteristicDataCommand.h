//
//  BCReadCharacteristicDataCommand.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 12/2/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//

#import "BCPeripheralCommand.h"

@interface BCReadCharacteristicDataCommand : BCPeripheralCommand

@property (nonatomic, readonly, strong) CBCharacteristic *characteristic;
@property (nonatomic, readonly, strong) NSData *characteristicData;

- (id)initWithPeripheral:(CBPeripheral *)peripheral
                 service:(CBService *)service
          characteristic:(CBCharacteristic *)characteristic;
@end
