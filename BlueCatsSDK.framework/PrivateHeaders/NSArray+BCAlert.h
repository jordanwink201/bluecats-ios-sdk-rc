//
//  NSArray+BCAlert.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 6/7/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BCAlertSeverity;

@interface NSArray (BCAlert)

- (NSArray *)filteredArrayUsingAlertSeverityID:(NSInteger)alertSeverityID;

- (NSArray *)sortedArrayUsingOccurredAtAscending:(BOOL)ascending;

@end
