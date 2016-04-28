//
//  BCDiscoverBlueCatsServiceCommand.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 2/13/15.
//  Copyright (c) 2015 BlueCats. All rights reserved.
//

#import "BCPeripheralCommand.h"

@interface BCDiscoverBlueCatsServiceCommand : BCPeripheralCommand

@property (nonatomic, strong) CBService *blueCatsService;
@property (nonatomic, strong) NSArray *characteristicsToDiscover;
@property (nonatomic, readonly, strong) NSDictionary *discoveredCharacteristics;

- (id)initWithPeripheral:(CBPeripheral *)peripheral characteristicsToDiscover:(NSArray *)characteristics;

@end
