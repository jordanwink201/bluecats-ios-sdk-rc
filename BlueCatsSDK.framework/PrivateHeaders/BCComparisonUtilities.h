//
//  BCComparisonUtilities.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 12/18/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//

NSComparisonResult compareVersions(NSString* leftVersion, NSString* rightVersion);

#if defined(__IPHONE_OS_VERSION_MIN_REQUIRED)
BOOL isIOS7OrHigher();
BOOL isIOS7OrLower();
BOOL isIOS8OrHigher();
#endif