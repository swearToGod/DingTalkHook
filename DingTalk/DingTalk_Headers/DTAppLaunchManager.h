//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTLocationManagerConfigDelegate-Protocol.h"
#import "DTWebImageStrategyDelegate-Protocol.h"
#import "LWLoggerDelegate-Protocol.h"
#import "LWPLoggerDelegate-Protocol.h"
#import "WKAppMonitorDelegate-Protocol.h"

@class NSString;

@interface DTAppLaunchManager : NSObject <LWPLoggerDelegate, LWLoggerDelegate, DTLocationManagerConfigDelegate, WKAppMonitorDelegate, DTWebImageStrategyDelegate>
{
}

+ (id)shareInstance;
- (id)operatorType;
- (id)netType;
- (id)amapApiKey;
- (void)connectQQShareIfNeeded;
- (void)connectWeiboShareIfNeeded;
- (void)connectAlipayShareIfNeeded;
- (void)connectWeixinShareIfNeeded;
- (void)initWhiteListEngine;
- (void)configURLCache;
- (void)logger:(id)arg1 uploadLogs:(id)arg2;
- (id)sendBatchLogCode:(id)arg1;
- (void)configureDownload;
- (void)commitWithModule:(id)arg1 monitorPoint:(id)arg2 measureName:(id)arg3 value:(double)arg4;
- (void)logger:(id)arg1 logError:(id)arg2 errorCode:(int)arg3;
- (void)logger:(id)arg1 logWarn:(id)arg2;
- (void)logger:(id)arg1 logInfo:(id)arg2;
- (void)logger:(id)arg1 logDebug:(id)arg2;
- (void)mainViewDidAppear;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)receiveCrashNtf:(id)arg1;
- (void)addObserver;
- (void)setupLogger;
- (void)initWKAppMonitor;
- (void)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

