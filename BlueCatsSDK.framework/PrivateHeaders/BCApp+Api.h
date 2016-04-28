//
//  BCApp+Api.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 1/23/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import "BCApp.h"

@interface BCApp (Api)

- (void)updateAppWithSuccess:(void (^)(BCApp *updatedApp))success
                          failure:(void (^)(NSError *error))failure;

- (void)getAppTokenWithSuccess:(void (^)(BCApp * app, NSString *appToken))success
                       failure:(void (^)(BCApp * app, NSError *error))failure;

@end
