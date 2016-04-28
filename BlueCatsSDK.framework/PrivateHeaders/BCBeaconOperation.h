//
//  BCBeaconOperation.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 12/6/13.
//  Copyright (c) 2013 BlueCats. All rights reserved.
//
#import "BCOperation.h"
#import "BCOperationDelegate.h"
#import "BCDefinitionsInternal.h"

@class CBPeripheral, CBService, BCBeacon, BCPeripheralCommand, BCBeaconOperation, BCBeaconMode, BCBeaconOperation, BCBeaconLoginCommand, BCBeaconLoginEddystoneCommand;

@protocol BCBeaconOperationDelegate <BCOperationDelegate>

@required

- (CBPeripheral *)operation:(BCBeaconOperation *)beaconOperation peripheralForIdentifier:(NSUUID *)identifier;
- (void)operation:(BCBeaconOperation *)beaconOperation needsCentralManagerToConnectPeripheral:(CBPeripheral *)peripheral;
- (void)operation:(BCBeaconOperation *)beaconOperation centralManagerCanDisconnectPeripheral:(CBPeripheral *)peripheral;
- (void)operationDidSucceed:(BCBeaconOperation *)beaconOperation;
- (void)operation:(BCBeaconOperation *)beaconOperation didFailWithError:(NSError *)error;
- (void)operationDidTimeout:(BCBeaconOperation *)beaconOperation;

@end

typedef void (^BCBeaconOperationOperationCompletionBlock)(BCBeaconOperation *, NSError *);
typedef void (^BCBeaconOperationOperationProgressBlock)(BCBeaconOperation *, float);
typedef void (^BCBeaconOperationOperationStatusBlock)(BCBeaconOperation *, NSString *);

@interface BCBeaconOperation : BCOperation

@property (nonatomic, strong) BCBeacon *beacon;
@property (nonatomic, copy) NSUUID *peripheralIdentifier;
@property (nonatomic, weak) id <BCBeaconOperationDelegate> delegate;
@property (nonatomic, assign) BCBeaconOperationState beaconOperationState;
@property (nonatomic, copy) NSDate *beaconOperationStateChangedAt;
@property (nonatomic, strong) CBPeripheral *peripheral;
@property (nonatomic, strong) CBService *currentService;
@property (nonatomic, strong) BCPeripheralCommand *peripheralCommand;
@property (readwrite, nonatomic, copy) BCBeaconOperationOperationCompletionBlock beaconOperationCompletionBlock;
@property (readwrite, nonatomic, copy) BCBeaconOperationOperationProgressBlock beaconOperationProgressBlock;
@property (readwrite, nonatomic, copy) BCBeaconOperationOperationStatusBlock beaconOperationStatusBlock;

@property (nonatomic, assign) NSInteger retryCount;

@property (nonatomic) BOOL didWaitForPeripheral;
@property (nonatomic, assign) BOOL attemptedToConnect;
@property (nonatomic, assign) BOOL didConnect;
@property (nonatomic, assign) BOOL didTimeoutWhenConnected;

- (id)initWithBeacon:(BCBeacon *)beacon peripheralIdentifier:(NSUUID *)peripheralIdentifier;

- (void)setBeaconOperationCompletionBlockWithSuccess:(void (^)(BCBeaconOperation *))success
                                             failure:(void (^)(BCBeaconOperation *, NSError *))failure;
- (void)setBeaconOperationProgressBlock:(void (^)(BCBeaconOperation *, float))progressBlock;
- (void)setBeaconOperationStatusBlock:(void (^)(BCBeaconOperation *, NSString *))statusBlock;

- (void)prepareForConnection;
- (void)cancel;
- (void)connect;
- (void)connected;
- (void)disconnect;
- (void)succeeded;
- (void)failedWithError:(NSError *)error;
- (void)failedWithErrorDescription:(NSString *)description;
- (void)waitForPeripheralIdentifier;

- (NSTimeInterval)timeoutInSecondsForOperationState:(BCBeaconOperationState)operationState;
- (instancetype)duplicateForRetry;
- (BOOL)shouldRetry;
- (NSInteger)maxNumberOfRetries;
- (NSTimeInterval)timeIntervalWaitingForNewPeripheralForMode:(BCBeaconMode *)beaconMode;

- (BOOL)shouldRetryOperationWithPeripheralIdentifierUpdate;
- (BOOL)isOperationTerminated;

- (void)blueCatsLoginAndDiscoverCharacteristics:(NSArray *)characteristics
                                   withPasscode:(NSData *)passcode
                                    withSuccess:(void (^)(BCBeaconLoginCommand *loginCmd))success;

- (void)blueCatsLoginAndDiscoverCharacteristics:(NSArray *)characteristics
                                    withSuccess:(void (^)(BCBeaconLoginCommand *loginCmd))successBlock;

- (void)eddystoneLoginAndDiscoverCharacteristics:(NSArray *)characteristics
                                    withPasscode:(NSData *)passcode
                                     withSuccess:(void (^)(BCBeaconLoginEddystoneCommand *loginCmd))successBlock;

- (void)discoverBlueCatsServiceWithSuccess:(void (^)(void))success;

- (void)writeCharacteristicData:(NSData *)characteristicData
               toCharacteristic:(CBCharacteristic *)characteristic
                      inService:(CBService *)service
                       progress:(void (^)(float))progress
                        success:(void (^)(void))success;

- (void)writeCharacteristicData:(NSData *)characteristicData
               toCharacteristic:(CBCharacteristic *)characteristic
                      inService:(CBService *)service
                        success:(void (^)(void))success;

- (void)streamFileAtPath:(NSString *)filePath
        toCharacteristic:(CBCharacteristic *)characteristic
               inService:(CBService *)service
  withDelayBetweenWrites:(float)delayBetweenWrites
                progress:(void (^)(float))progress
                 success:(void (^)(void))success;

- (void)writeOpcode:(BCBeaconOpcode)opcode
           withData:(NSData *)data toCharacteristic:(CBCharacteristic *)characteristic
            success:(void (^)(void))success;

- (void)startWritingKeepAliveStatus:(CBCharacteristic *)notifyCharacteristic
              controlCharacteristic:(CBCharacteristic *)controlCharacteristic
                     withCompletion:(void (^)(void))completion;

- (void)stopWritingKeepAliveStatus;

+ (NSError *)errorWithDescription:(NSString *)description;
+ (NSData *)passcodeDataFromPasscodeString:(NSString *)passcodeString;

@end