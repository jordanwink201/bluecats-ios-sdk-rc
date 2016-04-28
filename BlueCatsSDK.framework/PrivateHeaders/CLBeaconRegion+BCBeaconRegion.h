//
// Created by bluecats on 20/10/2015.
// Copyright (c) 2015 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@class BCBeaconRegion;

@interface CLBeaconRegion (BCBeaconRegion)

+ (instancetype) clBeaconRegionWithBCBeaconRegion:(BCBeaconRegion *)region;
@end