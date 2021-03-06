/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMRefreshTableFooterDelegate.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "IWCCardPkgExt.h"
#import "WCCardChooseItemViewDelegate.h"

@class NSString, MMUIView, MMTableView, WCCardChooseEmptyView, UIButton, WCTimeLineFooterView, UIScrollView, NSMutableArray, NSData, WCCardAvailableSeed;
@protocol WCCardChooseViewControllerDelegate;

@interface WCCardChooseViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IWCCardPkgExt, MMRefreshTableFooterDelegate, WCCardChooseItemViewDelegate> {
	WCCardAvailableSeed* _availableSeed;
	BOOL _isLoading;
	NSMutableArray* _cardList;
	NSMutableArray* _shareCardList;
	MMTableView* _tableView;
	WCCardChooseEmptyView* _emptyView;
	UIScrollView* _loadingView;
	UIButton* _confirmBtn;
	map<int, WCCardChooseViewSectionType, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, WCCardChooseViewSectionType> > > _sectionIndexToType;
	WCTimeLineFooterView* _tableFooterView;
	MMUIView* _tableDefaultFooterView;
	NSData* _controlBuff;
	NSMutableArray* _chooseInfoLists;
	id<WCCardChooseViewControllerDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<WCCardChooseViewControllerDelegate> delegate;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)showEmptyView;
-(void)showLoadingView;
-(void)showTableView;
-(void)onGetAvailableCardInfo:(id)info isEnd:(BOOL)end buff:(id)buff ErrCode:(int)code;
-(void)onConfirmBtnPress:(id)press;
-(void)onLeftButtonOP;
-(void)loadCellSubView:(id)view chooseInfo:(id)info;
-(BOOL)bIsSupportMultiSelect;
-(void)onWCCardChooseInfo:(id)info;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)MMRefreshTableFooterDidTriggerRefresh:(id)mmrefreshTableFooter;
-(void)scrollViewDidScroll:(id)scrollView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)initEmptyView;
-(void)initLoadingView;
-(void)initTableView;
-(void)initData;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithCardAvailableSeed:(id)cardAvailableSeed;
@end

