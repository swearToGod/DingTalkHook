//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTBizConversation-Protocol.h"
#import "DTBizConversationBase-Protocol.h"
#import "DTBizConversationLiveExtension-Protocol.h"
#import "DTBizConversationTagExtension-Protocol.h"

@class DTBizMessage, DTFloatWindowModel, NSArray, NSNumber, NSString;

@interface DTBizConversation : NSObject <DTBizConversationTagExtension, DTBizConversation, DTBizConversationLiveExtension, DTBizConversationBase>
{
    _Bool _showHistory;
    _Bool _disableNotification;
    _Bool _hasJoinGroupControl;
    _Bool _groupIdSearchEnabled;
    _Bool _groupTitleSearchEnabled;
    _Bool _onlyOwnerCanAtAll;
    int _memberLimit;
    int _groupLevel;
    long long categoryId;
    long long createdAt;
    NSArray *_icons;
    DTBizMessage *_lastMessage;
    NSArray *_members;
    unsigned long long _primaryKey;
    NSString *_cId;
    long long _version;
    NSString *_iconsJson;
    unsigned long long _iconType;
    NSString *_automaticIcon;
    NSNumber *_automaticIconTag;
    NSString *_customIcon;
    NSString *_sourceType;
    NSString *_title;
    NSString *_content;
    long long _lastModifyTime;
    unsigned long long _conversationType;
    NSString *_lastMessageJson;
    long long _sortIndex;
    long long _customSortIndex;
    long long _unreadCount;
    long long _memberCount;
    NSString *_wkMembersJson;
    NSString *_draftText;
    long long _unreadAtMeCount;
    NSString *_settings;
    NSString *_extension;
    NSString *_privateExtension;
    NSString *_ancientStampInDB;
    NSString *_recentStampInDB;
    unsigned long long _status;
    long long _tag;
    NSString *_clientExtension;
    long long _addMemberPermission;
    NSString *_parentId;
    unsigned long long _nodeType;
    long long _ownerId;
    NSNumber *_banWordsType;
    NSNumber *_inBanWhite;
    NSNumber *_inBanBlack;
    NSNumber *_banWordsTime;
    long long _groupId;
    NSString *_searchReason;
    NSString *_sourceCid;
    unsigned long long _callbackMode;
}

