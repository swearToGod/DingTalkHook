//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTH5RocketSessionDelegate-Protocol.h"
#import "LWRocketInterceptorDelegate-Protocol.h"

@class LWRocketInterceptor, NSString, YYThreadSafeDictionary;

@interface DTH5RocketManager : NSObject <LWRocketInterceptorDelegate, DTH5RocketSessionDelegate>
{
    YYThreadSafeDictionary *_sessionMap;
    LWRocketInterceptor *_rocketInterceptor;
}

+ (_Bool)rocketFunctionEnable;
+ (id)sharedManager;
@property(retain, nonatomic) LWRocketInterceptor *rocketInterceptor; // @synthesize rocketInterceptor=_rocketInterceptor;
@property(retain, nonatomic) YYThreadSafeDictionary *sessionMap; // @synthesize sessionMap=_sessionMap;
- (void).cxx_destruct;
- (void)rocketSessionDidFailed:(id)arg1 timeout:(_Bool)arg2 error:(id)arg3;
- (void)rocketSessionDidFinished:(id)arg1;
- (id)rocketInterceptor:(id)arg1 agentRequest:(id)arg2 response:(id)arg3;
- (_Bool)rocketInterceptor:(id)arg1 canAgentRequest:(id)arg2;
- (_Bool)rocketInterceptor:(id)arg1 shouldInteceptRequest:(id)arg2;
- (id)sessionForReuqest:(id)arg1;
- (_Bool)checkRequestPreloaded:(id)arg1;
- (_Bool)preloadReuqest:(id)arg1 forUA:(id)arg2 refreshMode:(_Bool)arg3;
- (id)sharedRocketInterceptor;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

