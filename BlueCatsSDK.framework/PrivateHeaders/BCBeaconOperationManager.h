//
//  BCBeaconOperationManager.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 6/2/14.
//  Copyright (c) 2014 BlueCats. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CBPeripheral, CBCentralManager, BCBeaconOperation, BCCentralManagerClient, BCBeacon;

@interface BCBeaconOperationManager : NSObject

- (id)initWithCentralManagerClient:(BCCentralManagerClient *)centralManagerClient;

- (void)scheduleBeaconOperation:(BCBeaconOperation *)beaconOperation;

- (void)centralManager:(CBCentralManager *)centralManager didConnectPeripheral:(CBPeripheral *)peripheral;

- (void)centralManager:(CBCentralManager *)centralManager didFailToConnectPeripheral:(CBPeripheral *)peripheral
                 error:(NSError *)error;

- (void)centralManager:(CBCentralManager *)centralManager didDisconnectPeripheral:(CBPeripheral *)peripheral
                 error:(NSError *)error;

- (void)didUpdatePeripheralIdentifierForBeacon:(BCBeacon *)beacon;

@end
