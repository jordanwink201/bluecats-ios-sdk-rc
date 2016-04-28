//
//  BCDefinitionsInternal.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 10/14/15.
//  Copyright © 2015 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_OPTIONS(uint32_t, BCFeatureFlags) {
    BCFeatureTripleKey = 1 << 0,
    BCFeatureSecureMode = 1 << 1,
    BCFeatureiBeaconMode = 1 << 2,
    BCFeatureiBeaconPlusSecureMode = 1 << 3,
    BCFeatureUIDMode = 1 << 4,
    BCFeatureUrlMode = 1 << 5,
    BCFeatureNewbornMode = 1 << 6,
    BCFeatureTargetSpeedChangeable = 1 << 7,
    BCFeatureSettingsUpdateBLEFuture = 1 << 8,
    BCFeatureStatusSupported = 1 << 9,
    BCFeatureSettingsUpdateBLELegacy = 1 << 10,
    BCFeatureSettingsUpdateBLEUnencrypted = 1 << 11,
    BCFeatureSettingsUpdateBLEAES128CMAC = 1 << 12,
    BCFeatureFirmwareUpdateBLELegacy = 1 << 13,
    BCFeatureFirmwareUpdateBLEUnencrypted = 1 << 14,
    BCFeatureFirmwareUpdateBLEAES128CMAC = 1 << 15,
    BCFeatureBLERequestSupported = 1 << 16
};

typedef enum {
    BCApiOperationTypeUnknown = 0,
    BCApiOperationTypeSyncBeaconAccessSummariesInSiteWithSiteID,
    BCApiOperationTypeSyncBeaconsInSiteWithSiteID,
    BCApiOperationTypeSyncBeaconWithIdentifier,
    BCApiOperationTypeSyncSitesNearbyLocation,
    BCApiOperationTypeSyncSiteWithSiteID,
    BCApiOperationTypePostBeaconVisits,
    BCApiOperationTypeSyncBeaconRegionsWithAppToken,
    BCApiOperationTypeSyncBeaconsNearbyBeaconWithIdentifier,
    BCApiOperationTypePostEvents,
    BCApiOperationTypeSyncAllBeaconAccessSummariesForApp,
    BCApiOperationTypeSyncAllBeaconsForApp,
    BCApiOperationTypeSyncAllSitesForApp,
} BCApiOperationType;

typedef NS_ENUM(NSInteger, BCBeaconIdentifierType)
{
    BCBeaconIdentifierTypeUnknown,
    BCBeaconIdentifierTypeSerialNumber,
    BCBeaconIdentifierTypeBluetoothAddress,
    BCBeaconIdentifierTypeBeaconID,
    BCBeaconIdentifierTypeIBeaconKey,
    BCBeaconIdentifierTypeEddystoneUID,
};

typedef NS_ENUM(NSInteger, BCCachingStatus)
{
    BCCachingStatusSkipped,
    BCCachingStatusCached,
    BCCachingStatusSynced,
    BCCachingStatusCachedAndSynced
};

typedef NS_ENUM(NSInteger, BCScanState)
{
    BCScanStateDisabled = 0,
    BCScanStateSessionBeganInForeground,
    BCScanStateAppInForegroundDeviceNotInSite,
    BCScanStateAppInForegroundDeviceInSite,
    BCScanStateSessionBeganInBackground,
    BCScanStateAppInBackgroundDeviceNotInSite,
    BCScanStateAppInBackgroundDeviceInSite,
    BCScanStateConnectedToPeripherals,
};

typedef NS_ENUM(NSInteger, BCApplicationState) {
    BCApplicationStateUnknown = 0,
    BCApplicationStateForeground,
    BCApplicationStateBackground
};

typedef NS_ENUM(NSInteger, BCBeaconSecurityType)
{
    BCBeaconSecurityTypeNone,
    BCBeaconSecurityTypeTwoKey,
    BCBeaconSecurityTypePasscode,
    BCBeaconSecurityTypeTripleKey,
    BCBeaconSecurityTypeLegacy
};

typedef enum {
    BCBeaconSettingTypeLoudness = 0,
    BCBeaconSettingTypeTargetSpeed,
    BCBeaconSettingTypeMeasuredPower,
    BCBeaconSettingTypeMajor,
    BCBeaconSettingTypeMinor,
    BCBeaconSettingTypeProximityUUID,
    BCBeaconSettingTypePrivacyDuration,
    BCBeaconSettingTypeVersion,
    BCBeaconSettingTypeMode,
    BCBeaconSettingTypeEddyNID,
    BCBeaconSettingTypeEddyIID,
    BCBeaconSettingTypeEddyURL,
    BCBeaconSettingTypeConnectable,
    BCBeaconSettingTypeADTable,
    BCBeaconSettingTypeSecurityType,
    BCBeaconSettingTypeAuthKey,
    BCBeaconSettingTypeEddyEIK,
    BCBeaconSettingTypeEddyEIDTime,
    BCBeaconSettingTypeEddyEIDK,
    BCBeaconSettingTypeAltBulkKey_1,
    BCBeaconSettingTypeAltMacKey_1,
    BCBeaconSettingTypeUseAltKey_1,
    BCBeaconSettingTypeShortAuthEnabled,
    BCBeaconSettingTypeShortAuthKey,
    BCBeaconSettingTypeKeepAliveProxUUID,
    BCBeaconSettingTypeKeepAliveMajor,
    BCBeaconSettingTypeKeepAliveMinor,
    BCBeaconSettingTypeLocalNameShort,
} BCBeaconSettingType;

