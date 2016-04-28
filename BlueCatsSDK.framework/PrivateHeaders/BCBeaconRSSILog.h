//
//  BCBeaconRSSILog.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 2/21/13.
//  Copyright (c) 2013 Bluecats. All rights reserved.
//

@interface BCBeaconRSSILog : NSObject

@property (nonatomic, copy) NSNumber *rssi;
@property (nonatomic, copy) NSDate *loggedAt;

+ (BCBeaconRSSILog *)beaconRSSILogWithRSSI:(NSNumber *)rssi andLoggedAt:(NSDate *)loggedAt;

- (id)initWithRSSI:(NSNumber *)rssi andLoggedAt:(NSDate *)loggedAt;

@end
