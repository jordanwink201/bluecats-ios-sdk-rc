//
//  BCDiscoverEddystoneServiceCommand.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 2/29/16.
//  Copyright © 2016 BlueCats. All rights reserved.
//

#import "BCPeripheralCommand.h"

@interface BCDiscoverEddystoneServiceCommand : BCPeripheralCommand

@property (nonatomic, strong) CBService *eddystoneService;
@property (nonatomic, strong) NSArray *characteristicsToDiscover;
@property (nonatomic, readonly, strong) NSDictionary *discoveredCharacteristics;

- (id)initWithPeripheral:(CBPeripheral *)peripheral characteristicsToDiscover:(NSArray *)characteristics;

@end
