//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseYapObject.h"

@class BLAccountConfiguration, DTIMAPAccount, DTSMTPAccount, NSArray, NSDictionary, NSOrderedSet, NSSet, NSString;

@interface BLAccount : BLBaseYapObject
{
    _Bool _isCurAccount;
    _Bool _hasNewMail;
    _Bool _shouldPush;
    NSSet *_cachedMonths;
    NSString *_password;
    NSString *_userID;
    NSString *_masterAccount;
    NSString *_accessTokenCipher;
    NSString *_refreshTokenCipher;
    long long _emailProtocolType;
    long long _accountType;
    NSString *_username;
    NSString *_nickname;
    long long _accessTokenDuration;
    long long _accessTokenGeneratedTime;
    NSString *_avatarID;
    NSString *_contactPhoneNumber;
    NSString *_email;
    NSString *_emailServerURL;
    NSString *_folderSyncKey;
    NSString *_folderSyncKeyV1;
    NSOrderedSet *_aliasList;
    NSString *_oldDeviceToken;
    NSString *_theNewDeviceToken;
    BLAccountConfiguration *_config;
    NSString *_defaultSender;
    NSDictionary *_wkInfo;
    NSArray *_popAccounts;
    NSArray *_smtpAccounts;
    NSDictionary *_extraInfo;
    NSString *_tagSyncKey;
    NSString *_defaultSendMail;
    NSArray *_friendDomains;
}

+ (id)excludePropertiesNotUsedForSecondaryIndex;
+ (id)excludeProperties;
+ (id)findAll;
+ (id)findWithEmail:(id)arg1;
+ (id)findFirstWithUserID:(id)arg1;
+ (id)findFirstWithMasterAccount:(id)arg1;
+ (id)findFirstWithEmail:(id)arg1;
@property(retain, nonatomic) NSArray *friendDomains; // @synthesize friendDomains=_friendDomains;
@property(nonatomic) _Bool shouldPush; // @synthesize shouldPush=_shouldPush;
@property(retain, nonatomic) NSString *defaultSendMail; // @synthesize defaultSendMail=_defaultSendMail;
@property(retain, nonatomic) NSString *tagSyncKey; // @synthesize tagSyncKey=_tagSyncKey;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSArray *smtpAccounts; // @synthesize smtpAccounts=_smtpAccounts;
@property(retain, nonatomic) NSArray *popAccounts; // @synthesize popAccounts=_popAccounts;
@property(retain, nonatomic) NSDictionary *wkInfo; // @synthesize wkInfo=_wkInfo;
@property(nonatomic) _Bool hasNewMail; // @synthesize hasNewMail=_hasNewMail;
@property(retain, nonatomic) NSString *defaultSender; // @synthesize defaultSender=_defaultSender;
@property(retain, nonatomic) BLAccountConfiguration *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *theNewDeviceToken; // @synthesize theNewDeviceToken=_theNewDeviceToken;
@property(retain, nonatomic) NSString *oldDeviceToken; // @synthesize oldDeviceToken=_oldDeviceToken;
@property(retain, nonatomic) NSOrderedSet *aliasList; // @synthesize aliasList=_aliasList;
@property(nonatomic) _Bool isCurAccount; // @synthesize isCurAccount=_isCurAccount;
@property(retain, nonatomic) NSString *folderSyncKeyV1; // @synthesize folderSyncKeyV1=_folderSyncKeyV1;
@property(retain, nonatomic) NSString *folderSyncKey; // @synthesize folderSyncKey=_folderSyncKey;
@property(retain, nonatomic) NSString *emailServerURL; // @synthesize emailServerURL=_emailServerURL;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *contactPhoneNumber; // @synthesize contactPhoneNumber=_contactPhoneNumber;
@property(retain, nonatomic) NSString *avatarID; // @synthesize avatarID=_avatarID;
@property(nonatomic) long long accessTokenGeneratedTime; // @synthesize accessTokenGeneratedTime=_accessTokenGeneratedTime;
@property(nonatomic) long long accessTokenDuration; // @synthesize accessTokenDuration=_accessTokenDuration;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) long long accountType; // @synthesize accountType=_accountType;
@property(nonatomic) long long emailProtocolType; // @synthesize emailProtocolType=_emailProtocolType;
@property(retain, nonatomic) NSString *refreshTokenCipher; // @synthesize refreshTokenCipher=_refreshTokenCipher;
@property(retain, nonatomic) NSString *accessTokenCipher; // @synthesize accessTokenCipher=_accessTokenCipher;
@property(retain, nonatomic) NSString *masterAccount; // @synthesize masterAccount=_masterAccount;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSSet *cachedMonths; // @synthesize cachedMonths=_cachedMonths;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *refreshToken;
@property(retain, nonatomic) NSString *accessToken;
- (void)setDefaultMailSignatureURL:(id)arg1;
- (id)defaultMailSignatureURL;
- (void)setDefaultMailSignature:(id)arg1;
- (id)defaultMailSignature;
- (_Bool)hasNewMailExceptInbox;
- (long long)fetchAllFoldersNewAccount;
- (id)wk_signature;
- (unsigned long long)wk_timestamp;
- (id)wk_nonce;
- (long long)wk_openId;
- (id)wk_appKey;
- (id)wk_domain;
- (void)addCachedMonths:(id)arg1;
- (_Bool)isSelf:(id)arg1 comparePolicy:(long long)arg2;
- (_Bool)isSelf:(id)arg1;
- (id)generateSmtpAccount;
- (id)generateImapAccount;
@property(retain, nonatomic) DTSMTPAccount *normalSmtpAccount;
@property(retain, nonatomic) DTIMAPAccount *longTimeAccount;
@property(retain, nonatomic) DTIMAPAccount *normalAccount;
- (void)setupDefaultMailSignature;
- (_Bool)dtc_isSelf:(id)arg1 folderType:(long long)arg2;

@end

