//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LWLogger.h"

@class NSMutableDictionary;

@interface DTPerformanceLogger : LWLogger
{
    NSMutableDictionary *_registerDic;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSMutableDictionary *registerDic; // @synthesize registerDic=_registerDic;
- (void).cxx_destruct;
- (void)logLevel:(int)arg1 type:(id)arg2 code:(int)arg3 message:(id)arg4;
- (void)addFileLogger;
- (void)addASLLogger;
- (id)traceIdLogPath;
- (id)baseLogDirectory;
- (void)registerModuleName:(id)arg1;
- (id)init;

@end

