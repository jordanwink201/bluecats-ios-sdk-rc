//
//  NSArray+BCTeam.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 1/8/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BCTeam;

@interface NSArray (BCTeam)

- (NSArray<BCTeam *> *)sortedTeamArrayUsingNameAscending:(BOOL)ascending;

- (NSArray<BCTeam *> *)filteredTeamArrayUsingOwnerUsername:(NSString *)userName;

@end
