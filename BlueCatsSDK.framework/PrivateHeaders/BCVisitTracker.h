//
//  BCBeaconVisitTracker.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 11/20/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BCBeaconVisit;

@interface BCVisitTracker : NSObject

@property (nonatomic, assign, getter=isBeaconVisitTrackingEnabled) BOOL beaconVisitTrackingEnabled;

- (void)addDelegate:(id)delegate;
- (void)removeDelegate:(id)delegate;

- (BCBeaconVisit *)currentBeaconVisitForSerialNumber:(NSString *)serialNumber;

+ (BCVisitTracker *)sharedTracker;

@end

@protocol BCVisitTrackerDelegate <NSObject>

@optional

- (void)visitTracker:(BCVisitTracker *)visitTracker didEndVisitForBeaconsWithSerialNumbers:(NSArray *)serialNumbers;
- (void)visitTracker:(BCVisitTracker *)visitTracker didBeginVisitForBeaconsWithSerialNumbers:(NSArray *)serialNumbers;

@end
