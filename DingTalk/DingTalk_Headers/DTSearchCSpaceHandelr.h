//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTLoadMoreDelegate-Protocol.h"
#import "DTSearchHandlerProtocol-Protocol.h"

@class DTLoadMoreController, DTSearchCSpaceDataSource, DTSearchHomeHistoryView, DTSearchHomeView, DTSearchViewController, DTSectionItem, NSString;

@interface DTSearchCSpaceHandelr : NSObject <DTLoadMoreDelegate, DTSearchHandlerProtocol>
{
    DTSearchViewController *_searchVC;
    NSString *_searchText;
    DTLoadMoreController *_loadMoreController;
    DTSectionItem *_sectionItem;
    DTSearchCSpaceDataSource *_searchDataSource;
    DTSearchHomeView *_homeView;
    DTSearchHomeHistoryView *_historyView;
}

@property(retain, nonatomic) DTSearchHomeHistoryView *historyView; // @synthesize historyView=_historyView;
@property(retain, nonatomic) DTSearchHomeView *homeView; // @synthesize homeView=_homeView;
@property(retain, nonatomic) DTSearchCSpaceDataSource *searchDataSource; // @synthesize searchDataSource=_searchDataSource;
@property(retain, nonatomic) DTSectionItem *sectionItem; // @synthesize sectionItem=_sectionItem;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) __weak DTSearchViewController *searchVC; // @synthesize searchVC=_searchVC;
- (void).cxx_destruct;
- (void)reloadSearchDataSource;
- (void)loadDataSourceWithKeyword:(id)arg1 offset:(long long)arg2 size:(long long)arg3 searchController:(id)arg4 searchLog:(id)arg5;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)searchHistoryDidCleanWithType:(unsigned long long)arg1;
- (void)searchTableDidScroll:(id)arg1;
- (void)searchViewControllerWillHide;
- (void)searchViewControllerWillShow;
- (id)handlerTitle;
- (id)dataSourceWithSearchText:(id)arg1;
- (void)searchTextDidSearch:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

