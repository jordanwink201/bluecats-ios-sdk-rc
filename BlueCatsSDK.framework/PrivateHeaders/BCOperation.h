//
//  BCOperation.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 2/24/13.
//
//

#import "BCOperationDelegate.h"

@interface BCOperation : NSOperation

@property (nonatomic, weak) id <BCOperationDelegate> delegate;

- (BOOL)doOperation;

- (void)cancelOperation;

- (void)finish;

@end

#import "BCRequestDataCommand.h"
#import <CoreBluetooth/CoreBluetooth.h>

@interface BCRequestDataCommandOperation : BCOperation

@property (nonatomic, strong) CBPeripheral *peripheral;
@property (nonatomic, strong) CBService *blueCatsService;
@property (nonatomic, strong) NSData *requestData;
@property (nonatomic, strong) NSData *responseData;
@property (nonatomic, weak) id <BCRequestDataCommandOperationDelegate> delegate;

@end

@interface BCBlockOperation : BCOperation
@property (nonatomic, copy) void (^mainBlock)(void);
@end
