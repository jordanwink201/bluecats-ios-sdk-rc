//
//  BCManagedEvent.h
//  BlueCatsSDK
//
//  Created by Damien Clarke on 21/11/2014.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <CoreData/CoreData.h>

@class BCEvent;

@interface BCManagedEvent : NSManagedObject

- (BCEvent *)toEvent;

@end
