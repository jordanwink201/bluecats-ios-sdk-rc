//
//  BCNetworkAccessRole.h
//  BlueCatsSDK
//
//  Created by Damien Clarke on 24/04/2015.
//  Copyright (c) 2015 BlueCats. All rights reserved.
//

#import "BCJSONModel.h"
#import <Foundation/Foundation.h>

@interface BCNetworkAccessRole : BCJSONModel<NSCopying>

@property (nonatomic, assign) NSInteger networkAccessRoleID;
@property (nonatomic, copy) NSString *name;

@end
