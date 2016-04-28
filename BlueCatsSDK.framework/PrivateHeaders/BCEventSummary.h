//
//  BCEventSummary.h
//  BlueCatsSDK
//
//  Created by Damien Clarke on 21/11/2014.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BCJSONModel.h"

@interface BCEventSummary : NSObject<NSCopying>

@property (nonatomic, copy) NSString *eventIdentifier;
@property (nonatomic, copy) NSString *eventName;
@property (nonatomic, assign) NSInteger triggeredCount;
@property (nonatomic, copy) NSDate *firstTriggeredAt;
@property (nonatomic, copy) NSDate *lastTriggeredAt;

+ (void)storedEventSummariesWithPredicate:(NSPredicate *)predicate sortDescriptors:(NSArray *)sortDesc
                           success:(void (^)(NSArray *eventSummaries))success
                                  failure:(void (^)(NSError *error))failure;

+ (void)numberOfEventSummariesWithPredicate:(NSPredicate *)predicate
                             success:(void (^)(NSUInteger count))success
                             failure:(void (^)(NSError *error))failure;

@end
