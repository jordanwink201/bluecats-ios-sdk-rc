//
//  BCCacheState.h
//  BlueCatsSDK
//
//  Created by Damien Clarke on 1/05/2015.
//  Copyright (c) 2015 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BCCacheState : NSObject

@property (nonatomic, strong) NSDate* lastCompletedAccessSync;
@property (nonatomic, strong) NSDate* lastCompletedFullSync;
@property (nonatomic, strong) NSDate* lastCompletedRefresh;
@property (nonatomic, strong) NSDate* latestModifiedAt;
@property (nonatomic, strong) NSDate* lastValidatedWithNoActionRequired;
@property (nonatomic, assign) NSInteger objectCountAfterLastSync;

-(BOOL)hasAccessSyncExpiredForTimeInterval:(NSTimeInterval)expiryInterval;
-(BOOL)hasFullSyncExpiredForTimeInterval:(NSTimeInterval)expiryInterval;
-(BOOL)hasCacheRefreshExpiredForTimeInterval:(NSTimeInterval)expiryInterval;
-(BOOL)requiresValidationAfterTimeInterval:(NSTimeInterval)expiryInterval;

@end
