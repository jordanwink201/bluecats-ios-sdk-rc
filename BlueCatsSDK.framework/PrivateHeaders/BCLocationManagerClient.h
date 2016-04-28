//
//  BCLocationManagerClient.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 8/12/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "BCGCDMulticastDelegate.h"
#import "Availability.h"

@protocol BCLocationManagerClientDelegate;

@class BCBeaconRegion;

@interface BCLocationManagerClient : NSObject

@property (nonatomic, strong) BCGCDMulticastDelegate<BCLocationManagerClientDelegate> *multicastDelegate;
@property (nonatomic, assign, readonly, getter = isLocationUpdatingEnabled) BOOL locationUpdatingEnabled;
@property (nonatomic, assign, getter = isBeaconRegionMonitoringEnabled) BOOL beaconRegionMonitoringEnabled;

- (CLLocation *)location;

- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;

- (void)addDelegate:(id)delegate;
- (void)removeDelegate:(id)delegate;

#if defined(__IPHONE_OS_VERSION_MIN_REQUIRED)
- (void)requestAlwaysAuthorization;
- (void)requestWhenInUseAuthorization;
#else
- (void)requestAuthorization;
#endif

// Class methods
+ (CLAuthorizationStatus)authorizationStatus;
+ (BOOL)isAuthorized;
+ (BOOL)locationServicesEnabled;
+ (BOOL)isBeaconRegionMonitoringAvailable;
+ (BOOL)isBeaconRangingAvailable;

+ (BCLocationManagerClient *)sharedClient;

@end


@protocol BCLocationManagerClientDelegate <NSObject>

@optional

#if defined(__IPHONE_OS_VERSION_MIN_REQUIRED)
- (void)locationManagerClient:(BCLocationManagerClient *)client
         didEnterBeaconRegion:(BCBeaconRegion *)beaconRegion;

- (void)locationManagerClient:(BCLocationManagerClient *)client
         didExitBeaconRegion:(BCBeaconRegion *)beaconRegion;

- (void)locationManagerClient:(BCLocationManagerClient *)client
              didRangeBeacons:(NSArray *)beacons
               inBeaconRegion:(BCBeaconRegion *)beaconRegion;
#endif

@end


extern NSString * const BCLocationManagerClientDidFailToRangeBeaconsInRegion;
