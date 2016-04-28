//
//  BCInviteStatus.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 3/29/13.
//
//

#import "BCJSONModel.h"

@interface BCInviteStatus : BCJSONModel

@property (nonatomic, assign) NSInteger inviteStatusID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *displayName;

@end
