/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, BaseResponse;

@interface RadarSearchResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSMutableArray* memberList;
@property(assign, nonatomic) unsigned memberCount;
@property(assign, nonatomic) unsigned opCode;
@property(retain, nonatomic) NSString* ticket;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

