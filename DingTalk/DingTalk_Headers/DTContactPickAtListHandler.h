//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactPickHandler.h"

#import "DTContactPickViewControllerDelegate-Protocol.h"

@class DTBizConversation, DTContactPickCellItem, NSArray, NSDictionary, NSString;

@interface DTContactPickAtListHandler : DTContactPickHandler <DTContactPickViewControllerDelegate>
{
    _Bool _isLoading;
    NSString *_customTitle;
    NSString *_conversationId;
    NSArray *_dataSources;
    NSArray *_dataSourceTitles;
    NSDictionary *_index;
    DTContactPickCellItem *_allPeopleItem;
    NSArray *_allMembers;
    DTBizConversation *_conversation;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
@property(copy, nonatomic) NSArray *allMembers; // @synthesize allMembers=_allMembers;
@property(retain, nonatomic) DTContactPickCellItem *allPeopleItem; // @synthesize allPeopleItem=_allPeopleItem;
@property(copy, nonatomic) NSDictionary *index; // @synthesize index=_index;
@property(copy, nonatomic) NSArray *dataSourceTitles; // @synthesize dataSourceTitles=_dataSourceTitles;
@property(copy, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(copy, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
- (void).cxx_destruct;
- (id)handlerForSearchViewController:(id)arg1 searchBar:(id)arg2;
- (void)showsMembers:(id)arg1;
- (void)loadDataSource;
- (id)placeHolderForSearchBar:(id)arg1;
- (_Bool)shouldShowSearchBar:(id)arg1;
- (void)updateCellItemWithIdentifier:(id)arg1 isSelect:(_Bool)arg2;
- (void)updateCellItemWithPersonIdentifier:(id)arg1 isSelect:(_Bool)arg2;
- (void)personsHasUnselected:(id)arg1;
- (void)personsHasSelected:(id)arg1;
- (void)personHasUnselected:(id)arg1;
- (void)personHasSelected:(id)arg1;
- (void)switchPickSelectedType:(unsigned long long)arg1;
- (id)dataSourceForPickViewController:(id)arg1;
- (id)dataSourceTitlesForPickViewController:(id)arg1;
- (id)titleForViewController:(id)arg1;
- (id)emptyViewForViewController:(id)arg1;
- (_Bool)shouldShowEmptyView:(id)arg1;
- (void)pickViewWillDestory:(id)arg1;
- (void)pickViewWillShow:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