#pragma mark - BCUserDefaultsManager keys

extern NSString * const BCUserDefaultsBlueCatsIdentifierKey;
extern NSString * const BCUserDefaultsSessionsKey;
extern NSString * const BCUserDefaultsBeaconRegionsKey;
extern NSString * const BCUserDefaultsResumedZoneMonitoringAtKey;
extern NSString * const BCUserDefaultsSuspendedZoneMonitoringAtKey;
extern NSString * const BCUserDefaultsSDKRemoteConfigurationsKey;
extern NSString * const BCUserDefaultsAPIRetryAfterKey;

#pragma mark - BCScanManager notifications

extern NSString * const BCScanManagerNotificationDidStartScan;
extern NSString * const BCScanManagerNotificationDidStopScan;

#pragma mark - BCScanManager notification items

extern NSString * const BCScanManagerNotificationScanIDItem;
extern NSString * const BCScanManagerNotificationOccurredAtItem;

#pragma mark - BCSessionManager notifications

extern NSString * const BCSessionManagerNotificationDidBeginSession;
extern NSString * const BCSessionManagerNotificationDidResumeSession;
extern NSString * const BCSessionManagerNotificationDidEndSession;

#pragma mark - BCBeaconRegionManager notifications

extern NSString * const BCBeaconRegionManagerNotificationDidRemoveCachedBeaconRegion;
extern NSString * const BCBeaconRegionManagerNotificationDidCacheBeaconRegion;
extern NSString * const BCBeaconRegionManagerNotificationRegionIdentifierItem;

#pragma mark - BCSiteManagerInternal notifications

extern NSString * const BCSiteManagerNotificationDidRemoveCachedSite;
extern NSString * const BCSiteManagerNotificationDidCacheSite;
extern NSString * const BCSiteManagerNotificationDidEnterSite;
extern NSString * const BCSiteManagerNotificationDidExitSite;
extern NSString * const BCSiteManagerDidUpdateNearbySites;
extern NSString * const BCSiteManagerNotificationSiteIDItem;


#pragma mark - BCBeaconOperations

typedef NS_ENUM(NSInteger, BCBeaconOperationErrorCode) {
    BCBeaconOperationErrorCodeInvalidLogin = 0xBC1
};

typedef NS_ENUM(uint16_t, BCBeaconIndicatorResponse) {
    BCBeaconIndicatorResponseLoginResultUnknown = 0,
    BCBeaconIndicatorResponseLoginResultSuccess,
    BCBeaconIndicatorResponseLoginResultFailed,
    BCBeaconIndicatorResponseLoginResultDisabled,
    BCBeaconIndicatorResponseSettingsFormatError
};

typedef enum {
    BCBeaconOperationStateUnknown = 0,
    BCBeaconOperationStateScheduled,
    BCBeaconOperationStatePreparing,
    BCBeaconOperationStateConnecting,
    BCBeaconOperationStateConnected,
    BCBeaconOperationStateDisconnecting,
    BCBeaconOperationStateSucceeded,
    BCBeaconOperationStateFailed,
    BCBeaconOperationStateCanceled,
    BCBeaconOperationStateWaitingForNewPeripheral
} BCBeaconOperationState;

typedef enum {
    BCBeaconOpcodeEraseBlock0 = 0,
    BCBeaconOpcodeEraseBlock1 = 1,
    BCBeaconOpcodeErasePointer = 2,
    BCBeaconOpcodeGoDFU = 3,
    BCBeaconOpcodePowerOn = 4,
    BCBeaconOpcodeRestart = 11,
    BCBeaconOpcodeReset = 12,
    BCBeaconOpcodeWriteVersionLine1 = 13,
    BCBeaconOpcodeWriteVersionLine2 = 14,
    BCBeaconOpcodeWriteVersionLine3 = 15,
    BCBeaconOpcodeGoSecureMode = 16,
    BCBeaconOpcodeGoIBeaconMode = 17,
    BCBeaconOpcodeGoIBeaconPlusSecureMode = 18,
    BCBeaconOpcodeRequestData = 19,
    BCBeaconOpcodeResponseData = 20,
    BCBeaconOpcodeSecureSettignsInitializationVector = 21,
    BCBeaconOpcodeSecureSettingsBulkData = 22,
    BCBeaconOpcodeSecureSettingsMAC = 23,
    BCBeaconOpcodeSettingsBulk = 24,
    BCBeaconOpcodeSettingsBulkEnd = 25,
    BCBeaconOpcodePrepareFutureSettingsUpdate = 26,
    BCBeaconOpcodePrepareOTA = 27,
    BCBeaconOpcodeGetUnencryptedStatus = 28,
    BCBeaconOpcodeGetEncryptedStatus = 29
} BCBeaconOpcode;


@interface BCDefinitionsInternal : NSObject

+ (BOOL)isAppInBackground;

@end
