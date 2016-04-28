//
//  BCBeaconUtilities.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 5/20/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface BCBeaconUtilities : NSObject

+ (NSString *)iBeaconKeyForProximityUUIDString:(NSString *)proximityUUIDString
                                         major:(NSNumber *)major
                                         minor:(NSNumber *)minor;

+ (BOOL)isDefaultKeepAliveMajor:(NSNumber *)major
                          minor:(NSNumber *)minor
            proximityUUIDString:(NSString *)proximityUUIDString;

@end
