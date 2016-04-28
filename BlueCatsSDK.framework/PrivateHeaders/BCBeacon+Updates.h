//
//  BCBeacon+Updates.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 3/21/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import "BCBeacon.h"

typedef enum {
    BCAvailabilityStatusNotDetermined = 0,
    BCAvailabilityStatusNotAvailable,
    BCAvailabilityStatusAvailable
} BCAvailabilityStatus;

@interface BCBeacon (Updates)

- (BOOL)shouldUpdate;

- (BOOL)shouldUpdateSettingsCrowdSourced:(BOOL)crowdSourced;

- (BOOL)shouldUpdateFirmware;

- (NSString *) featureSupportDebug;

- (BCAvailabilityStatus)settingsUpdateAvailabilityStatus;
- (BCAvailabilityStatus)firmwareUpdateAvailabilityStatus;
- (BCAvailabilityStatus)sphynxModeAvailabilityStatus;
- (BCAvailabilityStatus)opcodeControlAvailabilityStatus;

- (BOOL)isFirmwareVersionFromAdDataGreaterThanVersion:(NSString *)version;
- (BOOL)isFirmwareVersionFromAdDataGreaterThanOrEqualVersion:(NSString *)version;
- (BOOL)isFirmwareVersionFromAdDataLessThanOrEqualVersion:(NSString *)version;
- (BOOL)isFirmwareVersionFromAdDataLessThanVersion:(NSString *)version;

- (BOOL)isFirmwareVersionGreaterThanVersion:(NSString *)version;
- (BOOL)isFirmwareVersionGreaterThanOrEqualVersion:(NSString *)version;
- (BOOL)isFirmwareVersionLessThanOrEqualVersion:(NSString *)version;
- (BOOL)isFirmwareVersionLessThanVersion:(NSString *)version;

- (void)downloadHexFileWithSuccess:(void (^)(NSString *))success
                           failure:(void (^)(NSError *))failure;

- (void)downloadOTAVersion:(NSString *)version
       withEncryptedStatus:(NSData *)status
                   success:(void (^)(NSData *otaData))success
                   failure:(void (^)(NSError *error))failure;

- (void)needsToRediscoverPeripheral;

@end