+ (id)bizMemberFromWKBizConversation:(id)arg1 contactMap:(id)arg2;
+ (id)bizMemberFromWKMemberRole:(id)arg1 contactMap:(id)arg2;
+ (id)orgUserNameMapWithOrgUserNames:(id)arg1;
+ (id)contactMapWithContacts:(id)arg1;
+ (id)contactMapWithUids:(id)arg1 contactManager:(id)arg2;
+ (id)createConversationIconsWithMembers:(id)arg1;
+ (id)defaultConversationIconsWithUIds:(id)arg1;
+ (id)defaultConversationTitleWithUIds:(id)arg1;
+ (id)defaultConversationIconsWithUserIcons:(id)arg1;
+ (id)contactsWithStingUIds:(id)arg1;
+ (id)conversationIconConvertFromWKBizConversation:(id)arg1 contactManager:(id)arg2;
+ (id)iconMemberIdsFromWKBizConversation:(id)arg1;
+ (id)userIconsFromWKBizConversation:(id)arg1;
+ (id)memberIdsFromWKBizConversation:(id)arg1;
+ (id)conversationFromWKCardModel:(id)arg1;
+ (id)conversationFromWKBizConversation:(id)arg1 contactManager:(id)arg2 skipMasks:(long long)arg3 completed:(CDUnknownBlockType)arg4;
+ (id)conversationFromWKBizConversation:(id)arg1 contactManager:(id)arg2 completed:(CDUnknownBlockType)arg3;
@property(nonatomic) unsigned long long callbackMode; // @synthesize callbackMode=_callbackMode;
@property(copy, nonatomic) NSString *sourceCid; // @synthesize sourceCid=_sourceCid;
@property(nonatomic) _Bool onlyOwnerCanAtAll; // @synthesize onlyOwnerCanAtAll=_onlyOwnerCanAtAll;
@property(copy, nonatomic) NSString *searchReason; // @synthesize searchReason=_searchReason;
@property(nonatomic) _Bool groupTitleSearchEnabled; // @synthesize groupTitleSearchEnabled=_groupTitleSearchEnabled;
@property(nonatomic) _Bool groupIdSearchEnabled; // @synthesize groupIdSearchEnabled=_groupIdSearchEnabled;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSNumber *banWordsTime; // @synthesize banWordsTime=_banWordsTime;
@property(retain, nonatomic) NSNumber *inBanBlack; // @synthesize inBanBlack=_inBanBlack;
@property(retain, nonatomic) NSNumber *inBanWhite; // @synthesize inBanWhite=_inBanWhite;
@property(retain, nonatomic) NSNumber *banWordsType; // @synthesize banWordsType=_banWordsType;
@property(nonatomic) _Bool hasJoinGroupControl; // @synthesize hasJoinGroupControl=_hasJoinGroupControl;
@property(nonatomic) long long ownerId; // @synthesize ownerId=_ownerId;
@property(nonatomic) unsigned long long nodeType; // @synthesize nodeType=_nodeType;
@property(copy, nonatomic) NSString *parentId; // @synthesize parentId=_parentId;
@property(nonatomic) int groupLevel; // @synthesize groupLevel=_groupLevel;
@property(nonatomic) int memberLimit; // @synthesize memberLimit=_memberLimit;
@property(nonatomic) long long addMemberPermission; // @synthesize addMemberPermission=_addMemberPermission;
@property(copy, nonatomic) NSString *clientExtension; // @synthesize clientExtension=_clientExtension;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *recentStampInDB; // @synthesize recentStampInDB=_recentStampInDB;
@property(copy, nonatomic) NSString *ancientStampInDB; // @synthesize ancientStampInDB=_ancientStampInDB;
@property(copy, nonatomic) NSString *privateExtension; // @synthesize privateExtension=_privateExtension;
@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *settings; // @synthesize settings=_settings;
@property(nonatomic) long long unreadAtMeCount; // @synthesize unreadAtMeCount=_unreadAtMeCount;
@property(copy, nonatomic) NSString *draftText; // @synthesize draftText=_draftText;
@property(copy, nonatomic) NSString *wkMembersJson; // @synthesize wkMembersJson=_wkMembersJson;
@property(nonatomic) long long memberCount; // @synthesize memberCount=_memberCount;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) _Bool disableNotification; // @synthesize disableNotification=_disableNotification;
@property(nonatomic) long long customSortIndex; // @synthesize customSortIndex=_customSortIndex;
@property(nonatomic) long long sortIndex; // @synthesize sortIndex=_sortIndex;
@property(copy, nonatomic) NSString *lastMessageJson; // @synthesize lastMessageJson=_lastMessageJson;
@property(nonatomic) unsigned long long conversationType; // @synthesize conversationType=_conversationType;
@property(nonatomic) long long lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) _Bool showHistory; // @synthesize showHistory=_showHistory;
@property(copy, nonatomic) NSString *customIcon; // @synthesize customIcon=_customIcon;
@property(retain, nonatomic) NSNumber *automaticIconTag; // @synthesize automaticIconTag=_automaticIconTag;
@property(copy, nonatomic) NSString *automaticIcon; // @synthesize automaticIcon=_automaticIcon;
@property(nonatomic) unsigned long long iconType; // @synthesize iconType=_iconType;
@property(copy, nonatomic) NSString *iconsJson; // @synthesize iconsJson=_iconsJson;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *cId; // @synthesize cId=_cId;
@property(nonatomic) unsigned long long primaryKey; // @synthesize primaryKey=_primaryKey;
@property(copy, nonatomic) NSArray *members; // @synthesize members=_members;
@property(nonatomic) long long createdAt; // @synthesize createdAt;
@property(nonatomic) long long categoryId; // @synthesize categoryId;
- (void).cxx_destruct;
- (void)updateConversationClientExtension:(id)arg1 message:(id)arg2 wkBizConversation:(id)arg3 needSaveToDB:(_Bool)arg4;
- (void)updateConversationCustomSortIndex:(id)arg1 message:(id)arg2;
@property(retain, nonatomic) DTBizMessage *lastMessage; // @synthesize lastMessage=_lastMessage;
@property(copy, nonatomic) NSArray *icons; // @synthesize icons=_icons;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEnableSyncFileToDingpan;
- (_Bool)isShowSyncFileToDingpan;
- (_Bool)isSpaceDocReadOnly;
- (id)hiddenConversationSpaceId;
- (id)normalConversationSpaceId;
- (id)conversationDingPanSpaceId;
@property(nonatomic, getter=isDingDriveAclPermissionInheritance) _Bool dingDriveAclPermissionInheritance;
- (_Bool)isAllowedShowOnlineEditDoc;
- (_Bool)isPersonalAssistant;
- (_Bool)hasGroupId;
- (_Bool)isSupportedSearch;
- (_Bool)isAllowedOpenSearch;
- (_Bool)isAllowedShowReadStatusInOTO;
- (_Bool)isBoss;
- (_Bool)isMTM;
- (_Bool)isOTO;
- (_Bool)isContainer;
- (_Bool)isChild;
- (_Bool)isIndustryGroup;
- (long long)preferredCooperativeOrgId;
- (id)cooperativeGroupOrgIDList;
- (id)cooperativeGroupOrgIDListInString;
- (_Bool)isCooperativeGroup;
- (_Bool)isDepartmentAutoAddMember;
- (id)getDepartmentName;
- (id)getDepartmentId;
- (_Bool)isDepartmentGroup;
- (_Bool)isAllUserGroup;
- (_Bool)isManagerGroup;
- (void)setGroupOrganizationId:(long long)arg1;
- (_Bool)isShowGroupRealName;
- (id)buildShareLinkExtensionWithURL:(id)arg1;
- (_Bool)grayFunctionMsgToSpace;
- (_Bool)grayFunctionLinkReactionCard;
- (_Bool)grayFunctionSpaceReactionCard;
- (_Bool)grayFunctionReactionCard:(id)arg1;
- (id)getOrganizationName;
- (long long)getOrganizationId;
- (_Bool)enableInceptForwardMessage;
- (id)getJumpURL;
- (_Bool)hasGap;
- (_Bool)isSync;
- (_Bool)isAtAll;
- (_Bool)isAtMe;
- (_Bool)isRedEnvelopEnterpriseNew;
- (_Bool)isRedEnvelopEnterprise;
- (_Bool)isGroupAnnounce;
- (_Bool)isSpecial;
- (id)clientExtensionValueForKey:(id)arg1;
- (void)setClientExtensionValue:(id)arg1 forKey:(id)arg2;
- (void)setClientExtensionDictionary:(id)arg1;
- (id)clientExtensionDictionary;
- (_Bool)hasExtensionEnterpriseLogo;
- (_Bool)hasExtensionIcon;
- (id)extensionValueForKey:(id)arg1;
- (void)setExtensionValue:(id)arg1 forKey:(id)arg2;
- (void)setExtensionDictionary:(id)arg1;
- (id)extensionDictionary;
- (id)wkConveration;
- (void)setWKConverastion:(id)arg1;
- (_Bool)isFileNeedThirdPartyEncrypt;
- (_Bool)isThirdPartyEncrypt;
- (void)setCallbackModeWithString:(id)arg1;
@property(readonly, nonatomic) _Bool hasLiveRecord;
@property(readonly, nonatomic) _Bool hasLiveFloatingWindow;
@property(readonly, nonatomic) DTFloatWindowModel *floatWindow;
- (id)conversationIconImageIfNeedSafeIcon:(_Bool)arg1 tintColor:(id)arg2;
- (id)conversationIconImageIfNeedSafeIcon:(_Bool)arg1;
- (long long)getOTOFriendUId;
- (id)get_conversationSubTitleWithOneBoxModel:(id)arg1 workListCount:(int)arg2;
- (id)get_conversationDisplayeTitle;
- (id)getParseConversationIcon;
- (id)getTitleMemberUserIcons;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

