//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "BLLoadMoreViewDelegate-Protocol.h"
#import "DTCSpaceFileFilterDataSourceDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BLLoadMoreView, BLSpaceEntry, DTBizCSpaceDentry, DTCSpaceFileFilterDataSource, DTCSpaceFilesCellCallback, NSArray, NSString, UIRefreshControl;

@interface DTCSpaceFilterTable : UITableView <UITableViewDataSource, UITableViewDelegate, BLLoadMoreViewDelegate, DTCSpaceFileFilterDataSourceDelegate>
{
    _Bool _isLoadingMore;
    long long _filterType;
    DTCSpaceFileFilterDataSource *_filterDataSource;
    BLSpaceEntry *_spaceEntry;
    DTBizCSpaceDentry *_folderDentry;
    DTCSpaceFilesCellCallback *_cellCallback;
    NSArray *_orgIds;
    unsigned long long _accessType;
    NSString *_token;
    UIRefreshControl *_spaceRefreshControl;
    BLLoadMoreView *_loadMoreView;
}

@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(retain, nonatomic) BLLoadMoreView *loadMoreView; // @synthesize loadMoreView=_loadMoreView;
@property(retain, nonatomic) UIRefreshControl *spaceRefreshControl; // @synthesize spaceRefreshControl=_spaceRefreshControl;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) unsigned long long accessType; // @synthesize accessType=_accessType;
@property(retain, nonatomic) NSArray *orgIds; // @synthesize orgIds=_orgIds;
@property(retain, nonatomic) DTCSpaceFilesCellCallback *cellCallback; // @synthesize cellCallback=_cellCallback;
@property(retain, nonatomic) DTBizCSpaceDentry *folderDentry; // @synthesize folderDentry=_folderDentry;
@property(retain, nonatomic) BLSpaceEntry *spaceEntry; // @synthesize spaceEntry=_spaceEntry;
@property(retain, nonatomic) DTCSpaceFileFilterDataSource *filterDataSource; // @synthesize filterDataSource=_filterDataSource;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
- (void).cxx_destruct;
- (void)alreadyDeleteDentries:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)didMoveProgressUpdate:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)didDentryMoveFail:(id)arg1;
- (void)didDentryMoveSuccess;
- (void)didDentryRenameSuccessFrom:(id)arg1 toNewName:(id)arg2 atIndexPath:(id)arg3;
- (void)notifyTheFolderIsEmpty:(_Bool)arg1;
- (void)didDeleteDentryFailed:(id)arg1;
- (void)didDeleteDentriesSuccess;
- (void)didLoadMoreSuccess;
- (void)didRefreshSuccess;
- (_Bool)loadMoreScrollViewNeedLoadMore:(id)arg1;
- (_Bool)loadMoreScrollViewIsLoading:(id)arg1;
- (void)loadMoreScrollViewDidTriggerLoadMore:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)doRefresh:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (unsigned long long)currentListAccessType;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initData;
- (id)refreshControl;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

