//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface DTATBeaconIService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)uploadLocByBeacon:(id)arg1 callback:(id)arg2;
- (void)listMonitorBeacon:(id)arg1;
- (void)unbindBeacon:(id)arg1 uuid:(id)arg2 minor:(id)arg3 major:(id)arg4 callback:(id)arg5;
- (void)modifyBeaconName:(id)arg1 callback:(id)arg2;
- (void)bindBeacons:(id)arg1 callback:(id)arg2;
- (void)listBeaconByCorpId:(id)arg1 callback:(id)arg2;

@end

