//
//  BCBeaconRegionSyncResult.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 11/30/15.
//  Copyright © 2015 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BCBeaconRegionSyncResult : NSObject

@property (nonatomic, strong) NSNumber* httpStatusCode;
@property (nonatomic, strong) NSArray *beaconRegions;

@end
