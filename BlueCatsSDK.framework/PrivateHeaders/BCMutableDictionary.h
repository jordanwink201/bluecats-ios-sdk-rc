//
//  GCDMutableArray.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 4/30/13.
//
//

#import <Foundation/Foundation.h>

@interface BCMutableDictionary : NSObject

- (id)objectForKey:(id)aKey;

- (void)removeObjectForKey:(id)key;
- (void)removeObjectsForKeys:(NSArray*)keys;
- (void)removeAllObjects;

- (void)setObject:(id)obj forKey:(id)key;

- (NSArray*)allValues;
- (NSArray*)allKeys;

//- (NSEnumerator*)keyEnumerator;
//- (NSEnumerator*)objectEnumerator;

- (NSUInteger)count;

//- (NSString*)keyForObjectIdenticalTo:(id)obj;

@end
