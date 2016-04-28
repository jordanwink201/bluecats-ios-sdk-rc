//
//  BCManagedCustomValue.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 9/24/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <CoreData/CoreData.h>
#import "BCCustomValue.h"

@interface BCManagedCustomValue : NSManagedObject

- (BCCustomValue *)toCustomValue;

+ (BCManagedCustomValue *)managedObjectFromCustomValue:(BCCustomValue *)customValue inContext:(NSManagedObjectContext *)context;

@end
