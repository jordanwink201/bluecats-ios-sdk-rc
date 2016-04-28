//
//  BCMutableArray.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 8/21/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BCMutableArray : NSObject

- (NSArray *)copy;
- (NSUInteger)count;

- (void)insertObject:(id)object atIndex:(NSUInteger)index;

- (id)objectAtIndex:(NSUInteger)index;
- (id)firstObject;
- (id)lastObject;
- (BOOL)containsObject:(id)obj;

- (void)addObject:(id)obj;
- (void)addObjectsFromArray:(NSArray *)array;

- (void)removeAllObjects;
- (void)removeObject:(id)obj;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(NSUInteger)index;
- (void)removeObjectsAtIndexes:(NSIndexSet *)indexes;
- (void)removeObjectsInRange:(NSRange)range;

- (id)subarrayWithRange:(NSRange)range;

- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state
                                  objects:(id __unsafe_unretained [])stackbuf
                                    count:(NSUInteger)len;

+ (instancetype)arrayWithArray:(NSArray *)array;

@end
