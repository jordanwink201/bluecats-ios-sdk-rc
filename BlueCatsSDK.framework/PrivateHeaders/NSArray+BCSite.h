//
//  NSArray+BCSite.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 8/12/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>

@class BCSite;

@interface NSArray (BCSite)

- (NSArray<BCSite *> *)sortedSiteArrayUsingLocation:(CLLocation *)location ascending:(BOOL)ascending;
- (NSArray<BCSite *> *)sortedSiteArrayUsingStateAbbrevAndCityNameAndSiteNameAscending:(BOOL)ascending;

- (NSArray<BCSite *> *)filteredSiteArrayUsingLocation:(CLLocation *)location distance:(CLLocationDistance)distance;
- (NSArray<BCSite *> *)filteredSiteArrayUsingTeamID:(NSString *)teamID;
- (NSArray<BCSite *> *)filteredSiteArrayUsingSyncedOrRestored:(BOOL)syncedOrRestored;

- (BCSite *)siteWithSiteID:(NSString *)siteID;

@end
