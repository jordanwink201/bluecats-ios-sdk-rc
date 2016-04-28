//
//  BCAlert.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 6/6/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BCJSONModel.h"

@class BCAlertSeverity, BCAlertType;

@interface BCAlert : BCJSONModel

@property (nonatomic, copy) NSString *alertID;
@property (nonatomic, copy) NSString *teamID;
@property (nonatomic, copy) BCAlertSeverity *alertSeverity;
@property (nonatomic, copy) BCAlertType *alertType;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSDate *occurredAt;

@end
