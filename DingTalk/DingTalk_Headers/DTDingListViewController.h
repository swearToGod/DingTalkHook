//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTDingHomeViewChildControllerProtocol-Protocol.h"
#import "DTDingListPagingControllerProtocol-Protocol.h"
#import "DTDropDownListViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTDingAdvertiseView, DTDingAdvertiseViewModel, DTDingListDataController, DTDingListPagingController, DTDingListViewActionHandler, DTDropDownListView, DTEmptyResultView, DTHintFootView, MASConstraint, NSDictionary, NSString, UITableView;

@interface DTDingListViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, DTDropDownListViewDelegate, DTDingListPagingControllerProtocol, DTDingHomeViewChildControllerProtocol>
{
    _Bool _needsReload;
    long long _listType;
    CDUnknownBlockType _listDataDidChangeCallback;
    DTDingAdvertiseViewModel *_adsViewModel;
    DTDingAdvertiseView *_advertiseView;
    UITableView *_tableView;
    DTDropDownListView *_dropDownListView;
    MASConstraint *_dropDownListViewTopConstraint;
    DTEmptyResultView *_emptyResultView;
    DTHintFootView *_hintFootView;
    long long _selectedStatementType;
    DTDingListPagingController *_pagingController;
    NSDictionary *_dataControllerCache;
    DTDingListDataController *_currentDataController;
    DTDingListViewActionHandler *_actionHandler;
    struct UIEdgeInsets _dingHomeSafeAreaInsets;
}

@property(nonatomic) struct UIEdgeInsets dingHomeSafeAreaInsets; // @synthesize dingHomeSafeAreaInsets=_dingHomeSafeAreaInsets;
@property(nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(retain, nonatomic) DTDingListViewActionHandler *actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) __weak DTDingListDataController *currentDataController; // @synthesize currentDataController=_currentDataController;
@property(copy, nonatomic) NSDictionary *dataControllerCache; // @synthesize dataControllerCache=_dataControllerCache;
@property(retain, nonatomic) DTDingListPagingController *pagingController; // @synthesize pagingController=_pagingController;
@property(nonatomic) long long selectedStatementType; // @synthesize selectedStatementType=_selectedStatementType;
@property(retain, nonatomic) DTHintFootView *hintFootView; // @synthesize hintFootView=_hintFootView;
@property(retain, nonatomic) DTEmptyResultView *emptyResultView; // @synthesize emptyResultView=_emptyResultView;
@property(retain, nonatomic) MASConstraint *dropDownListViewTopConstraint; // @synthesize dropDownListViewTopConstraint=_dropDownListViewTopConstraint;
@property(retain, nonatomic) DTDropDownListView *dropDownListView; // @synthesize dropDownListView=_dropDownListView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) DTDingAdvertiseView *advertiseView; // @synthesize advertiseView=_advertiseView;
@property(retain, nonatomic) DTDingAdvertiseViewModel *adsViewModel; // @synthesize adsViewModel=_adsViewModel;
@property(copy, nonatomic) CDUnknownBlockType listDataDidChangeCallback; // @synthesize listDataDidChangeCallback=_listDataDidChangeCallback;
@property(readonly, nonatomic) long long listType; // @synthesize listType=_listType;
- (void).cxx_destruct;
- (void)scrollWithFirstVisibleIndexPath:(id)arg1;
- (void)statisticsEventWithStatementType:(long long)arg1;
- (id)pageControllerFootView;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)registerCellWithTableView:(id)arg1;
- (void)dropDownListView:(id)arg1 didSelectOption:(id)arg2;
- (id)dropDownListOptionsWithListType:(long long)arg1;
- (void)adjustsPreferredListViewSizeToFitWidth;
- (void)updatePreferredListViewFrameWithTop:(double)arg1;
- (void)updateDropDownListViewPositionAndTableViewInsets;
- (void)removeDropDownListView;
- (void)addDropDownListViewWithOptions:(id)arg1;
- (void)updateEmptyResultView;
- (void)showEmptyResultViewIfNeeded;
- (void)updateTableViewFooterView;
- (void)updateTableViewHeaderView;
- (void)scrollToTop;
- (void)applyAdvertiseWithAdsModel:(id)arg1;
- (void)tabBarItemDoubleClicked;
- (void)dingHomeViewSafeAreaInsetsDidChange:(struct UIEdgeInsets)arg1;
- (void)notifyListDataDidChange;
- (void)setupDataChangeCallbackWithDataController:(id)arg1;
- (void)setupPullToRefreshAndInfiniteLoadCallback;
- (id)dataControllerWithStatementType:(long long)arg1;
- (void)reloadWithListType:(long long)arg1;
- (void)cleanupAllCalculatedCellFrameCache;
- (void)reloadIgnoringCache;
- (_Bool)isEmpty;
- (void)didReceiveMemoryWarning;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dingAdvertiseChange;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)addObservers;
- (void)viewDidLoad;
- (id)initWithListType:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

