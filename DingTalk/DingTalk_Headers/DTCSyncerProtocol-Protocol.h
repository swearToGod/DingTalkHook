//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BLAccount, BLSpace, BLSyncParentObject, DTCAttachment, DTCFolder, DTCMail, NSArray, NSDictionary, NSString;
@protocol BLCancelable;

@protocol DTCSyncerProtocol <NSObject>
- (NSArray *)refreshItemsForFolders:(NSArray *)arg1 handleModuleType:(long long)arg2 filterType:(int)arg3 forAccount:(BLAccount *)arg4 windowSize:(int)arg5 fromSender:(id)arg6 successBlock:(void (^)(NSArray *, NSArray *, NSArray *, unsigned long long))arg7 failureBlock:(void (^)(NSError *))arg8;

@optional
- (void)syncAllTagsForAccount:(BLAccount *)arg1 fromSender:(id)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)batchSetReadWithMails:(NSArray *)arg1 account:(BLAccount *)arg2 folder:(DTCFolder *)arg3 setRead:(_Bool)arg4 batchSize:(long long)arg5 progressBlock:(void (^)(long long, long long))arg6 completionBlock:(void (^)(void))arg7 failureBlock:(void (^)(NSError *))arg8;
- (NSString *)searchItemWithSearchTerm:(NSString *)arg1 searchItemType:(int)arg2 account:(BLAccount *)arg3 offset:(unsigned long long)arg4 length:(unsigned long long)arg5 extend:(NSDictionary *)arg6 fromSender:(id)arg7 successBlock:(void (^)(NSArray *, long long))arg8 failureBlock:(void (^)(NSError *))arg9;
- (NSString *)downloadAttachment:(DTCAttachment *)arg1 inItem:(NSString *)arg2 forAccount:(BLAccount *)arg3 fromSender:(id)arg4 progressBlock:(void (^)(long long, long long))arg5 successBlock:(void (^)(void))arg6 failureBlock:(void (^)(NSError *))arg7;
- (void)sendLocalChanges:(NSArray *)arg1 inSpace:(BLSpace *)arg2 forAccount:(BLAccount *)arg3 fromSender:(id)arg4 successBlock:(void (^)(void))arg5 progressBlock:(void (^)(BLBaseYapObject *, long long, long long))arg6 failureBlock:(void (^)(NSError *))arg7;
- (void)sendMail:(DTCMail *)arg1 forAccount:(BLAccount *)arg2 fromSender:(id)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(NSError *))arg5;
- (void)syncAllFoldersForAccount:(BLAccount *)arg1 fromSender:(id)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)syncItemsForTags:(BLSpace *)arg1 account:(BLAccount *)arg2 fromSender:(id)arg3 successBlock:(void (^)(_Bool))arg4 failureBlock:(void (^)(NSError *))arg5;
- (id <BLCancelable>)syncWithParent:(BLSyncParentObject *)arg1 dataScope:(unsigned long long)arg2 scopeId:(NSString *)arg3 syncKeyType:(long long)arg4 loadMore:(_Bool)arg5 account:(BLAccount *)arg6 handler:(id)arg7 successBlock:(void (^)(void))arg8 continueJudgeBlock:(void (^)(_Bool *))arg9 failureBlock:(void (^)(NSError *))arg10;
- (id <BLCancelable>)queryWithParent:(BLSyncParentObject *)arg1 dataScope:(unsigned long long)arg2 scopeId:(NSString *)arg3 windowOffset:(long long)arg4 account:(BLAccount *)arg5 resultClass:(Class)arg6 successBlock:(void (^)(NSArray *))arg7 failureBlock:(void (^)(NSError *))arg8;
- (void)syncAllFoldersForSpace:(BLSpace *)arg1 account:(BLAccount *)arg2 fromSender:(id)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(NSError *))arg5;
- (void)initializeBizSpace:(NSString *)arg1 account:(BLAccount *)arg2 successBlock:(void (^)(BLSpace *))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)checkUserConfigWithEmail:(NSString *)arg1 withPwd:(NSString *)arg2 withProtocol:(long long)arg3 withSetting:(NSArray *)arg4 withCompletionBlock:(void (^)(void))arg5 failureBlock:(void (^)(NSError *))arg6;
- (void)logoutLocallyForAccount:(BLAccount *)arg1 completionBlock:(void (^)(void))arg2;
- (void)logoutForAccount:(BLAccount *)arg1 completionBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)refreshMailStatus:(NSArray *)arg1 account:(BLAccount *)arg2 forFolder:(DTCFolder *)arg3 completionBlock:(void (^)(void))arg4 failureBlock:(void (^)(NSError *))arg5;
- (void)refreshMailReceiverList:(NSString *)arg1 account:(BLAccount *)arg2 needCheckServer:(_Bool)arg3 completionBlock:(void (^)(void))arg4 failureBlock:(void (^)(NSError *))arg5;
- (NSString *)loadMailDetailFor:(DTCMail *)arg1 forAccount:(BLAccount *)arg2 needTag:(_Bool)arg3 onlyBody:(_Bool)arg4 progressBlock:(void (^)(long long, long long))arg5 completionBlock:(void (^)(void))arg6 failureBlock:(void (^)(NSError *))arg7;
- (void)loginWithAccountName:(NSString *)arg1 password:(NSString *)arg2 withSettingInfo:(NSArray *)arg3 openAPIToken:(NSString *)arg4 intervalToken:(NSString *)arg5 completionBlock:(void (^)(id))arg6 failureBlock:(void (^)(NSError *, NSString *))arg7;
@end

