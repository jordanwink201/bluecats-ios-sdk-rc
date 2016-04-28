//
// Created by bluecats on 19/10/2015.
// Copyright (c) 2015 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BlueCatsSDK.h"

@protocol BCSDKVersionProtocol
+ (NSString *) getBCSDKVersion;
+ (NSString *)getBCSDKVersionKey;
@end

@interface BlueCatsSDK (BCSDKVersion)<BCSDKVersionProtocol>
+ (id<BCSDKVersionProtocol>) getBCSDKVersionProtocol;
@end