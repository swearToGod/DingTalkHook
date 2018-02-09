//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WKConversationSettingPersistence, WKConversationSettingServiceNetwork, WKMemoryCache;

@interface WKConversationSettingService : NSObject
{
    long long _loginOpenId;
    WKConversationSettingPersistence *_persistenceIMP;
    WKConversationSettingServiceNetwork *_networkIMP;
    WKMemoryCache *_groupNickCache;
}

+ (id)conversationSettingServiceWithOpenDatabase:(id)arg1 loginOpenId:(long long)arg2;
@property(retain, nonatomic) WKMemoryCache *groupNickCache; // @synthesize groupNickCache=_groupNickCache;
@property(retain, nonatomic) WKConversationSettingServiceNetwork *networkIMP; // @synthesize networkIMP=_networkIMP;
@property(retain, nonatomic) WKConversationSettingPersistence *persistenceIMP; // @synthesize persistenceIMP=_persistenceIMP;
@property(nonatomic) long long loginOpenId; // @synthesize loginOpenId=_loginOpenId;
- (void).cxx_destruct;
- (void)listMembersBanWordsStatusForConversation:(id)arg1 isAsync:(_Bool)arg2 completeBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)updateAllMemberBanWordsStatusForConversation:(id)arg1 isEnable:(_Bool)arg2 sendMessage:(id)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)removeMemberFromBanWordsWhiteList:(id)arg1 openId:(long long)arg2 sendMessage:(id)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)removeMemberFromBanWordsBlackList:(id)arg1 openId:(long long)arg2 sendMessage:(id)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)addMembersToBanWordsWhiteList:(id)arg1 openIds:(id)arg2 sendMessage:(id)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)addMembersToBanWordsBlackList:(id)arg1 openIds:(id)arg2 banTime:(long long)arg3 sendMessage:(id)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)updateGroupNickCurrentTagWithParams:(id)arg1;
- (void)deleteMemberGroupNicksWithOpenIds:(id)arg1 cId:(id)arg2;
- (void)deleteMemberGroupNicksWithCIds:(id)arg1;
- (void)updateMemberGroupNickWithParam:(id)arg1 nick:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)saveMemberGroupNicks:(id)arg1;
- (void)memberGroupNicksWithParam:(id)arg1 forceRpc:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)localMemberGroupNicksWithParam:(id)arg1 isAsync:(_Bool)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)saveGroupNicks:(id)arg1 needNotify:(_Bool)arg2;
- (id)init;

@end

