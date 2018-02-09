//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class NSString;

@interface DTBizCSpaceDentryListInfo : OpenModel <OpenModelProtocol>
{
    _Bool _hasMore;
    unsigned long long _primaryKey;
    long long _spaceId;
    NSString *_folderId;
    NSString *_loadMoreId;
    long long _total;
    NSString *_hashKey;
}

+ (unsigned long long)currentNewestVersion;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
@property(copy, nonatomic) NSString *hashKey; // @synthesize hashKey=_hashKey;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(copy, nonatomic) NSString *loadMoreId; // @synthesize loadMoreId=_loadMoreId;
@property(copy, nonatomic) NSString *folderId; // @synthesize folderId=_folderId;
@property(nonatomic) long long spaceId; // @synthesize spaceId=_spaceId;
@property(nonatomic) unsigned long long primaryKey; // @synthesize primaryKey=_primaryKey;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

