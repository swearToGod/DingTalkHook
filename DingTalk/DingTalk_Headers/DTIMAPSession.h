//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTIMAPProtocol-Protocol.h"

@class DTIMAPIdentity, DTIMAPNamespace, NSArray, NSError, NSOperationQueue, NSString;

@interface DTIMAPSession : NSObject <DTIMAPProtocol>
{
    struct _opaque_pthread_mutex_t mIdleLock;
    struct mailimap *_imap;
    _Bool _checkCertificateEnabled;
    _Bool _allowInvalidCertificate;
    _Bool _userCancelOper;
    _Bool _mShouldDisconnect;
    _Bool _voIPEnabled;
    _Bool _mIdentityEnabled;
    _Bool _mXListEnabled;
    _Bool _mIsGmail;
    _Bool _mIdleEnabled;
    _Bool _mCondstoreEnabled;
    _Bool _mQResyncEnabled;
    _Bool _mXYMHighestModseqEnabled;
    _Bool _mXOauth2Enabled;
    _Bool _mNamespaceEnabled;
    _Bool _mCompressionEnabled;
    BOOL _mDelimiter;
    _Bool _mAllowsNewPermanentFlags;
    _Bool _mBodyProgressEnabled;
    unsigned short _port;
    int _authType;
    unsigned int _uidValidity;
    unsigned int _uidNext;
    unsigned int _mFolderMsgCount;
    unsigned int _mFirstUnseenUid;
    unsigned int _mLastFetchedSequenceNumber;
    NSString *_host;
    NSString *_emailAccount;
    NSString *_password;
    long long _connectType;
    NSString *_lastSelectFolder;
    unsigned long long _modSequenceValue;
    DTIMAPIdentity *_clientIdentity;
    DTIMAPIdentity *_serverIdentity;
    NSError *_error;
    long long _state;
    NSString *_currentSelectPath;
    NSOperationQueue *_operationQueue;
    DTIMAPNamespace *_defaultNamespace;
    CDUnknownBlockType _mProgressCallback;
    unsigned long long _mProgressItemsCount;
    NSArray *_whitelistForSendIdentifier;
}

