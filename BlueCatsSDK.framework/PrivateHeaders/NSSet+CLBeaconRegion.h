//
//  NSSet+CLBeaconRegion.h
//  BlueCatsSDK
//
//  Created by Damien Clarke on 6/03/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSSet (CLBeaconRegion)

- (NSSet *)filteredSetUsingIdentifier:(NSString *)identifier;

@end
