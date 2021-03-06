/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface GetLbsCardResp : WXPBGeneratedMessage {
}
@property(assign, nonatomic) BOOL haveEgg;
@property(retain, nonatomic) NSString* entranceName;
@property(retain, nonatomic) NSString* viewSubTitle;
@property(assign, nonatomic) unsigned endTime;
@property(retain, nonatomic) NSString* acceptCardTitle;
@property(retain, nonatomic) NSString* viewDescription;
@property(retain, nonatomic) NSString* viewTitle;
@property(assign, nonatomic) unsigned controlFlag;
@property(retain, nonatomic) NSString* color;
@property(retain, nonatomic) NSString* logoUrl;
@property(retain, nonatomic) NSString* brandName;
@property(retain, nonatomic) NSString* auxTitle;
@property(retain, nonatomic) NSString* subTitle;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSString* cardExt;
@property(retain, nonatomic) NSString* cardTpId;
@property(assign, nonatomic) unsigned activityType;
@property(retain, nonatomic) NSString* shakeCardEntranceTip;
@property(assign, nonatomic) unsigned entranceEndTime;
@property(retain, nonatomic) NSString* redDotDesc;
@property(retain, nonatomic) NSString* redDotId;
@property(assign, nonatomic) BOOL haveRedDot;
@property(assign, nonatomic) BOOL haveCard;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

