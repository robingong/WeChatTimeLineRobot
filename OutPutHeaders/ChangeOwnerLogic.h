/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "RoomContactSelectDelegate.h"
#import "contactInfoDelegate.h"
#import "IGroupMgrExt.h"

@class RoomContactSelectViewController, CContact, NSString;
@protocol ChangeOwnerLogicDelegate;

@interface ChangeOwnerLogic : XXUnknownSuperclass <RoomContactSelectDelegate, contactInfoDelegate, IGroupMgrExt> {
	id<ChangeOwnerLogicDelegate> m_delegate;
	RoomContactSelectViewController* m_vc;
	BOOL m_bNeedReload;
	CContact* _m_oContact;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) CContact* m_oContact;
@property(assign, nonatomic) __weak id<ChangeOwnerLogicDelegate> m_delegate;
-(void).cxx_destruct;
-(void)onCancelSelectContact;
-(void)didSelectContact:(id)contact;
-(void)OnChangeChatRoomOwner:(id)owner NewOwner:(id)owner2 Success:(BOOL)success;
-(void)onChangeOwner:(id)owner;
-(void)start;
-(void)dealloc;
-(id)init;
@end
