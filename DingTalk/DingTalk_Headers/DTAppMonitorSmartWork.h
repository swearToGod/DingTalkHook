//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTAppMonitorSmartWork : NSObject
{
}

+ (void)commitSWAppPreloadKeepAliveRate:(id)arg1 type:(id)arg2;
+ (void)commitSWAppLoadComplete:(long long)arg1 appId:(id)arg2 time:(double)arg3 preloadKeepEnable:(_Bool)arg4 hitPreload:(_Bool)arg5 hitKeepAlive:(_Bool)arg6;
+ (void)countFastCheckInStartTips:(long long)arg1;
+ (id)wifiEnableDimensionValue;
+ (id)distanceDimensionValue:(double)arg1;
+ (void)commitFastCheckInServerError:(long long)arg1 planId:(id)arg2 time:(double)arg3 checkTimes:(long long)arg4 serverCode:(id)arg5;
+ (void)commitFastCheckInServerError:(long long)arg1 time:(double)arg2 checkTimes:(long long)arg3 serverCode:(id)arg4;
+ (void)commitFastCheckInExpired:(long long)arg1 planId:(id)arg2 checkTimes:(long long)arg3 miniDistance:(double)arg4 hasMatched:(_Bool)arg5 hasFuzzyMatched:(_Bool)arg6;
+ (void)commitFastCheckInExpired:(long long)arg1 checkTimes:(long long)arg2 miniDistance:(double)arg3 hasMatched:(_Bool)arg4 hasFuzzyMatched:(_Bool)arg5;
+ (void)commitFastCheckInLocationMissMatch:(long long)arg1 planId:(id)arg2 errorCode:(id)arg3 distance:(double)arg4 fuzzyMatch:(_Bool)arg5 bssId:(id)arg6 latitude:(double)arg7 longitude:(double)arg8 accuracy:(double)arg9;
+ (void)commitFastCheckInLocationMissMatch:(long long)arg1 errorCode:(id)arg2 distance:(double)arg3 fuzzyMatch:(_Bool)arg4;
+ (void)commitFastCheckInResult:(_Bool)arg1 planId:(id)arg2 time:(double)arg3 errorCode:(id)arg4 orgId:(long long)arg5;
+ (void)commitFastCheckInResult:(_Bool)arg1 time:(double)arg2 errorCode:(id)arg3 orgId:(long long)arg4;
+ (void)commitBeaconCheckInResult:(_Bool)arg1 time:(double)arg2 errorCode:(id)arg3 orgId:(long long)arg4;
+ (void)commitBeaconUnsatisfied:(long long)arg1;
+ (void)commitBeaconQueryListFail:(id)arg1 errorCode:(id)arg2 errorMsg:(id)arg3;
+ (void)commitBeaconQueryListSuccess:(id)arg1;
+ (void)commitBeaconBindFail:(id)arg1 errorCode:(id)arg2 errorMsg:(id)arg3;
+ (void)commitBeaconBindSuccess:(id)arg1;
+ (void)registerAppPreLoadKeepAliveMonitorStat;
+ (void)registerAppLoadMonitorStat;
+ (void)registerFastCheckInMonitorStat;
+ (void)registerBeaconCheckInMonitorStat;
+ (void)registerSmartWorkMonitorStat;

@end

