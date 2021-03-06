//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTRedEnvelopServiceProtocol-Protocol.h"

@class NSString;
@protocol DTRedEnvelopServiceNetworkProtocol, DTRedEnvelopServicePersistenceProtocol;

@interface DTRedEnvelopServiceIMP : NSObject <DTRedEnvelopServiceProtocol>
{
    _Bool _forceCheckRedEnvelopNotSendMsg;
    id <DTRedEnvelopServiceNetworkProtocol> _networkIMP;
    id <DTRedEnvelopServicePersistenceProtocol> _persistenceIMP;
    NSString *_bindAlipayAccount;
}

@property(nonatomic) _Bool forceCheckRedEnvelopNotSendMsg; // @synthesize forceCheckRedEnvelopNotSendMsg=_forceCheckRedEnvelopNotSendMsg;
@property(copy, nonatomic) NSString *bindAlipayAccount; // @synthesize bindAlipayAccount=_bindAlipayAccount;
@property(retain, nonatomic) id <DTRedEnvelopServicePersistenceProtocol> persistenceIMP; // @synthesize persistenceIMP=_persistenceIMP;
@property(retain, nonatomic) id <DTRedEnvelopServiceNetworkProtocol> networkIMP; // @synthesize networkIMP=_networkIMP;
- (void).cxx_destruct;
- (void)checkRedEnvelopNotSendMsg;
- (void)setNeedForceCheckRedEnvelopNotSendMsg;
- (void)checkArguments:(id)arg1 size:(long long)arg2 type:(long long)arg3 pickPlanTime:(long long)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)onAccountLoggedOut:(id)arg1;
- (void)onAccountLoggedUp:(id)arg1;
- (void)onAccountLoggedIn:(id)arg1;
- (unsigned long long)unsendRedEnvelopRecordCount;
- (void)updateRedEnvelopRecordConfirmedBefore:(long long)arg1;
- (id)redEnvelopRecordWithBusinessId:(id)arg1;
- (_Bool)saveRedEnvelopRecord:(id)arg1;
- (_Bool)verifierAuthResult:(id)arg1 openId:(id *)arg2 authCode:(id *)arg3;
- (_Bool)verifierAliPayResult:(id)arg1 redEnvelopRecord:(id *)arg2;
- (void)alipayAuthSign:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)alipaySign:(id)arg1 signType:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)queryAcquireResult:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)getBindAlipaySuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)unbindAlipaySuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)bindAlipay:(id)arg1 authCode:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)subscribePlan:(long long)arg1 clusterId:(id)arg2 open:(_Bool)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)calGoodTimeSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)fetchBalanceSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)queryRedEnvelopCluster:(long long)arg1 clusterId:(id)arg2 startTime:(long long)arg3 size:(int)arg4 flowId:(long long)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)queryReceivedRedEnvelops:(int)arg1 start:(int)arg2 size:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)querySentRedEnvelopClusters:(int)arg1 start:(int)arg2 size:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)leaveMessageToRedEnvelopFlow:(long long)arg1 clusterId:(id)arg2 flowId:(int)arg3 leaveMessage:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)pickRedEnvelopClusterV2:(long long)arg1 clusterId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)pickRedEnvelopCluster:(long long)arg1 clusterId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)checkRedEnvelopClusterPickingStatus:(long long)arg1 clusterId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)generateRedEnvelopCluster:(long long)arg1 clusterId:(id)arg2 amount:(id)arg3 size:(int)arg4 receivers:(id)arg5 type:(long long)arg6 cid:(id)arg7 congratulations:(id)arg8 oid:(long long)arg9 redEnvelopeSubscribeLifecycleModel:(id)arg10 pickPlanTime:(long long)arg11 ext:(id)arg12 senderPayType:(long long)arg13 successBlock:(CDUnknownBlockType)arg14 failureBlock:(CDUnknownBlockType)arg15;
- (id)signStringWithSender:(long long)arg1 clusterId:(id)arg2 amount:(id)arg3 size:(int)arg4 receivers:(id)arg5 type:(long long)arg6 cid:(id)arg7 oid:(long long)arg8 pickPlanTime:(long long)arg9 senderPayType:(long long)arg10;
- (id)getBindAlipayAccount;
- (id)generateClusterId;
- (void)sendInitAlipay;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

