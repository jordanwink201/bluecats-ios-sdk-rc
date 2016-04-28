//
//  BCMutableDictionary+SiteActivityMonitor.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 10/28/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//

#import "BCMutableDictionary.h"

@interface BCMutableDictionary (SiteActivityMonitor)

- (NSSet *)monitoredSiteIDs;

- (NSSet *)rangedSiteIDs;

@end
