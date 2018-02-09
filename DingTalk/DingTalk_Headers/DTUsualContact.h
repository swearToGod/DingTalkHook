//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class NSString;

@interface DTUsualContact : OpenModel <OpenModelProtocol>
{
    _Bool _isAttention;
    long long _uid;
    NSString *_name;
    NSString *_phone;
    long long _num;
    long long _lastTime;
    long long _chatNum;
    long long _dingNum;
    long long _conferenceNum;
    NSString *_orgTitle;
    NSString *_remarkName;
    NSString *_remarkNamePinyin;
}

+ (void)upgradeVersion3:(id)arg1;
+ (unsigned long long)currentNewestVersion;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
+ (id)usualContactWithUid:(long long)arg1 name:(id)arg2 phone:(id)arg3;
+ (id)ftsTableColumnsTokenizers;
+ (id)ftsTableNewColumns;
+ (id)ftsTableColumns;
+ (void)upgradeTriggerWithMDHandler:(id)arg1;
+ (_Bool)isMatchedWithTableName:(id)arg1;
@property(nonatomic) _Bool isAttention; // @synthesize isAttention=_isAttention;
@property(copy, nonatomic) NSString *remarkNamePinyin; // @synthesize remarkNamePinyin=_remarkNamePinyin;
@property(copy, nonatomic) NSString *remarkName; // @synthesize remarkName=_remarkName;
@property(copy, nonatomic) NSString *orgTitle; // @synthesize orgTitle=_orgTitle;
@property(nonatomic) long long conferenceNum; // @synthesize conferenceNum=_conferenceNum;
@property(nonatomic) long long dingNum; // @synthesize dingNum=_dingNum;
@property(nonatomic) long long chatNum; // @synthesize chatNum=_chatNum;
@property(nonatomic) long long lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) long long num; // @synthesize num=_num;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
