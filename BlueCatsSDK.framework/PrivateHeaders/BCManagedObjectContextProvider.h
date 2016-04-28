//
//  BCManagedObjectContextProvider.h
//  BlueCatsSDK
//
//  Created by Damien Clarke on 30/06/2014.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface BCManagedObjectContextProvider : NSObject

- (NSManagedObjectContext *) createManagedObjectContextWithConcurrencyType:(NSManagedObjectContextConcurrencyType)concurrencyType;

+ (BCManagedObjectContextProvider *)sharedProvider;

@end
