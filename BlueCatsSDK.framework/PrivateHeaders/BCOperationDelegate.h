//
//  BCOperationDelegate.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 2/26/13.
//
//

#import <Foundation/Foundation.h>

@class BCOperation, BCRequestDataCommandOperation;

@protocol BCOperationDelegate <NSObject>

@required
- (BOOL)operationShouldStart:(BCOperation *)operation;

@optional
- (void)operationDidCancel:(BCOperation *)operation;
- (void)operationDidFinish:(BCOperation *)operation;

@end

@protocol BCRequestDataCommandOperationDelegate <BCOperationDelegate>

@optional
- (void)operation:(BCRequestDataCommandOperation *)requestOperation didReceiveData:(NSData *)data;
- (void)operation:(BCRequestDataCommandOperation *)requestOperation didFailWithError:(NSError *)error;

@end