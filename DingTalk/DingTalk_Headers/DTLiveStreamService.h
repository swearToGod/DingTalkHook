//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface DTLiveStreamService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)listSharedCids:(id)arg1 callback:(id)arg2;
- (void)shareTo:(id)arg1 callback:(id)arg2;
- (void)getEncryCode:(id)arg1 sessionID:(id)arg2 appKey:(id)arg3 callback:(id)arg4;
- (void)getLiveDetail:(id)arg1 uuid:(id)arg2 callback:(id)arg3;
- (void)stopLive:(id)arg1 callback:(id)arg2;
- (void)startLive:(id)arg1 callback:(id)arg2;
- (void)checkLivePermission:(id)arg1 callback:(id)arg2;

@end

