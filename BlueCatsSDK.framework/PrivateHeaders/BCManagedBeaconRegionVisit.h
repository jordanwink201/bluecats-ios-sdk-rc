//
//  BCManagedBeaconRegionVisit.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 10/17/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <CoreData/CoreData.h>

@class BCBeaconRegionVisit;

@interface BCManagedBeaconRegionVisit : NSManagedObject

- (BCBeaconRegionVisit *)toBeaconRegionVisit;

@end
