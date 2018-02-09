//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YapDatabaseViewConnection.h"

@class YapDatabaseFilteredView;

@interface YapDatabaseFilteredViewConnection : YapDatabaseViewConnection
{
    id filteringBlock;
    long long filteringBlockType;
    _Bool filteringBlockChanged;
}

- (void).cxx_destruct;
- (void)getFilteringBlock:(id *)arg1 filteringBlockType:(long long *)arg2;
- (void)getGroupingBlock:(id *)arg1 groupingBlockType:(long long *)arg2 sortingBlock:(id *)arg3 sortingBlockType:(long long *)arg4;
- (void)getGroupingBlock:(id *)arg1 groupingBlockType:(long long *)arg2 sortingBlock:(id *)arg3 sortingBlockType:(long long *)arg4 filteringBlock:(id *)arg5 filteringBlockType:(long long *)arg6;
- (void)setFilteringBlock:(id)arg1 filteringBlockType:(long long)arg2 versionTag:(id)arg3;
- (void)setGroupingBlock:(id)arg1 groupingBlockType:(long long)arg2 sortingBlock:(id)arg3 sortingBlockType:(long long)arg4;
- (void)getInternalChangeset:(id *)arg1 externalChangeset:(id *)arg2 hasDiskChanges:(_Bool *)arg3;
- (void)postCommitCleanup;
- (void)postRollbackCleanup;
- (id)newReadWriteTransaction:(id)arg1;
- (id)newReadTransaction:(id)arg1;
@property(readonly, nonatomic) YapDatabaseFilteredView *filteredView;

@end

