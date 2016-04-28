//
//  NSString+BCAdditions.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 2/27/13.
//
//

#import <Foundation/Foundation.h>

@interface NSString (BCAdditions)

- (BOOL)isEqualIgnoringCase:(NSString *)string;

- (BOOL)isValidUUID;

@end
