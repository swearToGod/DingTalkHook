//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class CLLocation, DTAvatarModel, DTEnterpriseCard, DTExternalPermission, DTFollowRecord, DTOrganization, NSArray, NSString;

@interface DTExternalContact : OpenModel <OpenModelProtocol>
{
    _Bool _invitedChannel;
    _Bool _isAcitve;
    _Bool _shouldSendActiveMessage;
    NSString *_primaryKey;
    long long _uid;
    long long _orgId;
    NSString *_staffId;
    NSString *_name;
    NSString *_namePinyin;
    NSString *_remark;
    NSString *_orgName;
    NSString *_email;
    NSString *_companyName;
    NSString *_deptName;
    NSString *_position;
    NSString *_followerName;
    NSString *_extNumber;
    NSString *_address;
    CLLocation *_location;
    DTEnterpriseCard *_follower;
    NSString *_avatarMediaId;
    NSString *_stateCode;
    NSString *_mobile;
    NSString *_bizCardMediaId;
    unsigned long long _channelFocusStatus;
    NSArray *_labels;
    DTFollowRecord *_followRecords;
    DTExternalPermission *_permission;
    NSArray *_properties;
    DTOrganization *_organization;
    DTAvatarModel *_avatarModel;
    NSString *_corpId;
}

+ (id)primaryKeyWithUid:(long long)arg1 oid:(long long)arg2;
+ (void)upgradeVersion3:(id)arg1;
+ (void)upgradeVersion2:(id)arg1;
+ (unsigned long long)currentNewestVersion;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
@property(retain, nonatomic) DTAvatarModel *avatarModel; // @synthesize avatarModel=_avatarModel;
@property(retain, nonatomic) DTOrganization *organization; // @synthesize organization=_organization;
@property(nonatomic) _Bool shouldSendActiveMessage; // @synthesize shouldSendActiveMessage=_shouldSendActiveMessage;
@property(nonatomic) _Bool isAcitve; // @synthesize isAcitve=_isAcitve;
@property(nonatomic) _Bool invitedChannel; // @synthesize invitedChannel=_invitedChannel;
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) DTExternalPermission *permission; // @synthesize permission=_permission;
@property(retain, nonatomic) DTFollowRecord *followRecords; // @synthesize followRecords=_followRecords;
@property(copy, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(nonatomic) unsigned long long channelFocusStatus; // @synthesize channelFocusStatus=_channelFocusStatus;
@property(copy, nonatomic) NSString *bizCardMediaId; // @synthesize bizCardMediaId=_bizCardMediaId;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *stateCode; // @synthesize stateCode=_stateCode;
@property(copy, nonatomic) NSString *avatarMediaId; // @synthesize avatarMediaId=_avatarMediaId;
@property(retain, nonatomic) DTEnterpriseCard *follower; // @synthesize follower=_follower;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *extNumber; // @synthesize extNumber=_extNumber;
@property(copy, nonatomic) NSString *followerName; // @synthesize followerName=_followerName;
@property(copy, nonatomic) NSString *position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *deptName; // @synthesize deptName=_deptName;
@property(copy, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *orgName; // @synthesize orgName=_orgName;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *namePinyin; // @synthesize namePinyin=_namePinyin;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *staffId; // @synthesize staffId=_staffId;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *primaryKey; // @synthesize primaryKey=_primaryKey;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *locationJson;
@property(copy, nonatomic) NSString *propertiesJson;
@property(copy, nonatomic) NSString *followRecordsJson;
@property(copy, nonatomic) NSString *followerJson;
@property(copy, nonatomic) NSString *labelsJson;
@property(copy, nonatomic) NSString *permissionJson;
- (id)mobileContact;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
