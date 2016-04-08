/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "QRCodeLoginExt.h"
#import "WCAccountManualAuthControlLogicDelegate.h"
#import "WCAccountBaseControlLogic.h"

@class WCAccountManualAuthControlLogic, NSString;

@interface BluetoothLoginLogic : WCAccountBaseControlLogic <QRCodeLoginExt, WCAccountManualAuthControlLogicDelegate> {
	WCAccountManualAuthControlLogic* m_manualAuthLogic;
	int _loginType;
	NSString* _userName;
	NSString* _password;
	NSString* _broadcastUUID;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* broadcastUUID;
@property(retain, nonatomic) NSString* password;
@property(retain, nonatomic) NSString* userName;
@property(assign, nonatomic) int loginType;
-(void).cxx_destruct;
-(BOOL)onManualAuthControlLogicError:(id)error;
-(void)onManualAuthControlLogicStop:(unsigned)stop response:(id)response;
-(void)doAuthWithType:(int)type;
-(void)stopLoginLogic;
-(id)init;
@end
