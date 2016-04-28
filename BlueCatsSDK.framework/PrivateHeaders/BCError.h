//
//  BCError.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 7/23/13.
//  Copyright (c) 2013 Bluecats. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BCError : NSObject

@property (nonatomic, copy) NSString *message;
@property (nonatomic, assign) NSInteger statusCode;
@property (nonatomic, copy) NSArray *validationErrors;

@end
