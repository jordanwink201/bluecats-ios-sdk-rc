//
//  NSArray+BCBeaconRegion.h
//  BlueCatsSDK
//
//  Created by Damien Clarke on 28/02/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

@class BCBeaconRegion;

@interface NSArray (BCBeaconRegion)

- (NSArray<BCBeaconRegion *> *)filteredBeaconRegionArrayUsingAppManaged:(BOOL)appManaged;

- (BCBeaconRegion *)beaconRegionWithRegionIdentifier:(NSString *)regionIdentifier;

@end
