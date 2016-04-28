//
//  BCSiteInternal.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 11/16/15.
//  Copyright © 2015 BlueCats. All rights reserved.
//

#import "BCSite.h"
#import "BCBeaconDataSource.h"
#import "BCCategoryDataSource.h"

@class BCSiteAccessType;

@interface BCSite () <BCBeaconDataSource, BCCategoryDataSource>

@property (nonatomic, copy) NSString *notes;
@property (nonatomic, assign) NSInteger beaconCount;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSDate *modifiedAt;

@property (nonatomic, copy) NSArray *customValues;

@property (nonatomic, copy) NSDate *cachedAt;
@property (nonatomic, copy) NSDate *syncedAt;
@property (nonatomic, assign) BCSyncStatus syncStatus;
- (BOOL)isSyncedOrRestored;

@property (nonatomic, copy) NSDate *cachedCategoriesAt;
@property (nonatomic, copy) NSArray *cachedCategories;

- (BOOL)hasCategoriesCacheExpired;

- (void)getCategoriesWithSuccess:(void (^)(NSArray *))success
                         failure:(void (^)(NSError *))failure
                    preferCached:(BOOL)preferCached;

- (CLLocation *)location;

@property (nonatomic, copy) NSDate *cachedBeaconsAt;

- (NSArray *)cachedBeacons;
- (BOOL)hasBeaconsCacheExpired;
- (void)getBeaconsWithSuccess:(void (^)(NSArray *))success
                      failure:(void (^)(NSError *))failure
                 preferCached:(BOOL)preferCached;

@end
