//
//  BCSiteActivityMonitor.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 10/28/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//

#import "BCSite.h"

@interface BCSiteActivityMonitor : NSObject

@property (readonly, nonatomic, copy) NSString *siteID;

@property (readonly, nonatomic, copy) NSDate *startedMonitoringSiteAt;
@property (readonly, nonatomic, copy) NSDate *stoppedMonitoringSiteAt;
@property (readonly, nonatomic, assign, getter=isMonitoringSite) BOOL monitoringSite;

@property (readonly, nonatomic, copy) NSDate *startedRangingBeaconsAt;
@property (readonly, nonatomic, copy) NSDate *stoppedRangingBeaconsAt;
@property (readonly, nonatomic, assign, getter=isRangingBeacons) BOOL rangingBeacons;

@property (readonly, nonatomic, copy) NSDate *enteredSiteAt;
@property (readonly, nonatomic, copy) NSDate *exitedSiteAt;
@property (readonly, nonatomic, assign) BCSiteState siteState;

@property (readonly, nonatomic, copy) NSDate *lastRangedBeaconsAt;
@property (readonly, nonatomic, copy) NSDate *lastRangedAndFoundBeaconsAt;
@property (readonly, nonatomic, strong) NSArray *lastRangedBeacons;

- (id)initWithSiteID:(NSString *)siteID;

- (void)startMonitoringSite;
- (void)stopMonitoringSite;

- (void)startRangingBeacons;
- (void)stopRangingBeacons;

- (void)exitedSite;
- (void)enteredSite;

- (void)rangedBeacons:(NSArray *)beacons;

@end
