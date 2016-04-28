//
//  BCManagedBeaconVisit.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 9/25/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <CoreData/CoreData.h>

@class BCBeaconVisit;

@interface BCManagedBeaconVisit : NSManagedObject

- (BCBeaconVisit *)toBeaconVisit;

@end