//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class BLAccount, NSString;

@interface DTCMailReceiver : OpenModel <OpenModelProtocol>
{
    BLAccount *_account;
    NSString *_uuid;
    NSString *_mailID;
    NSString *_email;
    NSString *_alias;
    unsigned long long _receiverType;
    unsigned long long _deliverStatus;
    unsigned long long _receiverPos;
    long long _timestamp;
}

+ (unsigned long long)currentNewestVersion;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
+ (id)findMailReceiversByMailUUID:(id)arg1 account:(id)arg2;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long receiverPos; // @synthesize receiverPos=_receiverPos;
@property(nonatomic) unsigned long long deliverStatus; // @synthesize deliverStatus=_deliverStatus;
@property(nonatomic) unsigned long long receiverType; // @synthesize receiverType=_receiverType;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *mailID; // @synthesize mailID=_mailID;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) BLAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1;
- (id)init;
- (void)initSelf;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

