//
//  BCTeamRole.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 3/29/13.
//
//

#import "BCJSONModel.h"
#import <Foundation/Foundation.h>


@interface BCTeamRole : BCJSONModel

@property (nonatomic, assign) NSInteger teamRoleID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *displayName;

+ (BCTeamRole *)teamRoleForOwner;
+ (BCTeamRole *)teamRoleForContributor;
+ (BCTeamRole *)teamRoleForConsumer;

@end
