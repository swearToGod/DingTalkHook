//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactPickHandler.h"

#import "DTContactPickViewControllerDelegate-Protocol.h"
#import "DTLoadMoreDelegate-Protocol.h"

@class DTLoadMoreController, DTSectionItem, NSArray, NSDictionary, NSString;

@interface DTContactPickGroupMultiSelectHandler : DTContactPickHandler <DTLoadMoreDelegate, DTContactPickViewControllerDelegate>
{
    _Bool _isLoading;
    unsigned long long _bizType;
    NSArray *_dataSources;
    NSArray *_dataSourceTitles;
    NSDictionary *_index;
    DTLoadMoreController *_loadMoreController;
    DTSectionItem *_staticItem;
    DTSectionItem *_sourceItem;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) DTSectionItem *sourceItem; // @synthesize sourceItem=_sourceItem;
@property(retain, nonatomic) DTSectionItem *staticItem; // @synthesize staticItem=_staticItem;
@property(copy, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(copy, nonatomic) NSDictionary *index; // @synthesize index=_index;
@property(copy, nonatomic) NSArray *dataSourceTitles; // @synthesize dataSourceTitles=_dataSourceTitles;
@property(copy, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;
- (id)handlerForSearchViewController:(id)arg1 searchBar:(id)arg2;
- (void)showConversationMembers:(id)arg1;
- (id)signImageTypeForConversation:(id)arg1;
- (id)statusList;
- (id)filterBindConversations:(id)arg1;
- (id)filterConversations:(id)arg1;
- (void)dealWithConversations:(id)arg1;
- (id)myMTMConversationsWithLoadMoreController:(id)arg1;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (id)loadModelControllerForPicker:(id)arg1;
- (id)dataSourceForPickViewController:(id)arg1;
- (id)dataSourceTitlesForPickViewController:(id)arg1;
- (id)titleForViewController:(id)arg1;
- (id)emptyViewForViewController:(id)arg1;
- (_Bool)shouldShowEmptyView:(id)arg1;
- (id)placeHolderForSearchBar:(id)arg1;
- (_Bool)shouldShowSearchBar:(id)arg1;
- (void)loadDataSource;
- (void)updateCellWithIdentifier:(id)arg1 isSelected:(_Bool)arg2;
- (void)conversationHasUnselected:(id)arg1;
- (void)conversationHasSelected:(id)arg1;
- (void)pickViewWillDestory:(id)arg1;
- (void)pickViewWillShow:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

