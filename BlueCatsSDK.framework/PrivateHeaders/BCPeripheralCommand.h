//
//  BCPeripheralCommand.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 4/23/13.
//  Copyright (c) 2013 Bluecats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CBUUID+BCAdditions.h"

typedef enum {
    BCPeripheralCommandStateUnknown = 0,
    BCPeripheralCommandStateReady,
    BCPeripheralCommandStateExecuting,
    BCPeripheralCommandStateFinished,
} BCPeripheralCommandState;

@class CBPeripheral, BCPeripheralCommand;

typedef void (^BCPeripheralCommandCompletionBlock)(BCPeripheralCommand *command, NSError *);
typedef void (^BCPeripheralCommandProgressBlock)(BCPeripheralCommand *, float);

@interface BCPeripheralCommand : NSObject

@property (nonatomic, strong) CBPeripheral *peripheral;
@property (nonatomic, assign) BCPeripheralCommandState state;
@property (nonatomic, copy) NSDate *executedAt;
@property (nonatomic, copy) NSError *error;

@property (nonatomic, copy) void (^willEnterStateBlock)(BCPeripheralCommand *command, BCPeripheralCommandState newState, BCPeripheralCommandState oldState);
@property (nonatomic, copy) void (^didEnterStateBlock)(BCPeripheralCommand *command, BCPeripheralCommandState newState, BCPeripheralCommandState oldState);
@property (readwrite, nonatomic, copy) BCPeripheralCommandCompletionBlock completionBlock;
@property (readwrite, nonatomic, copy) BCPeripheralCommandProgressBlock progressBlock;

- (void)setCompletionBlockWithSuccess:(void (^)(BCPeripheralCommand *command))success
                              failure:(void (^)(BCPeripheralCommand *command, NSError *error))failure;

- (void)setProgressBlock:(void (^)(BCPeripheralCommand *, float))progressBlock;

- (void)cancel;
- (void)execute;
- (void)finish;
- (void)finishWithError:(NSError *)error;

- (CBUUID *)blueCatsServiceUUID;
- (CBUUID *)blueCatsServiceShortUUID;
- (CBUUID *)eddystoneServiceUUID;

- (CBCharacteristic *)retrieveCharacteristic:(CBUUID *)characteristicUUID forService:(CBService *)service;

@end