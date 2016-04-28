//
//  BCTeammate.h
//  BlueCatsSDK
//
//  Created by Zach Prager on 8/19/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import "BCJSONModel.h"
#import <Foundation/Foundation.h>
#import "BCTeam.h"
#import "BCPerson.h"

@interface BCTeammate : BCJSONModel
@property (nonatomic) BCTeam *team;
@property (nonatomic) NSString *teammateId;
@property (nonatomic) BCTeamRole *teamRole;
@property (nonatomic) BCPerson *person;
@end
