//
//  BCDateRange.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 10/27/15.
//  Copyright © 2015 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BCJSONModel.h"

@protocol BCDateRange
@end

@interface BCDateRange : BCJSONModel

@property (nonatomic, strong) NSDate *fromDate;
@property (nonatomic, strong) NSDate *throughDate;

- (NSTimeInterval)timeInterval;

@end
