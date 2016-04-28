//
//  BCManagedBeaconRegion.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 10/17/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <CoreData/CoreData.h>
#import "BCManagedBeaconRegionVisit.h"
#import "BCManagedBeacon.h"

@interface BCManagedBeaconRegion : NSManagedObject
@end

@interface BCManagedBeaconRegion (CoreDataGeneratedAccessors)

- (void)addBeaconRegionVisitObject:(BCManagedBeaconRegionVisit *)value;
- (void)removeBeaconRegionVisitObject:(BCManagedBeaconRegionVisit *)value;
- (void)addBeaconRegionVisits:(NSSet *)values;
- (void)removeBeaconRegionVisits:(NSSet *)values;

- (void)addBeaconObject:(BCManagedBeacon *)value;
- (void)removeBeaconObject:(BCManagedBeacon *)value;
- (void)addBeacons:(NSSet *)values;
- (void)removeBeacons:(NSSet *)values;

@end
