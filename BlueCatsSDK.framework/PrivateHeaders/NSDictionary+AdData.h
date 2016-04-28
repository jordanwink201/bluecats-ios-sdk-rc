//
//  NSDictionary+AdData.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 4/18/13.
//  Copyright (c) 2013 Bluecats. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (AdData)

- (NSMutableDictionary *)mutableAdDataWithProximityUUIDStrings:(NSArray*)proximityUUIDStrings;

@end
