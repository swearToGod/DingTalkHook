//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface DTUnifyStatistics : NSObject
{
    struct _opaque_pthread_mutex_t _mutex;
    NSMutableDictionary *_appMonitorRegMap;
}

+ (id)appStateStr;
+ (id)defaultUnifyStatistics;
@property(retain, nonatomic) NSMutableDictionary *appMonitorRegMap; // @synthesize appMonitorRegMap=_appMonitorRegMap;
- (void).cxx_destruct;
- (void)queueUnifyLog:(id)arg1 async:(_Bool)arg2;
- (void)commitLog:(id)arg1;
- (void)commitWithProduct:(id)arg1 biz:(id)arg2 value:(double)arg3 source:(long long)arg4;
- (void)commitSuccess:(id)arg1 biz:(id)arg2 subtype:(id)arg3 rt:(double)arg4 size:(long long)arg5;
- (void)commitFailure:(id)arg1 biz:(id)arg2 subtype:(id)arg3 rt:(double)arg4 size:(long long)arg5 statusCode:(id)arg6 errorCode:(id)arg7 reason:(id)arg8;
- (void)dealloc;
- (id)init;

@end

