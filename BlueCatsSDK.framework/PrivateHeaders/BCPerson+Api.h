//
//  BCPerson+Api.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 8/26/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//

#import "BCPerson.h"

@interface BCPerson (Api)

- (void)getTeamsWithSuccess:(void (^)(NSArray *))success
                    failure:(void (^)(NSError *))failure
               preferCached:(BOOL)preferCached;

- (void)createTeam:(BCTeam *)team
           success:(void (^)(BCTeam *))success
           failure:(void (^)(NSError *error))failure;

- (void)deleteTeam:(BCTeam *)team
           success:(void (^)())success
           failure:(void (^)(NSError *))failure;

@end
