//
//  BCGETSessionDataTaskOperation.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 12/17/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//

#import "BCSessionDataTaskOperation.h"
#import "BCOperationDelegate.h"
#import "BCDefinitionsInternal.h"

@interface BCGETSessionDataTaskOperation : BCSessionDataTaskOperation

@property (nonatomic, copy) NSDictionary *parameters;
@property (nonatomic, copy) NSString *path;
@property (nonatomic, copy) NSString *siteID;
@property (nonatomic, assign) BCBeaconIdentifierType beaconIdentifierType;
@property (nonatomic, copy) NSString *beaconIdentifierString;

+ (BCGETSessionDataTaskOperation *)operationForSyncBeaconWithIdentifier:(NSString *)identifier
                                                         identifierType:(BCBeaconIdentifierType)identifierType
                                                               delegate:(NSObject<BCApiOperationDelegate> *)delegate;

+ (BCGETSessionDataTaskOperation *)operationForSyncSiteWithSiteID:(NSString *)siteID
                                                         delegate:(NSObject<BCApiOperationDelegate> *)delegate;
@end

