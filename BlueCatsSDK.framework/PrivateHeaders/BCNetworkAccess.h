//
//  BCNetworkAccess.h
//  BlueCatsSDK
//
//  Created by Damien Clarke on 23/04/2015.
//  Copyright (c) 2015 BlueCats. All rights reserved.
//

#import "BCJSONModel.h"
#import <Foundation/Foundation.h>

@class BCNetworkAccessOwnership,BCNetworkAccessRole;

@interface BCNetworkAccess : BCJSONModel<NSCopying>

@property (nonatomic, copy) NSDate *beginsAt;
@property (nonatomic, copy) NSDate *endsAt;
@property (nonatomic, copy) NSNumber *maxSecondsBeforeRevalidation;
@property (nonatomic, copy) BCNetworkAccessOwnership *ownership;
@property (nonatomic, copy) NSArray *permittedRoles;

@end
