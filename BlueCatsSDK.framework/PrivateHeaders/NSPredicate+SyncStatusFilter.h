//
//  NSPredicate+SyncStatusFilter.h
//  BlueCatsSDK
//
//  Created by bluecats on 20/07/2015.
//  Copyright (c) 2015 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BCBeacon.h"

@interface NSPredicate (SyncStatusFilter)

/**
 *  original predicate && (syncStatus == syncStatus)
 *
 *  @return a new predicate with additional sync status
 */
- (NSPredicate *) withSyncStatus:(BCSyncStatus)syncStatus;

/**
 *  orginal predicate && (syncStatus != syncStatus)
 *
 *  @return a new predicate which excludes the given sync status
 */
- (NSPredicate *) withoutSyncStatus:(BCSyncStatus)syncStatus;

@end
