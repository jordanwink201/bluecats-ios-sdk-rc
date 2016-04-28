//
//  BCBeaconTransportDataRequestOperation.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 1/7/15.
//  Copyright (c) 2015 BlueCats. All rights reserved.
//

#import "BCBeaconOperation.h"

@interface BCBeaconTransportDataRequestOperation : BCBeaconOperation
@property (nonatomic) NSData *requestData;
@property (nonatomic) NSData *responseData;
@end
