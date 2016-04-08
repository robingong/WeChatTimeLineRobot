/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIView.h"

@class UIButton, UIView;
@protocol WCOutDialPadDelegate;

@interface WCOutDialPad : MMUIView {
	unsigned m_mode;
	UIView* m_keyPadBtnsView;
	UIView* m_SKMBtnsView;
	UIButton* m_hideBtn;
	UIButton* m_bottomFunctionBtn;
	BOOL m_isMuteBtnSelected;
	BOOL m_isSpeakerBtnSelected;
	BOOL _hideKeyPad;
	BOOL _enableBottomFunctionBtn;
	id<WCOutDialPadDelegate> delegate;
}
@property(readonly, assign, nonatomic) BOOL isSpeakerBtnSelected;
@property(readonly, assign, nonatomic) BOOL isMuteBtnSelected;
@property(assign, nonatomic) BOOL enableBottomFunctionBtn;
@property(assign, nonatomic) BOOL hideKeyPad;
@property(assign, nonatomic) __weak id<WCOutDialPadDelegate> delegate;
-(void).cxx_destruct;
-(void)didLongPressButton:(id)button;
-(void)didTagButton:(id)button;
-(void)layoutSubviews;
-(void)configSKMBtnsView;
-(void)configBottomFunctionBtnAndHideBtnWithMode:(unsigned)mode;
-(void)configKeyPadBtnViewWithColorMode:(unsigned)colorMode;
-(void)configCallingViewMode;
-(void)configDialViewMode;
-(id)initWithPadMode:(unsigned)padMode;
@end
