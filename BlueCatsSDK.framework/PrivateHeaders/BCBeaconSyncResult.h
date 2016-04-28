//
//  BCBeaconSyncSettings.h
//  BlueCatsSDK
//
//  Created by Damien Clarke on 27/04/2015.
//  Copyright (c) 2015 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BCDefinitionsInternal.h"

@interface BCBeaconSyncResult : NSObject

@property (nonatomic, assign) BOOL includeLatestForApp;
@property (nonatomic, assign) BOOL resultsAsAccessSummary;
@property (nonatomic, strong) NSString *beaconIdentifierString;
@property (nonatomic, assign) BCBeaconIdentifierType beaconIdentifierType;
@property (nonatomic, strong) NSDate *modifiedAfter;
@property (nonatomic, strong) NSString *siteID;
@property (nonatomic, strong) NSNumber* httpStatusCode;
@property (nonatomic, strong) NSArray *beacons;

@end
