//
//  NSArray+BCBeaconVisit.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 10/3/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (BCBeaconVisit)

- (NSArray *)filteredBeaconVisitArrayUsingSiteID:(NSString *)siteID;

- (NSArray *)filteredBeaconVisitArrayUsingLastRangedBeforeDate:(NSDate *)lastRangedBefore;

@end
