//
//  BCTeamInvite.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 3/29/13.
//
//

#import "BCJSONModel.h"
#import <Foundation/Foundation.h>

@class BCPerson;
@class BCTeam;
@class BCTeamRole;
@class BCInviteStatus;

@interface BCTeamInvite : BCJSONModel

@property (nonatomic, copy) NSString *teamInviteID;
@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, strong) BCPerson *inviter;
@property (nonatomic, strong) BCTeam *team;
@property (nonatomic, strong) BCTeamRole *teamRole;
@property (nonatomic, strong) BCInviteStatus *inviteStatus;
@property (nonatomic, copy) NSDate *acceptedAt;
@property (nonatomic, copy) NSDate *createdAt;

@end


@protocol BCTeamInviteDataSource <NSObject>

@optional

- (void)sendTeamInvite:(BCTeamInvite *)teamInvite
               success:(void (^)(BCTeamInvite *))success
               failure:(void (^)(NSError *error))failure;

- (NSString *)teamID;

@required

- (NSArray *)cachedTeamInvites;
- (NSDate *)cachedTeamInvitesAt;
- (BOOL)hasTeamInvitesCacheExpired;

- (void)getTeamInvitesWithSuccess:(void (^)(NSArray *))success
                          failure:(void (^)(NSError *))failure
                     preferCached:(BOOL)preferCached;

@end
