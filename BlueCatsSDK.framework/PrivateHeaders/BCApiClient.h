//
//  BCApiClient.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 11/3/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import "BCAFHTTPSessionManager.h"

extern NSString* const BCAFNetworkingTaskResponseStatusCodeKey;
extern NSString* const BCAFNetworkingTaskResponseRetryAfterKey;

@interface BCApiClient : BCAFHTTPSessionManager

#pragma mark - Authorization Header Methods
- (void)setAuthorizationHeaderWithAppToken:(NSString *)appToken
                                  userName:(NSString *)userName
                                  password:(NSString *)password;

- (void)setAuthorizationHeaderWithAppToken:(NSString *)appToken;

- (void)clearAuthorizationHeader;

#pragma mark - Set Http Header Field Method
- (void)setValue:(NSString *)value forHTTPHeaderField:field;

- (NSURLSessionDataTask *)dataTaskWithHTTPMethod:(NSString *)method
                                       URLString:(NSString *)URLString
                                      parameters:(id)parameters
                                         success:(void (^)(NSURLSessionDataTask *, id))success
                                         failure:(void (^)(NSURLSessionDataTask *, NSError *))failure;

+ (BCApiClient *)sharedApiClient;

@end
