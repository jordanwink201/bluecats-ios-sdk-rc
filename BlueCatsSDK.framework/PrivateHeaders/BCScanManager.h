//
//  BCScanManager.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 4/24/13.
//
//

#import <CoreBluetooth/CoreBluetooth.h>

@class BCCentralManagerClient;

@interface BCScanManager : NSObject

@property (nonatomic, copy) NSString *scanID;

- (id)initWithCentralManagerClient:(BCCentralManagerClient *)client;

- (void)startedScanForPeripherals;
- (void)stoppedScan;

- (void)centralManagerUpdatedState:(CBCentralManagerState)state;

- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;

- (void)connectingToPeripheral:(NSString *)identifier;
- (void)disconnectedFromPeripheral:(NSString *)identifier;

@end