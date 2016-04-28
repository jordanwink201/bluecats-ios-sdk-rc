//
//  BCAlertType.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 6/6/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BCJSONModel.h"

@interface BCAlertType : BCJSONModel

@property (nonatomic, assign) NSInteger alertTypeID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *displayName;

@end
