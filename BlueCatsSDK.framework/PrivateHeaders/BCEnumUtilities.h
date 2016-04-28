//
//  BCEnumUtilities.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 11/15/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//

#import "BCAFNetworkReachabilityManager.h"
#import "BCBeacon.h"
#import "BCBeaconOperation.h"
#import "BCCategory.h"
#import "BCOperation.h"
#import "BCPeripheralCommand.h"
#import "BCDefinitionsInternal.h"
#import "BCSite.h"
#import <CoreBluetooth/CoreBluetooth.h>
#import <CoreLocation/CoreLocation.h>


@interface BCEnumUtilities : NSObject

+ (NSString *)stringForNetworkReachabilityStatus:(BCAFNetworkReachabilityStatus)status;

+ (NSString *)stringForSiteState:(BCSiteState)state;

+ (NSString *)stringForProximity:(BCProximity)proximity abbreviated:(BOOL)abbreviated;

+ (NSString *)stringForRegionState:(CLRegionState)state;

+ (NSString *)stringForCentralManagerState:(CBCentralManagerState)state;

+ (NSString *)stringForSyncStatus:(BCSyncStatus)syncStatus;

+ (NSString *)stringForVerificationStatus:(BCVerificationStatus)verificationStatus;

+ (NSString *)stringForCategoryType:(BCCategoryType)categoryType;

#if defined(__IPHONE_OS_VERSION_MIN_REQUIRED)
+ (BCProximity)proximityForProximity:(CLProximity)proximity;
#endif

+ (NSString *)stringForPeripheralCommandState:(BCPeripheralCommandState)state;

+ (NSString *)stringForBeaconOperationState:(BCBeaconOperationState)state;

+ (NSString *)stringForScanState:(BCScanState)state;

+ (NSString *)stringForBlueCatsAdDataType:(BCBlueCatsAdDataType)adType;

+ (NSString *)stringForApiOperationType:(BCApiOperationType)operationType;

+ (NSString *)stringForBeaconIdentifierType:(BCBeaconIdentifierType)identifierType;

+ (NSString *)stringForBeaconOpcode:(BCBeaconOpcode)opcode;

+ (BOOL)isProximity:(BCProximity)proximity insideOfProximity:(BCProximity)otherProximity;

@end
