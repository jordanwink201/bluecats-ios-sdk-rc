//
//  NSObject+BCCacher.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 8/26/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (BCCacher)

- (BOOL)hasCacheExpiredForObjectsCachedAt:(NSDate *)cachedAt;

@end
