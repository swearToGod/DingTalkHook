//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface DTIDLUserDeviceService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
+ (id)_serviceKey__;
- (void)setBadge:(id)arg1 callback:(id)arg2;
- (void)unregistDevice:(id)arg1 callback:(id)arg2;
- (void)updateDeviceApnStatus:(id)arg1 deviceApnStatus:(id)arg2 callback:(id)arg3;
- (void)registDeviceTokenWithPushKit:(id)arg1 appVersion:(id)arg2 pushKitDeviceToken:(id)arg3 callback:(id)arg4;
- (void)registDevice:(id)arg1 appVersion:(id)arg2 callback:(id)arg3;

@end

