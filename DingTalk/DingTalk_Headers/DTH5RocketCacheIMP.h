//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTH5RocketCacheProtocol-Protocol.h"

@class NSString, TMCache;
@protocol DTHybridServiceProtocol;

@interface DTH5RocketCacheIMP : NSObject <DTH5RocketCacheProtocol>
{
    TMCache *_tmCache;
    id <DTHybridServiceProtocol> _hybridService;
}

@property(retain, nonatomic) id <DTHybridServiceProtocol> hybridService; // @synthesize hybridService=_hybridService;
@property(retain, nonatomic) TMCache *tmCache; // @synthesize tmCache=_tmCache;
- (void).cxx_destruct;
- (id)mainOrgCorpId;
- (void)handleSuccessResponse:(id)arg1 request:(id)arg2 callbakBlock:(CDUnknownBlockType)arg3;
- (void)queryRemoteData:(id)arg1 succBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)checkCacheWithRemote:(id)arg1 reqeust:(id)arg2;
- (void)checkCacheModel:(id)arg1 request:(id)arg2 code:(long long *)arg3 data:(id *)arg4;
- (void)loadValidCacheData:(id)arg1 succBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

