//
//  BCSessionManager.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 10/27/15.
//  Copyright © 2015 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BCSession, BCMutableArray;

@interface BCSessionManager : NSObject

@property (nonatomic, assign, readonly) BOOL isCurrentlyInSession;
@property (nonatomic, strong, readonly) NSDate *currentSessionBeganAt;
@property (nonatomic, copy, readonly) NSString *currentSessionIdentifier;

+ (BCSessionManager *)sharedManager;

@end
