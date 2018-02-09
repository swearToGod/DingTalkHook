//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AMapCacheFileManager, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AMapAnalyticsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_logDispatchQueue;
    NSObject<OS_dispatch_queue> *_uploadDispatchQueue;
    NSMutableDictionary *_componentMapping;
    NSMutableDictionary *_regularExpressionMapping;
    NSMutableDictionary *_logServerStateException;
    NSMutableDictionary *_logServerStateCommon;
    AMapCacheFileManager *_fileManager;
    _Bool _crashReportEnabled;
    _Bool _logEnabled;
}

+ (id)errorWithURLError:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic, getter=isLogEnabled) _Bool logEnabled; // @synthesize logEnabled=_logEnabled;
@property(nonatomic, getter=isCrashReportEnabled) _Bool crashReportEnabled; // @synthesize crashReportEnabled=_crashReportEnabled;
- (void).cxx_destruct;
- (void)clearLogWithType:(long long)arg1;
- (void)clearAllLogs;
- (void)logsWithType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isUploadSucceededWithResponseData:(id)arg1;
- (id)crashComponentWithCrashInfo:(id)arg1;
- (id)nameWithLogType:(long long)arg1;
- (_Bool)isLogServerEnableWithComponent:(id)arg1 type:(long long)arg2;
- (void)saveEventStateWithFlag:(_Bool)arg1 component:(id)arg2;
- (void)saveExceptionStateWithFlag:(_Bool)arg1 component:(id)arg2;
- (void)saveLogServerStateWithResponseData:(id)arg1 component:(id)arg2;
- (void)requestManifestWithComponent:(id)arg1;
- (void)registerProductCrashInfoFilterWithComponent:(id)arg1 forKey:(id)arg2;
- (id)uploadDataWithType:(long long)arg1 logArray:(id)arg2;
- (void)uploadLogWithType:(long long)arg1;
- (void)logCrash:(id)arg1 crashInfo:(id)arg2 component:(id)arg3;
- (void)logRESTError:(id)arg1 forURL:(id)arg2 component:(id)arg3;
- (void)logURLError:(id)arg1 forURL:(id)arg2 component:(id)arg3;
- (void)logError:(id)arg1 errorInfo:(id)arg2 component:(id)arg3;
- (void)logEvent:(id)arg1 params:(id)arg2 component:(id)arg3;
- (void)registerProductWithComponentWithoutManifestRequest:(id)arg1;
- (void)registerProductWithComponent:(id)arg1;
- (id)init;

@end

