//
// Created by bluecats on 6/10/2015.
// Copyright (c) 2015 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BlueCatsSDK.h"

@protocol BCInstallationIDProtocol
+ (NSString *)getBCInstallationID;
+ (NSString *)getBCInstallationIDKey;
@end

@interface BlueCatsSDK (BCInstallationID) <BCInstallationIDProtocol>
+ (id <BCInstallationIDProtocol>)getBCInstallationIDProtocol;
@end