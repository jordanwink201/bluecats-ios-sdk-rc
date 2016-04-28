//
//  BCStringify.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 12/1/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BCStringify : NSObject

+ (NSString *)stringWithMilliseconds:(NSInteger)milliseconds;

+ (NSString *)stringWithIntegerNumber:(NSNumber *)number;

+ (NSString *)stringWithIntegerValue:(NSInteger)value;

+ (NSString *)stringWithPower:(NSNumber *)power;

+ (NSString *)stringWithMinutes:(NSNumber *)hours;

+ (NSString *)stringWithDistance:(double)distance;

+ (NSString *)stringWithPercentage:(NSNumber *)percentage;

+ (NSString *)stringWithCoordinate:(NSNumber *)coordinate andPrecision:(NSUInteger)precision;

@end
