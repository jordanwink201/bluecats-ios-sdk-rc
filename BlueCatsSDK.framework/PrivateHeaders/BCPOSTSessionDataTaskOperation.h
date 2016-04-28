//
//  BCPOSTSessionDataTaskOperation.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 8/2/13.
//  Copyright (c) 2013 Bluecats. All rights reserved.
//

#import "BCSessionDataTaskOperation.h"
#import "BCOperationDelegate.h"

@class BCPOSTSessionDataTaskOperation;

@protocol BCPOSTSessionDataTaskOperationDelegate  <BCApiOperationDelegate>

@required

- (NSRange)operationNeedsRange:(BCPOSTSessionDataTaskOperation *)postOperation;

- (NSArray *)operation:(BCPOSTSessionDataTaskOperation *)postOperation
       objectsForRange:(NSRange)range;

- (void)operationDidSucceed:(BCPOSTSessionDataTaskOperation *)postOperation;

@optional

- (void)operationWillStart:(BCPOSTSessionDataTaskOperation *)postOperation;

@end



@interface BCPOSTSessionDataTaskOperation : BCSessionDataTaskOperation

@property (nonatomic, weak) id <BCPOSTSessionDataTaskOperationDelegate> delegate;
@property (nonatomic, copy) NSString *resourcePath;
@property (nonatomic, assign) NSRange rangeForObjects;
@property (nonatomic, copy) NSArray *objects;
@property (nonatomic, assign) BOOL succeeded;

+ (BCPOSTSessionDataTaskOperation *)operationForPostBeaconVisitsWithDelegate:(NSObject<BCPOSTSessionDataTaskOperationDelegate> *)delegate;
+ (BCPOSTSessionDataTaskOperation *)operationForPostEventsWithDelegate:(NSObject<BCPOSTSessionDataTaskOperationDelegate> *)delegate;

@end
