//
//  BCSessionDataTaskOperation.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 8/27/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//

#import "BCApiOperation.h"

@interface BCSessionDataTaskOperation : BCApiOperation

- (NSURLSessionDataTask *)createSessionDataTask;

- (BOOL)doOperation;

- (void)cancelOperation;

@end
