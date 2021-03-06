//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTTableView, NSArray, NSMutableDictionary, NSMutableSet, NSString;

@interface DTReplayViewController : DTViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isLoading;
    _Bool _hasMore;
    DTTableView *_commentTableView;
    NSArray *_dataSource;
    NSMutableDictionary *_dingModelCache;
    NSMutableSet *_requesSet;
}

@property(retain, nonatomic) NSMutableSet *requesSet; // @synthesize requesSet=_requesSet;
@property(retain, nonatomic) NSMutableDictionary *dingModelCache; // @synthesize dingModelCache=_dingModelCache;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) DTTableView *commentTableView; // @synthesize commentTableView=_commentTableView;
- (void).cxx_destruct;
- (void)handleDeleteDingComment:(id)arg1;
- (void)asyncUpdateDingUnreadStatus;
- (void)loadMoreFinishedLoading;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)loadDingModel;
- (void)loadWithDingId:(long long)arg1;
- (void)loadDataWithCursor:(long long)arg1 count:(long long)arg2;
- (void)loadDataSource;
- (void)loadComponents;
- (void)dealloc;
- (void)addObservers;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

