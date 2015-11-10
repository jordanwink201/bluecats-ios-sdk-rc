//
//  BCDefinitions.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 10/14/15.
//  Copyright © 2015 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark - BCSite

typedef NS_ENUM(NSUInteger, BCSiteState) {
    BCSiteStateUnknown = 0,
    BCSiteStateInside,
    BCSiteStateOutside,
};

#pragma mark - BCCategory

typedef NS_ENUM(NSUInteger, BCCategoryType) {
    BCCategoryTypeUnknown = 0,
    BCCategoryTypeBlueCats = 1,
    BCCategoryTypeTeam = 2
};

#pragma mark - BCBeacon

typedef NS_ENUM(NSUInteger, BCProximity) {
    BCProximityUnknown = 0,
    BCProximityImmediate,
    BCProximityNear,
    BCProximityFar
};

typedef NS_ENUM(NSUInteger, BCBlueCatsAdDataType) {
    BCBlueCatsAdDataTypeUnknown = 0,
    BCBlueCatsAdDataTypeSphynx1 = 1,
    BCBlueCatsAdDataTypeIBeacon2 = 2,
    BCBlueCatsAdDataTypeIBeacon3 = 3,
    BCBlueCatsAdDataTypeSecure1 = 4,
    BCBlueCatsAdDataTypeIBeacon4 = 5,
    BCBlueCatsAdDataTypeSecure2 = 6,
    BCBlueCatsAdDataTypeData1 = 7,
    BCBlueCatsAdDataTypeData2 = 8
};

typedef NS_ENUM(NSUInteger, BCVerificationStatus) {
    BCVerificationStatusNotVerified = 0,
    BCVerificationStatusDetectedAttack,
    BCVerificationStatusVerifiedViaBlueCatsIBeaconAd,
    BCVerificationStatusVerifiedViaBueCatsSecureAd
};

typedef NS_ENUM(NSUInteger, BCBlockDataEncoding) {
    BCBlockDataEncodingNone = 0,
    BCBlockDataEncodingUTF8,
    BCBlockDataEncodingJSON
};

typedef NS_ENUM(NSUInteger, BCBlockDataType) {
    BCBlockDataTypeCustom = 0,
    BCBlockDataTypeTemperature = 15
};

typedef NS_ENUM(NSUInteger, BCBeaconEndpoint) {
    BCBeaconEndpointUSBHost = 0
};

typedef NS_ENUM(NSUInteger, BCBeaconOwnership) {
    BCBeaconOwnershipUnknown = 0,
    BCBeaconOwnershipOwned = 1,
    BCBeaconOwnershipShared = 2,
    BCBeaconOwnershipPublic = 3
};

typedef NS_ENUM(NSUInteger, BCBeaconAccessRole) {
    BCBeaconAccessRoleVisitTracker = 1,
    BCBeaconAccessRoleBeaconRanger = 2,
    BCBeaconAccessRoleSettingsUpdater = 3
};

#pragma mark - BCZone

typedef NS_ENUM(NSInteger, BCZoneScope) {
    BCZoneScopeAllBeaconsInSite,
    BCZoneScopeAllBeaconsInCategory,
    BCZoneScopeAllBeaconsWithZoneIdentifierCustomValue
};

typedef NS_ENUM(NSInteger, BCZoneState) {
    BCZoneStateUnknown,
    BCZoneStateInside,
    BCZoneStateOutside
};

#pragma mark - BlueCatsSDK

typedef NS_ENUM(NSInteger, BCStatus) {
    kBCStatusNeverPurred = 0,
    kBCStatusPurring,
    kBCStatusPurringWithErrors
};

typedef NS_ENUM(NSInteger, BCAppTokenVerificationStatus) {
    kBCAppTokenVerificationStatusNotProvided = 0,
    kBCAppTokenVerificationStatusNotVerified,
    kBCAppTokenVerificationStatusVerified,
    kBCAppTokenVerificationStatusInvalid
};

#pragma mark - BCSyncStatus

typedef NS_ENUM(NSInteger, BCSyncStatus)
{
    //No relevant request has been made to the server
    BCSyncStatusNotSynced,
    //Relevant request has been made to the server and this object was not included
    BCSyncStatusUnauthorized,
    //Basic access information has been synced
    BCSyncStatusAccessSynced,
    //Full data has been synced
    BCSyncStatusSynced,
    //Data has been restored from local DB
    BCSyncStatusRestored,
    //Whatever data has been synced for this object is now stale
    BCSyncStatusExpired
};

@interface BCDefinitions : NSObject

@end
