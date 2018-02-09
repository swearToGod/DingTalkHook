//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTSpaceDownloadService, DTSpaceUploadService;
@protocol DTCSpaceServiceProtocol;

@interface DTCSpaceServiceKit : NSObject
{
    id <DTCSpaceServiceProtocol> _cspaceService;
    DTSpaceDownloadService *_downloadService;
    DTSpaceUploadService *_uploadService;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) DTSpaceUploadService *uploadService; // @synthesize uploadService=_uploadService;
@property(readonly, nonatomic) DTSpaceDownloadService *downloadService; // @synthesize downloadService=_downloadService;
@property(readonly, nonatomic) id <DTCSpaceServiceProtocol> cspaceService; // @synthesize cspaceService=_cspaceService;
- (void).cxx_destruct;
- (_Bool)isOnlineEditFileMessageMode:(id)arg1 inDocReadyOnly:(_Bool)arg2 isNormalConversation:(_Bool)arg3;
- (_Bool)showCollectFileEntry:(unsigned long long)arg1;
- (void)_resetToken;
- (_Bool)_isNeedRefresh;
- (void)_saveCSpaceToken:(id)arg1 withExpirationTime:(long long)arg2;
- (void)infoMediaDentries:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getCSpaceLoginTokenWithsuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (_Bool)clearCacheWithSpaceMode:(id)arg1;
- (_Bool)isSupportDetailComment:(long long)arg1 isBoss:(_Bool)arg2 isOpenEncrypt:(_Bool)arg3;
- (_Bool)isNewDentryDetailEnabled:(unsigned long long)arg1;
- (void)sendCSpaceSendFileSuccess;
- (void)sendCSpaceUTWithUTValue:(id)arg1 fromConversation:(id)arg2 toDest:(id)arg3;
- (void)sendCSpaceUTWithUTValue:(id)arg1 fromStr:(id)arg2 toProperty:(id)arg3;
- (void)sendCSpaceUTWithUTValue:(id)arg1 fromSpaceMode:(id)arg2 toConv:(id)arg3;
- (id)checkCSpaceDestWithProperty:(id)arg1;
- (id)checkConverstionType:(id)arg1;
- (id)checkTheSendSpaceModeFrom:(id)arg1;
- (unsigned long long)cachesSizeForSpace;
- (void)decryptWith:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)downloadDentryFileBySpaceMode:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)cancelUploadTaskWithTaskId:(id)arg1;
- (void)reuploadWithTaskId:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)utFilterType:(long long)arg1;
- (void)redHotForSpaceWithConversation:(id)arg1;
- (id)generateName:(id)arg1 withSize:(long long)arg2 withExtsion:(id)arg3;
- (_Bool)isPersonalUser;
- (void)getConversationCSpaceId:(id)arg1 message:(id)arg2 isEncrypt:(_Bool)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)onAccountLoggedOut:(id)arg1;
- (void)onAccountLoggedIn:(id)arg1;
- (void)clear;
- (void)setup;
- (void)dealloc;
- (id)init;

@end

