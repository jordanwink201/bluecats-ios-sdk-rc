//
//  BCApiOperationManager.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 2/23/13.
//
//

@class CLLocation, BCBeaconVisit, BCEvent;

@interface BCApiOperationManager : NSObject

- (void)syncAllBeaconAccessSummariesForApp;
- (void)syncAllBeaconsForAppModifiedAfter:(NSDate*)modifiedAfter;
- (void)syncBeaconAccessSummariesInSiteWithSiteID:(NSString *)siteID;
- (void)syncBeaconsInSiteWithSiteID:(NSString *)siteID modifiedAfter:(NSDate*)modifiedAfter;

- (void)syncBeaconsNearbyBeaconWithIBeaconKey:(NSString *)iBeaconKey;
- (void)syncBeaconsNearbyBeaconWithBluetoothAddress:(NSString *)bluetoothAddress;
- (void)syncBeaconsNearbyBeaconWithEddystoneUIDString:(NSString *)eddystoneUIDString;

- (void)syncBeaconWithBluetoothAddress:(NSString *)bluetoothAddress;
- (void)syncBeaconWithSerialNumber:(NSString *)serialNumber;

- (void)syncAllSitesForAppModifiedAfter:(NSDate *)modifiedAfter;
- (void)syncSiteWithSiteID:(NSString *)siteID;
- (void)syncSitesNearbyLocation:(CLLocation *)location;

- (void)syncBeaconRegionsWithAppToken:(NSString *)appToken;

- (void)postBeaconVisit:(BCBeaconVisit *)beaconVisit;

- (void)postEvent:(BCEvent *)event;

- (void)cancelAllOperations;

+ (double)distanceFilter;

+ (BCApiOperationManager *)sharedManager;

@end