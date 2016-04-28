//
//  CBUUID+BCAdditions.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 11/19/12.
//  Copyright (c) 2012 Bluecats. All rights reserved.
//

#import <CoreBluetooth/CoreBluetooth.h>

@interface CBUUID (BCAdditions)

-(const char *)stringValue;
-(BOOL)isEqualToUUID:(CBUUID *)UUID;
-(BOOL)isEqualToInt:(UInt16)UUID;

@end
