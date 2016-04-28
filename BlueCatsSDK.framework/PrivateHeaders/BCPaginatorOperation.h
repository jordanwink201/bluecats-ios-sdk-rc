//
//  BCPaginatorOperation.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 8/27/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//

#import "BCApiOperation.h"
#import "BCOperationDelegate.h"
#import "BCDefinitionsInternal.h"

@class CLLocation, BCPaginator, BCPaginatorOperation;

@protocol BCPaginatorOperationDelegate <BCApiOperationDelegate>

@required
- (void)operation:(BCPaginatorOperation *)paginatorOperation paginator:(BCPaginator *)paginator didLoadJSON:(NSArray *)jsonArray;

@end



@interface BCPaginatorOperation : BCApiOperation

@property (nonatomic, copy) NSDictionary *parameters;
@property (nonatomic, copy) NSString *resourcePath;

@property (nonatomic, copy) NSString *siteID;
@property (nonatomic, assign) BCBeaconIdentifierType beaconIdentifierType;
@property (nonatomic, copy) NSString *beaconIdentifierString;
@property (nonatomic, copy) NSDate *modifiedAfter;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, weak) id <BCPaginatorOperationDelegate> delegate;

- (BOOL)doOperation;

- (void)cancelOperation;

+ (BCPaginatorOperation *)operationForSyncAllBeaconAccessSummariesForAppWithDelegate:(NSObject<BCPaginatorOperationDelegate> *)delegate;

+ (BCPaginatorOperation *)operationForSyncAllBeaconsForAppModifiedAfter:(NSDate*)modifiedAfter
                                                               delegate:(NSObject<BCPaginatorOperationDelegate> *)delegate;

+ (BCPaginatorOperation *)operationForSyncBeaconAccessSummariesInSiteWithSiteID:(NSString *)siteID
                                                                       delegate:(NSObject<BCPaginatorOperationDelegate> *)delegate;

+ (BCPaginatorOperation *)operationForSyncBeaconsInSiteWithSiteID:(NSString *)siteID
                                                    modifiedAfter:(NSDate*)modifiedAfter
                                                         delegate:(NSObject<BCPaginatorOperationDelegate> *)delegate;

+ (BCPaginatorOperation *)operationForSyncBeaconsNearbyBeaconWithIdentifier:(NSString *)identifier
                                                             identifierType:(BCBeaconIdentifierType)identifierType
                                                                   delegate:(NSObject<BCPaginatorOperationDelegate> *)delegate;

+ (BCPaginatorOperation *)operationForSyncAllSitesForAppModifiedAfter:(NSDate*)modifiedAfter
                                                             delegate:(NSObject<BCPaginatorOperationDelegate> *)delegate;

+ (BCPaginatorOperation *)operationForSyncSitesNearbyLocation:(CLLocation *)location
                                                     delegate:(NSObject<BCPaginatorOperationDelegate> *)delegate;

+ (BCPaginatorOperation *)operationForSyncBeaconRegionsWithAppToken:(NSString *)appToken
                                                           delegate:(NSObject<BCPaginatorOperationDelegate> *)delegate;

@end
