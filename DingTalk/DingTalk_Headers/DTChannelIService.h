//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface DTChannelIService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)getChannelOrgPageShortInfo:(id)arg1 callback:(id)arg2;
- (void)getChannelOrgPageShortInfoList:(id)arg1 callback:(id)arg2;
- (void)listOrgPageOfUserJoinedOrg:(id)arg1;
- (void)getChannelPreviewCheckScope:(id)arg1 callback:(id)arg2;
- (void)getChannelPreview:(id)arg1 callback:(id)arg2;
- (void)listChannelOfUserJoinedOrg:(id)arg1;
- (void)getChannelInviteInfoByCorpId:(id)arg1 callback:(id)arg2;
- (void)getChannelInviteInfo:(id)arg1 callback:(id)arg2;
- (void)removeChannelApply:(id)arg1 callback:(id)arg2;
- (void)rejectChannelApply:(id)arg1 status:(id)arg2 callback:(id)arg3;
- (void)acceptChannelApply:(id)arg1 callback:(id)arg2;
- (void)getChannelApplyList:(id)arg1 size:(id)arg2 callback:(id)arg3;
- (void)setupChannel:(id)arg1 open:(_Bool)arg2 callback:(id)arg3;
- (void)isChannelOpenByCorpId:(id)arg1 callback:(id)arg2;
- (void)isChannelOpen:(id)arg1 callback:(id)arg2;
- (void)sendChannelRequestByStaffId:(id)arg1 staffIds:(id)arg2 callback:(id)arg3;
- (void)sendChannelRequest:(id)arg1 uids:(id)arg2 callback:(id)arg3;
- (void)removeChannelFollow:(id)arg1 uid:(id)arg2 callback:(id)arg3;
- (void)cancelChannelFollow:(id)arg1 callback:(id)arg2;
- (void)acceptChannelRequestByCorpId:(id)arg1 callback:(id)arg2;
- (void)acceptChannelRequest:(id)arg1 callback:(id)arg2;
- (void)getChannelRequest:(id)arg1 size:(id)arg2 callback:(id)arg3;

@end

