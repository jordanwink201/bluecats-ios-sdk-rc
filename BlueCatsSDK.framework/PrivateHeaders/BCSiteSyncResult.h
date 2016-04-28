//
//  BCSiteSyncResult.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 10/15/15.
//  Copyright © 2015 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BCSiteSyncResult : NSObject

@property (nonatomic, assign) BOOL includeLatestForApp;
@property (nonatomic, strong) NSString *siteID;
@property (nonatomic, strong) NSDate *modifiedAfter;
@property (nonatomic, strong) NSNumber* httpStatusCode;
@property (nonatomic, strong) NSArray *sites;

@end
