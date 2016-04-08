/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCBaseTextFieldItem.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "WCBizPickerViewDelegate.h"

@class UILabel, WCBizPickerView, NSString;

@interface WCPayQuestionSelectItem : WCBaseTextFieldItem <UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate> {
	UILabel* m_textLabel;
	WCBizPickerView* m_pickerView;
	NSString* m_status;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)WCBizPickerViewDidComplete:(id)wcbizPickerView;
-(void)WCBizPickerViewDidCancel;
-(id)pickerView:(id)view viewForRow:(int)row forComponent:(int)component reusingView:(id)view4;
-(int)pickerView:(id)view numberOfRowsInComponent:(int)component;
-(int)numberOfComponentsInPickerView:(id)pickerView;
-(void)setText:(id)text;
-(void)dealloc;
-(id)getValue;
-(void)becomeFirstResponder;
-(void)initView:(CGRect)view;
@end
