//
//  BCCentralManagerClient.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 4/19/13.
//  Copyright (c) 2013 Bluecats. All rights reserved.
//

@protocol BCCentralManagerClientDelegate;

@class CBPeripheral, BCBeaconOperation, BCBeacon;

@interface BCCentralManagerClient : NSObject

@property (nonatomic, assign) NSObject<BCCentralManagerClientDelegate> *delegate;
@property (nonatomic, readonly, assign, getter=isScanningEnabled) BOOL scanningEnabled;

- (id)initWithDelegate:(NSObject<BCCentralManagerClientDelegate> *)delegate;

- (void)scanForPeripherals;
- (void)stopScan;

- (BOOL)isCentralManagerPoweredOn;

- (BOOL)shouldScanForPeripherals;
- (CBPeripheral *)retrievePeripheralWithIdentifier:(NSUUID *)identifier;
- (void)connectPeripheral:(CBPeripheral *)peripheral;
- (void)cancelPeripheralConnection:(CBPeripheral *)peripheral;

- (void)scheduleBeaconOperation:(BCBeaconOperation *)beaconOperation;
- (void)clearMetaDataForPeripheralUUID:(NSUUID *)uuid;
- (void)didUpdatePeripheralIdentifierForBeacon:(BCBeacon *)beacon;

- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;

@end


@protocol BCCentralManagerClientDelegate <NSObject>

@required

- (BOOL)centralManagerClientShouldScanForPeripherals:(BCCentralManagerClient *)client;

- (void)centralManagerClientDidUpdateState:(BCCentralManagerClient *)client;

- (void)centralManagerClient:(BCCentralManagerClient *)client
       didDiscoverPeripheral:(NSUUID *)peripheralIdentifier
                      adData:(NSDictionary *)adData
                        rssi:(NSNumber *)rssi
                      scanID:(NSString *)scanID;

@end

extern NSString * const BCCentralManagerClientDidStopScan;