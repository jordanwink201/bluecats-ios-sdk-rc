//
//  BCManagedSite.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 10/14/15.
//  Copyright © 2015 BlueCats. All rights reserved.
//

#import <CoreData/CoreData.h>
#import "BCManagedCustomValue.h"
#import "BCSite.h"

@interface BCManagedSite : NSManagedObject

- (BCSite *)toSite;
- (void)setValuesWithSite:(BCSite *)site;

+ (BCManagedSite *)managedObjectFromSite:(BCSite*)site inContext:(NSManagedObjectContext*)context;

@end

@interface BCManagedSite (CoreDataGeneratedAccessors)

- (void)addCustomValuesObject:(BCManagedCustomValue *)value;
- (void)removeCustomValuesObject:(BCManagedCustomValue *)value;
- (void)addCustomValues:(NSSet *)values;
- (void)removeCustomValues:(NSSet *)values;

@end