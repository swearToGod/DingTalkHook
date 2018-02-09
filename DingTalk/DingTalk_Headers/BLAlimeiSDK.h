//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BLAlimeiSDKConfig, BLPushNotificationProcesser, BLPushService, NSMutableDictionary;

@interface BLAlimeiSDK : NSObject
{
    NSMutableDictionary *_modules;
    BLPushService *_pushService;
    BLPushNotificationProcesser *_pushProcesser;
    BLAlimeiSDKConfig *_sdkConfig;
    _Bool _isRefreshMail;
    CDUnknownBlockType _userTrackWorker;
}

+ (_Bool)isTaskCenterBusy;
+ (void)cancelTaskByTaskIDs:(id)arg1;
+ (void)cancelTaskByTaskID:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool isRefreshMail; // @synthesize isRefreshMail=_isRefreshMail;
@property(copy, nonatomic) CDUnknownBlockType userTrackWorker; // @synthesize userTrackWorker=_userTrackWorker;
- (void).cxx_destruct;
- (void)trackData;
- (void)restoreTasksFromDisk;
- (void)cleanExpiredFiles;
- (void)lazyCheckSDK;
- (unsigned long long)sizeOfAllDatabase;
- (void)stopPush;
- (void)startPush:(id)arg1;
- (void)refreshAllModules:(id)arg1;
- (void)enterBackground;
- (void)enterForeground;
- (void)resignActive;
- (void)becomeActive;
- (_Bool)resetAndWarmUpAlimeiSDK;
- (id)pushProccessor;
- (id)alimeiSDKConfig;
- (long long)environmentType;
- (void)setEnvironmentType:(long long)arg1;
- (void)setupModules;
- (void)setupAPIClientWithAppName:(id)arg1 appKey:(id)arg2;
- (void)setupWithAppName:(id)arg1 appKey:(id)arg2 sdkConfig:(id)arg3 modules:(long long)arg4;
- (void)setupWithAppName:(id)arg1 appKey:(id)arg2 modules:(long long)arg3;
- (id)moduleWithType:(long long)arg1;
- (id)allModules;
- (void)dealloc;
- (id)init;

@end

