//
//  BCEventFilterResolver.h
//  BlueCatsSDK
//
//  Created by Damien Clarke on 2/07/2014.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BCEventFilter.h"

@interface BCEventFilterResolver : NSObject<BCEventFilterResolver>

-(id<BCEventFilter>)resolveFilterFromDefinition:(id<BCEventFilterDefinition>)filterDefinition;

@end
