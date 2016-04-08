/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "NSObject.h"


@protocol WCCommentViewDelegate <NSObject>
@optional
-(void)onReloadCommentCellView:(id)view;
-(BOOL)isTouchEnableOnCommentView;
-(void)onCommentViewLongPressed:(id)pressed withText:(id)text withRect:(CGRect)rect;
-(void)onCommentViewClicked:(id)clicked;
@end
