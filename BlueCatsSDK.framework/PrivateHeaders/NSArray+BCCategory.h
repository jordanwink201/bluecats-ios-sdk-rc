//
//  NSArray+BCCategory.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 11/4/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//
#import "BCCategory.h"

@interface NSArray (BCCategory)

- (NSArray *)sortedCategoryArrayUsingNameAscending:(BOOL)ascending;

- (NSArray *)filteredCategoryArrayUsingCategoryType:(BCCategoryType)categoryType;

- (BCCategory *)categoryWithCategoryType:(BCCategoryType)categoryType name:(NSString *)name;

@end
