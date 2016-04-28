//
//  BCManagedBeacon.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 9/24/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <CoreData/CoreData.h>
#import "BCManagedCustomValue.h"
#import "BCManagedBeaconCategory.h"
#import "BCBeacon.h"
#import "BCManagedBeaconVisit.h"

@interface BCManagedBeacon : NSManagedObject

- (BCBeacon *)toBeacon;
- (void)setValuesWithBeacon:(BCBeacon*)beacon;

@end

@interface BCManagedBeacon (CoreDataGeneratedAccessors)

- (void)addCustomValuesObject:(BCManagedCustomValue *)value;
- (void)removeCustomValuesObject:(BCManagedCustomValue *)value;
- (void)addCustomValues:(NSSet *)values;
- (void)removeCustomValues:(NSSet *)values;

- (void)addCategoriesObject:(BCManagedBeaconCategory *)category;
- (void)removeCategoriesObject:(BCManagedBeaconCategory *)category;
- (void)addCategories:(NSSet *)categories;
- (void)removeCategories:(NSSet *)categories;

- (void)addBeaconVisitsObject:(BCManagedBeaconVisit *)beaconVisit;
- (void)removeBeaconVisitsObject:(BCManagedBeaconVisit *)beaconVisit;
- (void)addBeaconVisits:(NSSet *)beaconVisits;
- (void)removeBeaconVisits:(NSSet *)beaconVisits;

@end
