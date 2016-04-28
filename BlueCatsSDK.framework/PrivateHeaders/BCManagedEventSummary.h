//
//  BCManagedEventSummary.h
//  BlueCatsSDK
//
//  Created by Damien Clarke on 24/11/2014.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <CoreData/CoreData.h>

@class BCEventSummary;

@interface BCManagedEventSummary : NSManagedObject

- (BCEventSummary *)toEventSummary;
- (void)setValuesWithEventSummary:(BCEventSummary *)eventSummary;

@end
