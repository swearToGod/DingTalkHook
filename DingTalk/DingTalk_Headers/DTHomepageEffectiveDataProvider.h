//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTHomepageDataProviderProtocol-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;

@interface DTHomepageEffectiveDataProvider : NSObject <DTHomepageDataProviderProtocol>
{
    NSMutableDictionary *_cacheTable;
    NSArray *_sortedRuleList;
    long long _currentUid;
    long long _lastActiveTime;
    double _offsetTimeStep;
    CDUnknownBlockType _buildProviderBlock;
}

@property(copy, nonatomic) CDUnknownBlockType buildProviderBlock; // @synthesize buildProviderBlock=_buildProviderBlock;
@property(nonatomic) double offsetTimeStep; // @synthesize offsetTimeStep=_offsetTimeStep;
- (void).cxx_destruct;
- (void)openConversaitonGroupAtSection:(long long)arg1 headerView:(id)arg2;
- (void)didLongTapSectionButton:(id)arg1;
- (id)sectionViewForTableView:(id)arg1 atSection:(long long)arg2;
- (_Bool)isSupportedConverationListRowItem:(id)arg1;
- (id)handleDeleteWithConversation:(id)arg1;
- (id)indexPathForRowItem:(id)arg1;
- (id)indexPathForUnmatchedRowItem:(id)arg1;
- (id)indexPathForIncomingRowItem:(id)arg1;
- (id)handleInsertWithConversation:(id)arg1;
- (void)updateTableView:(id)arg1 type:(long long)arg2 indexPath1:(id)arg3 indexPath2:(id)arg4;
- (void)handleDBHookEvent:(long long)arg1 conversation:(id)arg2 atIndex:(unsigned long long)arg3 newIndex:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)rowItemWithIndexPath:(id)arg1;
- (id)rowItemsInSection:(long long)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (unsigned long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSection;
- (unsigned long long)totalRowItemCount;
- (void)reset:(id)arg1 cacheUsageFlag:(unsigned long long)arg2;
- (long long)expiredBoundaryTime;
- (long long)sectionWithGroupRule:(id)arg1;
- (id)groupRuleWithSection:(long long)arg1;
- (id)mergeIncomingList:(id)arg1 cachedList:(id)arg2;
- (void)saveUnmatchedRowItems:(id)arg1;
- (void)groupConversationList:(id)arg1;
- (void)removeCachedConversation:(id)arg1;
- (id)oldCachedConversation:(id)arg1;
- (void)storeConversation:(id)arg1;
- (_Bool)hasCachedConversation:(id)arg1;
- (void)resetLastActiveTime:(double)arg1;
- (void)setupLastActiveTime;
- (void)setGroupRuleList:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

