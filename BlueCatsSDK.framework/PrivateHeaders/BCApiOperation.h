//
//  BCApiOperation.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 12/9/15.
//  Copyright © 2015 BlueCats. All rights reserved.
//

#import "BCOperation.h"
#import "BCOperationDelegate.h"
#import "BCDefinitionsInternal.h"

@class BCApiOperation;

@protocol BCApiOperationDelegate <BCOperationDelegate>

@required
- (void)operation:(BCApiOperation *)apiOperation didFailWithError:(NSError *)error;

@optional
- (void)operation:(BCApiOperation *)apiOperation didLoadJSON:(NSDictionary *)jsonDictionary;

@end


@interface BCApiOperation : BCOperation

@property (nonatomic, weak) id <BCApiOperationDelegate> delegate;
@property (nonatomic, assign) BCApiOperationType operationType;

@end