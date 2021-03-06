/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCRedEnvelopesReceiveHomeViewDelegate.h"
#import "WCBaseControlMgrExt.h"
#import "WCBaseControlLogicDeleagte.h"
#import "WCRedEnvelopesMultiSelectContactsViewControllerDelegate.h"
#import "WCRedEnvelopesSessionSelectViewControllerDelegate.h"
#import "WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate.h"
#import "WCRedEnvelopesEnterpriseDetailViewControllerDelegate.h"
#import "WCRedEnvelopesControlLogic.h"

@class WCRedEnvelopesReceiveHomeView, NSString;

@interface WCRedEnvelopesReceiveControlLogic : WCRedEnvelopesControlLogic <WCBaseControlLogicDeleagte, WCBaseControlMgrExt, WCRedEnvelopesReceiveHomeViewDelegate, WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate, WCRedEnvelopesEnterpriseDetailViewControllerDelegate, WCRedEnvelopesSessionSelectViewControllerDelegate, WCRedEnvelopesMultiSelectContactsViewControllerDelegate> {
	int m_scene;
	WCRedEnvelopesReceiveHomeView* introView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onRealnameActionClick:(id)click;
-(void)OnSendShareEnterpriseRedEnvelopesResponse:(id)response Error:(id)error;
-(void)OnSendShareRedEnvelopesoRequest:(id)request Error:(id)error;
-(void)dismissCurrentViewSendShareRedEnvelopes;
-(void)OnThanksForRedEnvelopesRequest:(id)redEnvelopesRequest Error:(id)error;
-(void)OnClearserSendOrReceiveRedEnveloperListRequest:(id)request Error:(id)error;
-(void)OnQueryUserSendOrReceiveRedEnveloperListRequest:(id)request Error:(id)error;
-(void)OnQueryRedEnvelopesDetailRequest:(id)request Error:(id)error;
-(void)OnOpenRedEnvelopesRequest:(id)request Error:(id)error;
-(void)OnReceiverQueryRedEnvelopesRequest:(id)request Error:(id)error;
-(void)closeAnimationWindowAndShowDetailView:(id)view;
-(void)showDetailView;
-(void)onMultiSelectContactReturn:(id)aReturn;
-(void)OnSelectMutilContactsButton;
-(void)OnSelectSessionReturn:(id)aReturn;
-(void)OnSelectSessionCancel:(id)cancel;
-(void)OnSelectSession:(id)session SessionSelectController:(id)controller;
-(void)OnConfirmSendMessageSelectSessionViewController;
-(void)OnGoToBalanceDetail;
-(void)OnCommitWCRedEnvelopes:(id)envelopes;
-(void)OnLoadMoreRedEnvelopesList;
-(BOOL)HasMoreDetailList;
-(void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
-(void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
-(void)WCRedEnvelopesEnterpriseDetailViewControllerContinueSendRedEnvelopes;
-(void)WCRedEnvelopesEnterpriseDetailViewControllerBack;
-(void)WCRedEnvelopesReceiveHomeViewOpenList;
-(void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
-(void)WCRedEnvelopesReceiveHomeViewBack;
-(void)startLogic;
-(void)stopLoading;
-(id)initWithData:(id)data Scene:(int)scene;
@end

