//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "DTOrganization-Protocol.h"
#import "NSCopying-Protocol.h"
#import "OpenModelProtocol-Protocol.h"

@class NSArray, NSString;

@interface DTOrganization : OpenModel <OpenModelProtocol, NSCopying, DTOrganization>
{
    _Bool _canManage;
    _Bool _canLeave;
    _Bool _isAdmin;
    _Bool _enableB2B;
    _Bool _showsCustomer;
    _Bool _thirdPartyEncrypt;
    _Bool _showMobile;
    _Bool _openInvite;
    _Bool _aclEnabled;
    _Bool _isTemp;
    _Bool _showGroupWaterMark;
    _Bool _showContactWaterMark;
    _Bool _showGroupRealName;
    _Bool _thirdPartyEcryptPriority;
    _Bool _allStaffSecurityPasscode;
    _Bool _externalContactDisable;
    _Bool _labelPickerDisable;
    _Bool _devOnly;
    _Bool _thirdPartyEcryptBossChatEnable;
    _Bool _thirdPartyEcryptFileEnable;
    _Bool _allMemberGroupCreated;
    NSArray *_roles;
    NSString *_rolesJSON;
    long long _orgId;
    NSString *_orgName;
    NSString *_logoMediaId;
    NSString *_brief;
    unsigned long long _authLevel;
    long long _creatorUid;
    long long _sortIndex;
    long long _spaceId;
    long long _personalSpaceId;
    NSString *_encryptOrgId;
    unsigned long long _vip;
    unsigned long long _role;
    long long _industryCode;
    NSString *_industryDesc;
    NSString *_ext;
    NSString *_token;
    NSString *_corpId;
    NSString *_iconMediaId;
    NSString *_title;
    NSString *_url;
    long long _rightLevel;
}

+ (void)upgradeVersion22:(id)arg1;
+ (void)upgradeVersion21:(id)arg1;
+ (void)upgradeVersion20:(id)arg1;
+ (void)upgradeVersion19:(id)arg1;
+ (void)upgradeVersion18:(id)arg1;
+ (void)upgradeVersion17:(id)arg1;
+ (void)upgradeVersion16:(id)arg1;
+ (void)upgradeVersion15:(id)arg1;
+ (void)upgradeVersion14:(id)arg1;
+ (void)upgradeVersion13:(id)arg1;
+ (void)upgradeVersion12:(id)arg1;
+ (void)upgradeVersion11:(id)arg1;
+ (void)upgradeVersion10:(id)arg1;
+ (void)upgradeVersion9:(id)arg1;
+ (void)upgradeVersion8:(id)arg1;
+ (void)upgradeVersion7:(id)arg1;
+ (void)upgradeVersion6:(id)arg1;
+ (void)upgradeVersion5:(id)arg1;
+ (void)upgradeVersion4:(id)arg1;
+ (void)upgradeVersion3:(id)arg1;
+ (void)upgradeVersion2:(id)arg1;
+ (unsigned long long)currentNewestVersion;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
@property(nonatomic) _Bool allMemberGroupCreated; // @synthesize allMemberGroupCreated=_allMemberGroupCreated;
@property(nonatomic) long long rightLevel; // @synthesize rightLevel=_rightLevel;
@property(nonatomic) _Bool thirdPartyEcryptFileEnable; // @synthesize thirdPartyEcryptFileEnable=_thirdPartyEcryptFileEnable;
@property(nonatomic) _Bool thirdPartyEcryptBossChatEnable; // @synthesize thirdPartyEcryptBossChatEnable=_thirdPartyEcryptBossChatEnable;
@property(nonatomic) _Bool devOnly; // @synthesize devOnly=_devOnly;
@property(nonatomic) _Bool labelPickerDisable; // @synthesize labelPickerDisable=_labelPickerDisable;
@property(nonatomic) _Bool externalContactDisable; // @synthesize externalContactDisable=_externalContactDisable;
@property(nonatomic) _Bool allStaffSecurityPasscode; // @synthesize allStaffSecurityPasscode=_allStaffSecurityPasscode;
@property(nonatomic) _Bool thirdPartyEcryptPriority; // @synthesize thirdPartyEcryptPriority=_thirdPartyEcryptPriority;
@property(nonatomic) _Bool showGroupRealName; // @synthesize showGroupRealName=_showGroupRealName;
@property(nonatomic) _Bool showContactWaterMark; // @synthesize showContactWaterMark=_showContactWaterMark;
@property(nonatomic) _Bool showGroupWaterMark; // @synthesize showGroupWaterMark=_showGroupWaterMark;
@property(nonatomic) _Bool isTemp; // @synthesize isTemp=_isTemp;
@property(nonatomic) _Bool aclEnabled; // @synthesize aclEnabled=_aclEnabled;
@property(nonatomic) _Bool openInvite; // @synthesize openInvite=_openInvite;
@property(nonatomic) _Bool showMobile; // @synthesize showMobile=_showMobile;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *iconMediaId; // @synthesize iconMediaId=_iconMediaId;
@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) _Bool thirdPartyEncrypt; // @synthesize thirdPartyEncrypt=_thirdPartyEncrypt;
@property(copy, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *industryDesc; // @synthesize industryDesc=_industryDesc;
@property(nonatomic) long long industryCode; // @synthesize industryCode=_industryCode;
@property(nonatomic) _Bool showsCustomer; // @synthesize showsCustomer=_showsCustomer;
@property(nonatomic) unsigned long long role; // @synthesize role=_role;
@property(nonatomic) _Bool enableB2B; // @synthesize enableB2B=_enableB2B;
@property(nonatomic) unsigned long long vip; // @synthesize vip=_vip;
@property(copy, nonatomic) NSString *encryptOrgId; // @synthesize encryptOrgId=_encryptOrgId;
@property(nonatomic) _Bool isAdmin; // @synthesize isAdmin=_isAdmin;
@property(nonatomic) long long personalSpaceId; // @synthesize personalSpaceId=_personalSpaceId;
@property(nonatomic) long long spaceId; // @synthesize spaceId=_spaceId;
@property(nonatomic) _Bool canLeave; // @synthesize canLeave=_canLeave;
@property(nonatomic) _Bool canManage; // @synthesize canManage=_canManage;
@property(nonatomic) long long sortIndex; // @synthesize sortIndex=_sortIndex;
@property(nonatomic) long long creatorUid; // @synthesize creatorUid=_creatorUid;
@property(nonatomic) unsigned long long authLevel; // @synthesize authLevel=_authLevel;
@property(copy, nonatomic) NSString *brief; // @synthesize brief=_brief;
@property(copy, nonatomic) NSString *logoMediaId; // @synthesize logoMediaId=_logoMediaId;
@property(copy, nonatomic) NSString *orgName; // @synthesize orgName=_orgName;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(copy, nonatomic) NSArray *roles; // @synthesize roles=_roles;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setRolesJSON:(id)arg1;
@property(readonly, copy, nonatomic) NSString *rolesJSON; // @synthesize rolesJSON=_rolesJSON;
- (id)getNation;
- (id)getLocale;
- (unsigned long long)rightLevelEnum;
- (_Bool)isSuperManager;
- (_Bool)isManager;
- (_Bool)isNormalEmployee;
- (_Bool)isManagerOrBoss;
- (_Bool)hasBindedSmartDevice;
@property(nonatomic, getter=isDingDriveAclPermissionInheritance) _Bool dingDriveAclPermissionInheritance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

