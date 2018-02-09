//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol DTChannelServiceNetworkProtocol <NSObject>
- (void)queryAflowBusinessOrderWithOrgId:(long long)arg1 successBlock:(void (^)(DTBusinessOrder *))arg2 failureBlock:(void (^)(DTError *))arg3;
- (void)queryChannelInviteInfo:(long long)arg1 successBlock:(void (^)(DTChannelInviteModel *))arg2 failureBlock:(void (^)(DTError *))arg3;
- (void)removeChannelApplyById:(long long)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(DTError *))arg3;
- (void)blockChannelApplyById:(long long)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(DTError *))arg3;
- (void)rejectChannelApplyById:(long long)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(DTError *))arg3;
- (void)acceptChannelApplyById:(long long)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(DTError *))arg3;
- (void)queryChannelApplyListWithCursor:(long long)arg1 size:(long long)arg2 successBlock:(void (^)(NSArray *, long long, _Bool))arg3 failureBlock:(void (^)(DTError *))arg4;
- (void)userOrgChannelLists:(void (^)(NSArray *))arg1 failureBlock:(void (^)(DTError *))arg2;
- (void)updateChannelSelfAddStatusWithOrgId:(long long)arg1 on:(_Bool)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(DTError *))arg4;
- (void)queryChannelSelfAddStatusWithOrgId:(long long)arg1 successBlock:(void (^)(_Bool))arg2 failureBlock:(void (^)(DTError *))arg3;
- (void)queryChannelOpenWithOrgId:(long long)arg1 successBlock:(void (^)(_Bool))arg2 failureBlock:(void (^)(DTError *))arg3;
- (void)sendChannelRequestWithOrgId:(long long)arg1 uids:(NSArray *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(DTError *))arg4;
- (void)removeChannelFollowWithOrgId:(long long)arg1 uid:(long long)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(DTError *))arg4;
- (void)cancelChannelFollowWithOrgId:(long long)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(DTError *))arg3;
- (void)acceptChannelRequestWithOrgId:(long long)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(DTError *))arg3;
- (void)queryChannelRequestWithCursor:(long long)arg1 size:(long long)arg2 successBlock:(void (^)(DTChannelRequestModelList *))arg3 failureBlock:(void (^)(DTError *))arg4;
@end

