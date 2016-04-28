//
//  BCEvent.h
//  BlueCatsSDK
//
//  Created by Damien Clarke on 30/06/2014.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import "BCJSONModel.h"
#import <Foundation/Foundation.h>

///The `BCEvent` class defines an object that represents an event that satisifed the `BCEventFilters` of a `BCTrigger`.
@interface BCEvent : BCJSONModel<NSCopying>

///@name Event Properties

///The event resource ID.
@property (nonatomic, copy) NSString *eventID;
///The event identifier set set on creation.
@property (nonatomic, copy) NSString *eventIdentifier;
///The event name.
@property (nonatomic, copy) NSString *eventName;
///The device UUID.
@property (nonatomic, copy) NSString *deviceUUID;
///The session UUID.
@property (nonatomic, copy) NSString *sessionUUID;
///The custom device identifier.
@property (nonatomic, copy) NSString *customDeviceIdentifier;
///The site ID of the site that satisfied the filter conditions.
@property (nonatomic, copy) NSString *siteID;
///The site name of the site that satisfied the filter conditions.
@property (nonatomic, copy) NSString *siteName;

@property (nonatomic, copy) NSString *beaconID;
///The name of the beacon that triggered the event.
@property (nonatomic, copy) NSString *beaconName;
///The ID of the category that triggered the event.
@property (nonatomic, copy) NSString *categoryID;
///The name of the category that triggered the event.
@property (nonatomic, copy) NSString *categoryName;
///The date the event began.
@property (nonatomic, copy) NSDate *beganAt;
///The date the event ended.
@property (nonatomic, copy) NSDate *endedAt;
///The RSSI when the event occurred.
@property (nonatomic, copy) NSNumber *rssi;
///The accuracy of the beacon when the event fired.
@property (nonatomic, copy) NSNumber *accuracy;
///The map ID when the event fired.
@property (nonatomic, copy) NSString *mapID;
///The map x location when the event fired.
@property (nonatomic, copy) NSNumber *mapX;
///The map y location when the event fired.
@property (nonatomic, copy) NSNumber *mapY;
///Optional value 1.
@property (nonatomic, copy) NSString *value1;
///Optional value 2.
@property (nonatomic, copy) NSString *value2;
///Optional value 3.
@property (nonatomic, copy) NSString *value3;
///A NSNumber representation of a Boolean value. 0 if False, 1 if True.
@property (nonatomic, assign) NSNumber* beganInBackground;
///A NSNumber representation of a Boolean value. 0 if False, 1 if True.
@property (nonatomic, assign) NSNumber* endedInBackground;
///The last date the event was posted.
@property (nonatomic, copy) NSDate* lastPostedAt;

///@name Getting Visits
/**
 *  Issues an asynchronous request to get the stored events matching the predicate and sort descriptors with success and failure blocks.
 *
 *  @param predicate Predicate condition(s).
 *  @param sortDesc  Sort description.
 *  @param success The block object to be executed when the request operation finishes successfully.
 *
 *  The block has no return value and takes one argument:
 *
 *  `visits` | The visits.
 *
 *  @param failure The block object to be executed when the task finishes unsuccessfully.
 *
 *  The block has no return value and takes one argument:
 *
 *  `error` | The error.
 */
+ (void)storedEventsWithPredicate:(NSPredicate *)predicate
                  sortDescriptors:(NSArray *)sortDesc
                          success:(void (^)(NSArray *events))success
                          failure:(void (^)(NSError *error))failure;

///@name Getting Visit Count
/**
 *  Issues an asynchronous request to get the number of events matching the predicate and sort descriptors with success and failure blocks.
 *
 *  @param predicate Predicate condition(s).
 *  @param success The block object to be executed when the request operation finishes successfully.
 *
 *  The block has no return value and takes one argument:
 *
 *  `visitCount` | The number of visits.
 *
 *  @param failure The block object to be executed when the task finishes unsuccessfully.
 *
 *  The block has no return value and takes one argument:
 *
 *  `error` | The error.
 */
+ (void)numberOfEventsWithPredicate:(NSPredicate *)predicate
                            success:(void (^)(NSUInteger count))success
                            failure:(void (^)(NSError *error))failure;

@end
