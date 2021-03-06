/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MonoServiceMsg.h"

@class UILocalNotification, NSString, WXCMultiTalkGroup;

@interface MultiTalkMonoMsg : MonoServiceMsg {
	BOOL m_isCancelMsg;
	WXCMultiTalkGroup* _m_group;
	NSString* _m_fromUser;
	UILocalNotification* _m_notification;
	unsigned long long _m_msgReceiveTime;
}
@property(assign, nonatomic) unsigned long long m_msgReceiveTime;
@property(retain, nonatomic) UILocalNotification* m_notification;
@property(assign, nonatomic) BOOL m_isCancelMsg;
@property(retain, nonatomic) NSString* m_fromUser;
@property(retain, nonatomic) WXCMultiTalkGroup* m_group;
+(id)getInviteUserFromGroup:(id)group;
+(id)cancelMsg;
+(id)inviteMsg;
-(void).cxx_destruct;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(id)localNotification;
-(BOOL)isParaVaild;
-(BOOL)isTheSameToMsg:(id)msg;
-(id)msgKey;
-(id)serviceType;
-(BOOL)isCancelMsg;
-(BOOL)isOutOfDate;
-(id)init;
@end

