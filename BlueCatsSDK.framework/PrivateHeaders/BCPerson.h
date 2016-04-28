//
//  BCPerson.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 3/11/13.
//
//

#import "BCJSONModel.h"
#import "BCTeamInvite.h"

@class BCTeam, BCApp;

@interface BCPerson : BCJSONModel<BCTeamInviteDataSource>

@property (nonatomic, copy) NSString *personID;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, assign) NSInteger teamCount;

@property (nonatomic, copy, readonly) NSArray *allCachedTeams;
@property (nonatomic, copy) NSDate *cachedTeamsAt;
- (BOOL)hasTeamsCacheExpired;

- (void)cacheTeam:(BCTeam *)team;
- (void)cacheTeamsFromArray:(NSArray *)teams;
- (void)removeCachedTeam:(BCTeam *)team;

- (BCTeam *)cachedTeamWithTeamID:(NSString *)teamID;
- (NSArray *)cachedTeamsWithOwner:(BCPerson *)owner;

#pragma mark - BCTeamInviteDataSource

@property (nonatomic, copy) NSArray *cachedTeamInvites;
@property (nonatomic, copy) NSDate *cachedTeamInvitesAt;
- (BOOL)hasTeamInvitesCacheExpired;

- (void)getTeamInvitesWithSuccess:(void (^)(NSArray *))success
                           failure:(void (^)(NSError *))failure
                      preferCached:(BOOL)preferCached;

- (BOOL)canEditTeam:(BCTeam *)team;
- (BOOL)canEditTeamWithTeamID:(NSString *)teamID;
- (BOOL)canDeleteTeam:(BCTeam *)team;
- (BOOL)canDeleteApp:(BCApp *)app;

- (BOOL)isInTeamWithTeamID:(NSString *)teamID;

@end
