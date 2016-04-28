//
//  BCRequestDataCommand.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 1/7/15.
//  Copyright (c) 2015 BlueCats. All rights reserved.
//

#import "BCPeripheralCommand.h"

@interface BCRequestDataCommand : BCPeripheralCommand

@property (nonatomic, strong) CBUUID *readCharacteristicUUID;
@property (nonatomic, strong) CBUUID *writeCharacteristicUUID;
@property (nonatomic, strong) NSData *responseData;

- (id)initWithPeripheral:(CBPeripheral *)peripheral
                 service:(CBService *)service
      writeCharacteristicUUID:(CBUUID *)writeCharacteristicUUID
  readCharacteristicUUID:(CBUUID *)readCharacteristicUUID
      characteristicData:(NSData *)characteristicData;

- (id)initWithPeripheral:(CBPeripheral *)peripheral
                 service:(CBService *)service readCharacteristicUUIDString:(NSString *)readCharacteristicUUIDString writeCharacteristicUUIDString:(NSString *)writeCharacteristicUUIDString characteristicData:(NSData *)characteristicData;


@end
