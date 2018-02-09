//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "DTOrgUserName-Protocol.h"
#import "OpenModelProtocol-Protocol.h"

@class NSString;

@interface DTOrgUserName : OpenModel <OpenModelProtocol, DTOrgUserName>
{
    long long _uid;
    long long _orgId;
    NSString *_name;
    NSString *_namePinyin;
}

+ (void)upgradeVersion2:(id)arg1;
+ (unsigned long long)currentNewestVersion;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
@property(copy, nonatomic) NSString *namePinyin; // @synthesize namePinyin=_namePinyin;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

