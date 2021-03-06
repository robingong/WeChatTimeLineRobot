/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCPayFillCardInfoViewControllerDelegate.h"
#import "WCPayFillCardNumberViewControllerDelegate.h"
#import "WCPayTenpayImportCardInfoViewControllerDelegate.h"
#import "WCPayVerifyPayCardViewControllerDelegate.h"
#import "WCPayControlLogic.h"
#import "WCPayPayPwdViewControllerDelegate.h"

@class WCRedEnvelopesControlData, NSString, JSEvent;

@interface WCPayAddPayCardLogic : WCPayControlLogic <WCPayFillCardInfoViewControllerDelegate, WCPayFillCardNumberViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayTenpayImportCardInfoViewControllerDelegate> {
	int m_uiLogicFinishedStatus;
	int m_uiWCPayAddPayCardLogicScene;
	JSEvent* m_jsEvent;
	NSString* m_nsAddPayCardToken;
	WCRedEnvelopesControlData* m_redEnvelopesData;
	WCBaseControlLogic* _fromControlLogic;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) WCBaseControlLogic* fromControlLogic;
@property(assign, nonatomic) int m_uiWCPayAddPayCardLogicScene;
-(void).cxx_destruct;
-(void)onErrorAlertViewStopLogic:(id)logic;
-(void)EndWCPayAddPayCardLogic:(id)logic withDelay:(BOOL)delay;
-(void)EndWCPayAddPayCardLogic:(id)logic;
-(void)EndWCPayAddPayCardLogic;
-(void)OnHandleVerifiedSMSString:(id)string;
-(void)OnSetWCPayPasswordInBind:(id)bind;
-(void)OnBindCardVerifySMS:(id)sms Error:(id)error;
-(void)OnBindCardVerifyCard:(id)card Error:(id)error;
-(void)OnGetBindingCardBin:(id)bin AvailableBank:(id)bank Error:(id)error;
-(void)OnVerifyPayPassword:(id)password;
-(void)OnGetBindQueryInfo:(id)info Error:(id)error;
-(void)OnTenpayImportBindQuery:(id)query AppInfo:(id)info UsrVerifiedInfo:(id)info3 Error:(id)error;
-(void)OnCheckWCPayJsApiRequest:(id)request Error:(id)error;
-(void)onErrorAlertViewDismiss:(id)dismiss;
-(void)stopLogicToMyPayCardView;
-(void)stopLogicToRefreshPayCardList;
-(void)PayPwdRightActionBack;
-(void)PayPwdBack;
-(void)SetPayPwdNext:(id)next;
-(void)VerifyPayCardAgain:(id)again;
-(void)VerifyPayCardNext:(id)next;
-(void)VerifyPayCardBack;
-(void)WCPayTenpayImportCardInfoViewControllerReadAgreement;
-(void)WCPayTenpayImportCardInfoViewControllerNext;
-(void)WCPayTenpayImportCardInfoViewControllerCancel;
-(void)FillCardInfoReadAgreement;
-(void)FillCardInfoNext:(id)next;
-(id)getWCPayBindInfo:(id)info;
-(void)FillCardInfoCancel;
-(BOOL)NeedShowServiceAppInfo;
-(void)FillCardNumberConfirmWithImage:(id)image cardNumber:(id)number data:(id)data;
-(void)FillCardNumberNext:(id)next;
-(void)FillCardNumberCancel:(BOOL)cancel;
-(void)VerifyPayPwdNext:(id)next;
-(void)showGiveUpLogicAlert;
-(void)startAddCardLogic;
-(void)startTenpayImportCardLogic;
-(void)stopLogic;
-(void)startLogic;
-(void)dealloc;
-(id)initWithRedEnvelopesData:(id)redEnvelopesData;
-(id)initWithJSEvent:(id)jsevent;
-(id)initWithData:(id)data;
@end