@property(retain, nonatomic) NSArray *whitelistForSendIdentifier; // @synthesize whitelistForSendIdentifier=_whitelistForSendIdentifier;
@property(nonatomic) unsigned long long mProgressItemsCount; // @synthesize mProgressItemsCount=_mProgressItemsCount;
@property(copy) CDUnknownBlockType mProgressCallback; // @synthesize mProgressCallback=_mProgressCallback;
@property(nonatomic) _Bool mBodyProgressEnabled; // @synthesize mBodyProgressEnabled=_mBodyProgressEnabled;
@property(nonatomic) unsigned int mLastFetchedSequenceNumber; // @synthesize mLastFetchedSequenceNumber=_mLastFetchedSequenceNumber;
@property(nonatomic) _Bool mAllowsNewPermanentFlags; // @synthesize mAllowsNewPermanentFlags=_mAllowsNewPermanentFlags;
@property(nonatomic) BOOL mDelimiter; // @synthesize mDelimiter=_mDelimiter;
@property(retain, nonatomic) DTIMAPNamespace *defaultNamespace; // @synthesize defaultNamespace=_defaultNamespace;
@property _Bool mCompressionEnabled; // @synthesize mCompressionEnabled=_mCompressionEnabled;
@property _Bool mNamespaceEnabled; // @synthesize mNamespaceEnabled=_mNamespaceEnabled;
@property _Bool mXOauth2Enabled; // @synthesize mXOauth2Enabled=_mXOauth2Enabled;
@property _Bool mXYMHighestModseqEnabled; // @synthesize mXYMHighestModseqEnabled=_mXYMHighestModseqEnabled;
@property _Bool mQResyncEnabled; // @synthesize mQResyncEnabled=_mQResyncEnabled;
@property _Bool mCondstoreEnabled; // @synthesize mCondstoreEnabled=_mCondstoreEnabled;
@property _Bool mIdleEnabled; // @synthesize mIdleEnabled=_mIdleEnabled;
@property _Bool mIsGmail; // @synthesize mIsGmail=_mIsGmail;
@property _Bool mXListEnabled; // @synthesize mXListEnabled=_mXListEnabled;
@property _Bool mIdentityEnabled; // @synthesize mIdentityEnabled=_mIdentityEnabled;
@property(nonatomic) _Bool voIPEnabled; // @synthesize voIPEnabled=_voIPEnabled;
@property _Bool mShouldDisconnect; // @synthesize mShouldDisconnect=_mShouldDisconnect;
@property(nonatomic) _Bool userCancelOper; // @synthesize userCancelOper=_userCancelOper;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSString *currentSelectPath; // @synthesize currentSelectPath=_currentSelectPath;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) DTIMAPIdentity *serverIdentity; // @synthesize serverIdentity=_serverIdentity;
@property(retain, nonatomic) DTIMAPIdentity *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
@property(readonly, nonatomic) unsigned int mFirstUnseenUid; // @synthesize mFirstUnseenUid=_mFirstUnseenUid;
@property(readonly, nonatomic) unsigned int mFolderMsgCount; // @synthesize mFolderMsgCount=_mFolderMsgCount;
@property(readonly, nonatomic) unsigned long long modSequenceValue; // @synthesize modSequenceValue=_modSequenceValue;
@property(readonly, nonatomic) unsigned int uidNext; // @synthesize uidNext=_uidNext;
@property(readonly, nonatomic) unsigned int uidValidity; // @synthesize uidValidity=_uidValidity;
@property(nonatomic) _Bool allowInvalidCertificate; // @synthesize allowInvalidCertificate=_allowInvalidCertificate;
@property(nonatomic) _Bool checkCertificateEnabled; // @synthesize checkCertificateEnabled=_checkCertificateEnabled;
@property(copy, nonatomic) NSString *lastSelectFolder; // @synthesize lastSelectFolder=_lastSelectFolder;
@property(nonatomic) int authType; // @synthesize authType=_authType;
@property(nonatomic) long long connectType; // @synthesize connectType=_connectType;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *emailAccount; // @synthesize emailAccount=_emailAccount;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (id)search:(id)arg1 expression:(id)arg2;
- (id)search:(id)arg1 kind:(long long)arg2 searchString:(id)arg3;
- (void)copyMessages:(id)arg1 uidSet:(id)arg2 destFolder:(id)arg3 pUidMapping:(id *)arg4;
- (void)moveMessages:(id)arg1 uidSet:(id)arg2 destFolder:(id)arg3 pUidMapping:(id *)arg4;
- (void)subscribeFolder:(id)arg1;
- (void)createFolder:(id)arg1;
- (void)expunge:(id)arg1;
- (_Bool)noopInternal;
- (void)noop;
- (void)appendMessageData:(id)arg1 flags:(int)arg2 toPath:(id)arg3 progressDelegate:(id)arg4;
- (unsigned int)appendMessageWithCustomFlagsAndDate:(id)arg1 messageData:(id)arg2 flags:(int)arg3 customFlags:(id)arg4 date:(double)arg5 progressCallback:(CDUnknownBlockType)arg6;
- (void)storeFlags:(int)arg1 kind:(int)arg2 withUIDSet:(id)arg3 path:(id)arg4;
- (void)storeFlagsAndCustomFlags:(id)arg1 withUIDSet:(id)arg2 kind:(int)arg3 withFlags:(int)arg4 withCustomFlags:(id)arg5;
- (id)fetchMessageAttachment:(id)arg1 identifierIsUID:(_Bool)arg2 identifier:(unsigned int)arg3 partID:(id)arg4 encoding:(long long)arg5 progressCallback:(CDUnknownBlockType)arg6;
- (id)fetchMessage:(id)arg1 identifierIsUID:(_Bool)arg2 identifier:(unsigned int)arg3 progressCallback:(CDUnknownBlockType)arg4;
- (id)fetchFolderMessages:(id)arg1 withSet:(id)arg2 byUID:(_Bool)arg3 kind:(int)arg4 folder:(id)arg5;
- (id)fetchMessages:(id)arg1 requestKind:(int)arg2 fetchByUID:(_Bool)arg3 imapSet:(struct mailimap_set *)arg4 uidsFilter:(id)arg5 numbersFilter:(id)arg6 modseq:(unsigned long long)arg7 mapping:(id)arg8 progressCallback:(CDUnknownBlockType)arg9 extraHeaders:(id)arg10;
- (id)getResultsFromError:(int)arg1 list:(struct clist_s *)arg2 account:(id)arg3;
- (id)fetchAllFoldersWithAccount:(id)arg1;
- (_Bool)checkCertificate:(struct _mailstream *)arg1 withHostName:(id)arg2;
- (void)checkAccountWithLoginCommand;
- (void)selectIfNeed:(id)arg1;
- (id)sendIdentity:(id)arg1;
- (void)sendCapability;
- (void)applyCapabilities:(id)arg1;
- (void)capabilitySetWithSessionState:(id)arg1;
- (void)select:(id)arg1;
- (id)fetchNamespace;
- (_Bool)enableFeature:(id)arg1;
- (void)enableCompression;
- (void)enableFeatures;
- (void)login;
- (void)loginIfNeed;
- (_Bool)hasError:(int)arg1;
- (void)connectHostWithType:(long long)arg1 shouldRetry:(_Bool)arg2;
- (void)connectHost;
- (void)connectIfNeed;
- (void)disconnect;
- (void)unsetup;
- (void)setup;
- (void)itemProgress;
- (void)bodyProgressWithCurrent:(unsigned long long)arg1 maximum:(unsigned long long)arg2;
- (id)imapInfo;
- (void)loggerResponse;
- (void)cancel;
- (void)queueOperation:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

