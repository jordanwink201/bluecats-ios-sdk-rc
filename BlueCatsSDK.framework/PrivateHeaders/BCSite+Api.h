//
//  BCSite+Api.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 4/17/13.
//  Copyright (c) 2013 Bluecats. All rights reserved.
//

#import "BCSite.h"
#import "BCTeam.h"

@interface BCSite (Api)

- (void)copyApiPropertiesFromSite:(BCSite *)site;

- (void)updateSiteWithSuccess:(void (^)(BCSite *))success
                      failure:(void (^)(NSError *))failure;

@end
