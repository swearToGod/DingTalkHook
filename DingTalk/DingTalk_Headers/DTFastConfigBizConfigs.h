//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface DTFastConfigBizConfigs : NSObject
{
    NSArray *_demotionHpms;
    NSArray *_stickHosts;
    NSArray *_wkWebViewHosts;
    NSDictionary *_cachedMicroAppBadgeInfo;
    NSDictionary *_fsCheckInLocateInfo;
}

+ (id)sharedBizConfigs;
@property(copy) NSDictionary *fsCheckInLocateInfo; // @synthesize fsCheckInLocateInfo=_fsCheckInLocateInfo;
@property(copy) NSDictionary *cachedMicroAppBadgeInfo; // @synthesize cachedMicroAppBadgeInfo=_cachedMicroAppBadgeInfo;
@property(copy) NSArray *wkWebViewHosts; // @synthesize wkWebViewHosts=_wkWebViewHosts;
@property(copy) NSArray *stickHosts; // @synthesize stickHosts=_stickHosts;
@property(copy) NSArray *demotionHpms; // @synthesize demotionHpms=_demotionHpms;
- (void).cxx_destruct;
- (void)fastConfigShutdownNotification:(id)arg1;
- (void)fastConfigUpdateNotification:(id)arg1;
- (void)postFastConfigChangedNotify:(id)arg1;
- (void)clearConfigs;
- (void)loadLocalConfigs;
- (id)fsCheckInLocateConfig;
- (id)microAppBadgeInfo;
- (id)wkWebViewIdsWithCache;
- (id)stickHostsWithCache;
- (id)demotionHpmsWithCache;
- (void)dealloc;
- (id)init;

@end

