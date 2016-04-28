//
//  BCEventMonitor.h
//  BlueCatsSDK
//
//  Created by Damien Clarke on 1/07/2014.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BCTrigger.h"
#import "BCEvent.h"
#import "BCTriggeredEvent.h"
#import "BCEventSummary.h"

@interface BCEventMonitor : NSObject

@property (nonatomic, strong) BCTrigger *trigger;
@property (nonatomic, strong) BCEventSummary *eventSummary;
@property (nonatomic, strong) void (^eventHandler)(BCTriggeredEvent*);

- (BCTriggeredEvent *)triggerEventWithRangedBeacons:(NSArray*)rangedBeacons inSites:(NSArray *)sites;

@end
