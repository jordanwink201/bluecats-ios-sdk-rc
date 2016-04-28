//
//  NSData+BCConverter.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 3/31/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (BCConverter)

- (NSString *)toHexStringReversed:(BOOL)reversed;

- (NSString *)toUUIDString;

- (NSNumber *)toNumberWithInt8;

- (NSNumber *)toNumberWithTwosComplementOfInt8;

- (NSNumber *)toNumberWithInt16;

- (NSNumber *)toNumberWithInt32;

- (NSString *)toModelNumber;

- (NSString *)toFirmwareVersion;

@end
