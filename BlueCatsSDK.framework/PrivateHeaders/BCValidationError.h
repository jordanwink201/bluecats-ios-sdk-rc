//
//  BCValidationError.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 7/23/13.
//  Copyright (c) 2013 Bluecats. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BCValidationError : NSObject

@property (nonatomic, copy) NSString *resource;
@property (nonatomic, copy) NSString *property;
@property (nonatomic, assign) NSInteger errorCode;

@end
