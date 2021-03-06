/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "BaseMessageNodeView.h"

@class UIImageView;

@interface GameMessageNodeView : BaseMessageNodeView {
	UIImageView* m_imageViewGame;
	unsigned long m_uiRealGameIndex;
	unsigned long m_uiGameType;
	unsigned long m_uiCurImageIndex;
	BOOL m_bIsSender;
}
+(BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)messageWrap;
-(void).cxx_destruct;
-(void)onMenuItemWillHide;
-(void)onTouchCancel;
-(void)onLongTouch;
-(void)onTouchUpInside;
-(void)onTouchDownRepeat;
-(void)onTouchDown;
-(void)showOperations;
-(void)onMoreOperate:(id)operate;
-(void)onForward:(id)forward;
-(void)onClearResource;
-(void)onDisappear;
-(void)updateStatus:(id)status;
-(void)layoutSubviewsInternal;
-(void)stopAnimation;
-(void)doAnimation;
-(id)getGameImageByIndex:(unsigned long)index;
-(void)chageGameImage:(id)image;
-(id)tryGenHQImage:(id)image;
-(CGSize)sizeForFrame:(CGRect)frame;
-(id)initWithMessageWrap:(id)messageWrap Contact:(id)contact ChatContact:(id)contact3;
@end

