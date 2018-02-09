//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface DTConversationIService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)getFilesHelperConversationId:(id)arg1;
- (void)searchPublic:(id)arg1 offset:(id)arg2 size:(id)arg3 callback:(id)arg4;
- (void)searchConversation:(id)arg1 offset:(id)arg2 size:(id)arg3 callback:(id)arg4;
- (void)getConversationExtension:(id)arg1 memberSize:(id)arg2 callback:(id)arg3;
- (void)refreshScode:(id)arg1 callback:(id)arg2;
- (void)joinConversation:(id)arg1 code:(id)arg2 callback:(id)arg3;
- (void)quitConversation:(id)arg1 callback:(id)arg2;
- (void)updateTitle:(id)arg1 newTitle:(id)arg2 callback:(id)arg3;
- (void)removeMembers:(id)arg1 userIds:(id)arg2 callback:(id)arg3;
- (void)addMembers:(id)arg1 userIds:(id)arg2 callback:(id)arg3;
- (void)getConversationMembers:(id)arg1 cursor:(id)arg2 size:(id)arg3 callback:(id)arg4;
- (void)clearConversation:(id)arg1 callback:(id)arg2;
- (void)removeConversation:(id)arg1 callback:(id)arg2;
- (void)createConversation:(id)arg1 callback:(id)arg2;
- (void)getConversation:(id)arg1 callback:(id)arg2;
- (void)setNotification:(_Bool)arg1 callback:(id)arg2;
- (void)getMTMConversations:(id)arg1 size:(id)arg2 callback:(id)arg3;
- (void)getConversations:(id)arg1 size:(id)arg2 callback:(id)arg3;

@end

