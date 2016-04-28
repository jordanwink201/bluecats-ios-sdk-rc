//
//  BCManagedCategory.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 9/24/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <CoreData/CoreData.h>
#import "BCManagedCustomValue.h"
#import "BCCategory.h"

@interface BCManagedBeaconCategory : NSManagedObject
- (BCCategory *)toCategory;

- (void)updateByCategory:(BCCategory*) category inContext:(NSManagedObjectContext *)context;

+ (BCManagedBeaconCategory *)managedObjectFromCategory:(BCCategory*)category
                                           andBeaconID:(NSString*)beaconID
                                             inContext:(NSManagedObjectContext*)context;

@end

@interface BCManagedBeaconCategory (CoreDataGeneratedAccessors)

- (void)addCustomValuesObject:(BCManagedCustomValue *)value;
- (void)removeCustomValuesObject:(BCManagedCustomValue *)value;
- (void)addCustomValues:(NSSet *)values;
- (void)removeCustomValues:(NSSet *)values;

@end
