/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class IBeaconInfo, IBeaconPageInfo, NSString, BaseResponse;

@interface GetBeaconsPushMessageResp : WXPBGeneratedMessage {
}
@property(assign, nonatomic) int result;
@property(retain, nonatomic) IBeaconInfo* beaconInfo;
@property(retain, nonatomic) NSString* mpLogo;
@property(retain, nonatomic) IBeaconPageInfo* pageInfo;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end
