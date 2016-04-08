/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"
#import "IUiUtilExt.h"

@class UIView, CAGradientLayer, NSString;

@interface MMUINavigationBar : XXUnknownSuperclass <IUiUtilExt> {
	UIView* _barBackShadowView;
	CAGradientLayer* _shadowLayer;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) CAGradientLayer* shadowLayer;
@property(retain, nonatomic) UIView* barBackShadowView;
-(void).cxx_destruct;
-(void)dealloc;
-(void)darkerNavigationBar;
-(void)adjustBarBackShadowView;
-(void)didRotate:(id)rotate;
-(void)onStatusBarFrameChanged;
-(void)setFrame:(CGRect)frame;
-(void)setBackgroundImage:(id)image forBarPosition:(int)barPosition barMetrics:(int)metrics;
-(void)setBarTintColor:(id)color;
-(void)setBackgroundImage:(id)image forBarMetrics:(int)barMetrics;
-(void)setTintColor:(id)color;
-(void)setBarStyle:(int)style;
-(void)setTranslucent:(BOOL)translucent;
-(id)initWithFrame:(CGRect)frame;
@end
