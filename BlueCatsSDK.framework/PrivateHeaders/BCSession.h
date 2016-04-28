//
//  BCSession.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 10/27/15.
//  Copyright © 2015 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BCJSONModel.h"
#import "BCDateRange.h"

@class BCMutableArray;

@interface BCSession : BCJSONModel

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, strong) BCDateRange *dateRange;
@property (nonatomic, strong) NSDate *expiresAt;
@property (nonatomic, strong) NSDate *startedScanningAt;
@property (nonatomic, strong) NSDate *lastScanStoppedAt;
@property (nonatomic, strong) NSMutableArray<BCDateRange> *backgroundScanDateRanges;

- (void)end;

- (BOOL)isExpired;
- (BOOL)hasEnded;
- (BOOL)endedToday;
- (BOOL)endedAfterDate:(NSDate *)date;
- (BOOL)endedBeforeYesterday;

- (BOOL)hasScannedInBackground;
- (NSDate *)lastBackgroundScanStoppedAt;
- (NSTimeInterval)backgroundScanTimeIntervalToday;
- (NSTimeInterval)backgroundScanTimeIntervalSinceDate:(NSDate *)date;

- (void)scanManagerStartedScanAt:(NSDate *)startedScanAt;
- (void)scanManagerStoppedScanAt:(NSDate *)stoppedScanAt;

@end
