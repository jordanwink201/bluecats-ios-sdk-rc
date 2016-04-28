//
//  BCIdentityProvider.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 7/8/13.
//  Copyright (c) 2013 Bluecats. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BCIdentityProvider : NSObject

@property (nonatomic, copy, readonly) NSString *advertisingIdentifier;
@property (nonatomic, copy, readonly) NSString *sessionIdentifier;

- (BOOL)advertisingTrackingEnabled;

- (NSString *)sessionIdentifier;

- (NSString *)blueCatsIdentifier;

@end
