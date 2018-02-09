//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YapDatabaseExtension.h"

@class NSString, YapDatabaseViewOptions, YapDatabaseViewState;

@interface YapDatabaseView : YapDatabaseExtension
{
    YapDatabaseViewState *latestState;
    id groupingBlock;
    id sortingBlock;
    long long groupingBlockType;
    long long sortingBlockType;
    NSString *versionTag;
    YapDatabaseViewOptions *options;
}

+ (id)pageMetadataTableNameForRegisteredName:(id)arg1;
+ (id)pageTableNameForRegisteredName:(id)arg1;
+ (id)mapTableNameForRegisteredName:(id)arg1;
+ (id)previousClassNames;
+ (void)dropTablesForRegisteredName:(id)arg1 withTransaction:(id)arg2 wasPersistent:(_Bool)arg3;
- (void).cxx_destruct;
- (void)getGroupingBlock:(id *)arg1 groupingBlockType:(long long *)arg2 sortingBlock:(id *)arg3 sortingBlockType:(long long *)arg4;
- (_Bool)getState:(id *)arg1 forConnection:(id)arg2;
- (void)processChangeset:(id)arg1;
- (id)pageMetadataTableName;
- (id)pageTableName;
- (id)mapTableName;
- (id)newConnection:(id)arg1;
- (_Bool)isPersistent;
- (_Bool)supportsDatabase:(id)arg1 withRegisteredExtensions:(id)arg2;
@property(readonly, copy, nonatomic) YapDatabaseViewOptions *options; // @dynamic options;
@property(readonly, copy, nonatomic) NSString *versionTag; // @synthesize versionTag;
@property(readonly, nonatomic) long long sortingBlockType; // @synthesize sortingBlockType;
@property(readonly, nonatomic) long long groupingBlockType; // @synthesize groupingBlockType;
@property(readonly, nonatomic) id sortingBlock; // @synthesize sortingBlock;
@property(readonly, nonatomic) id groupingBlock; // @synthesize groupingBlock;
- (id)initWithGroupingBlock:(id)arg1 groupingBlockType:(long long)arg2 sortingBlock:(id)arg3 sortingBlockType:(long long)arg4 versionTag:(id)arg5 options:(id)arg6;
- (id)initWithGroupingBlock:(id)arg1 groupingBlockType:(long long)arg2 sortingBlock:(id)arg3 sortingBlockType:(long long)arg4 versionTag:(id)arg5;
- (id)initWithGroupingBlock:(id)arg1 groupingBlockType:(long long)arg2 sortingBlock:(id)arg3 sortingBlockType:(long long)arg4;
- (id)initWithGrouping:(id)arg1 sorting:(id)arg2 versionTag:(id)arg3 options:(id)arg4;
- (id)initWithGrouping:(id)arg1 sorting:(id)arg2 versionTag:(id)arg3;
- (id)initWithGrouping:(id)arg1 sorting:(id)arg2;

@end
