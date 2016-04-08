/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PBCoding.h"

@class NSString;

@interface PBMainFrameCellData : XXUnknownSuperclass <PBCoding> {
	NSString* m_nsHeadImgUsrName;
	NSString* m_nsHeadImgUrl;
	BOOL m_timeIsMoreThanAWeek;
	float m_widthForTimeLabelText;
	float m_widthForNameLabelText;
	BOOL m_bIsSenderFromSelf;
	NSString* m_textForNameLabel;
	NSString* m_textForMessageLabel;
	NSString* m_textForGreenLabel;
	NSString* m_textForTimeLabel;
	NSString* m_prefixTextForQuoteMessage;
	NSString* m_subfixTextForQuoteMessage;
	float m_widthForMessageLabelText;
	float m_widthForGreenLabelText;
	BOOL m_isRealTimeTalkRoomEmpty;
	NSString* m_textForMemberCntLabel;
	unsigned long m_memberCnt;
	BOOL m_bIsRoomDisplayEmpty;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_bIsRoomDisplayEmpty;
@property(assign, nonatomic) unsigned long m_memberCnt;
@property(retain, nonatomic) NSString* m_textForMemberCntLabel;
@property(assign, nonatomic) BOOL m_isRealTimeTalkRoomEmpty;
@property(assign, nonatomic) float m_widthForGreenLabelText;
@property(assign, nonatomic) float m_widthForMessageLabelText;
@property(retain, nonatomic) NSString* m_subfixTextForQuoteMessage;
@property(retain, nonatomic) NSString* m_prefixTextForQuoteMessage;
@property(retain, nonatomic) NSString* m_textForTimeLabel;
@property(retain, nonatomic) NSString* m_textForGreenLabel;
@property(retain, nonatomic) NSString* m_textForMessageLabel;
@property(retain, nonatomic) NSString* m_textForNameLabel;
@property(assign, nonatomic) BOOL m_bIsSenderFromSelf;
@property(assign, nonatomic) float m_widthForNameLabelText;
@property(assign, nonatomic) float m_widthForTimeLabelText;
@property(assign, nonatomic) BOOL m_timeIsMoreThanAWeek;
@property(retain, nonatomic) NSString* m_nsHeadImgUrl;
@property(retain, nonatomic) NSString* m_nsHeadImgUsrName;
+(void)deleteCellDataFromLocalWithUsrName:(id)usrName;
+(void)deleteCellDataFromLocal:(id)local;
+(void)saveCellDataToLocal:(id)local nsUsrName:(id)name filePath:(id)path;
+(id)loadCellDataFromLocal:(id)local;
+(id)dirForCellDataFile;
+(id)pathForCellData:(id)cellData;
+(void)initialize;
-(void).cxx_destruct;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end
