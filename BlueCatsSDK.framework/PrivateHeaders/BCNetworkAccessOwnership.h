//
//  BCNetworkAccessOwnership.h
//  BlueCatsSDK
//
//  Created by Damien Clarke on 23/04/2015.
//  Copyright (c) 2015 BlueCats. All rights reserved.
//

#import "BCJSONModel.h"
#import <Foundation/Foundation.h>

@interface BCNetworkAccessOwnership : BCJSONModel<NSCopying>

@property (nonatomic, assign) NSInteger networkAccessOwnershipID;
@property (nonatomic, copy) NSString *name;

@end
