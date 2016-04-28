//
//  BCCategory+Api.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 1/16/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import "BCCategory.h"

@interface BCCategory (Api)

- (void)updateCategoryWithSuccess:(void (^)(BCCategory *updatedCategory))success
                          failure:(void (^)(NSError *error))failure;

@end
