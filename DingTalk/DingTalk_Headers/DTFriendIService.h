//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface DTFriendIService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)getShowMobileFriendList:(id)arg1 size:(id)arg2 callback:(id)arg3;
- (void)updateShowMobile:(id)arg1 isShowMobile:(_Bool)arg2 callback:(id)arg3;
- (void)removeFriendRequest:(id)arg1 callback:(id)arg2;
- (void)searchFriend:(id)arg1 offset:(id)arg2 size:(id)arg3 callback:(id)arg4;
- (void)removeFriend:(id)arg1 callback:(id)arg2;
- (void)getFriendRequestListV2:(id)arg1 size:(id)arg2 callback:(id)arg3;
- (void)getFriendRequestList:(id)arg1 size:(id)arg2 callback:(id)arg3;
- (void)getFriendList:(id)arg1 size:(id)arg2 callback:(id)arg3;
- (void)getRelation:(id)arg1 callback:(id)arg2;
- (void)acceptFriendRequest:(id)arg1 callback:(id)arg2;
- (void)sendFriendRequest:(id)arg1 callback:(id)arg2;

@end

