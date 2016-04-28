//
//  BCBeaconDataRequestOperation.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 1/7/15.
//  Copyright (c) 2015 BlueCats. All rights reserved.
//

#import "BCBeaconOperation.h"

@interface BCBeaconDataRequestOperation : BCBeaconOperation
@property (nonatomic) NSArray *requestDataArray;
@property (nonatomic) NSMutableArray *responseDataArray;
@end
