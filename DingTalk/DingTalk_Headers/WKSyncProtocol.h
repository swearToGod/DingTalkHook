//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, OpenGCDQueue;

@interface WKSyncProtocol : NSObject
{
    NSMutableDictionary *_syncClassModelDic;
    NSMutableDictionary *_syncHandlerDic;
    NSMutableArray *_syncHandlerItems;
    NSMutableArray *_internalSyncNoticeTopic;
    NSMutableDictionary *_internalSyncNoticeDic;
    int lock;
    _Bool _isSyncing;
    NSString *_topicName;
    OpenGCDQueue *_protocolProcessQueue;
}

+ (_Bool)isReliablePackge:(id)arg1;
@property(nonatomic) _Bool isSyncing; // @synthesize isSyncing=_isSyncing;
@property(retain, nonatomic) OpenGCDQueue *protocolProcessQueue; // @synthesize protocolProcessQueue=_protocolProcessQueue;
@property(copy, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
- (void).cxx_destruct;
- (void)alarmConverException:(id)arg1 totalCount:(long long)arg2;
- (void)exceptionCheck:(id)arg1 persistence:(id)arg2;
- (void)recordSyncPackage:(id)arg1;
- (id)syncInfoDescription:(id)arg1;
- (void)alarmToolong2:(id)arg1;
- (id)buildLatestSyncInfo:(id)arg1;
- (void)_syncData:(id)arg1 persistence:(id)arg2 msgAckBlock:(CDUnknownBlockType)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (_Bool)isSyncPackageValid:(id)arg1 syncInfo:(id)arg2;
- (void)wk_syncData:(id)arg1 persistence:(id)arg2 msgAckBlock:(CDUnknownBlockType)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (void)getStateWithSyncInfo:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)getDiffWithSyncInfo:(id)arg1 successBlock:(CDUnknownBlockType)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)manualSyncWithSyncInfo:(id)arg1 persistence:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)ackDiff:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (id)parseSyncData2Array:(id)arg1;
- (double)timeoutForTypes:(id)arg1;
- (id)errorWithCode:(long long)arg1 msg:(id)arg2;
- (void)getAllBizData:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_dispatch_async:(CDUnknownBlockType)arg1;
- (void)dispatchData:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (id)syncHandlerKey:(id)arg1;
- (id)filterSyncHandlerWithTypesArray:(id)arg1;
- (void)dispatchData:(id)arg1 toSyncHandler:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)wk_registerSyncTypes:(id)arg1 modelClasses:(id)arg2 virtualTopic:(id)arg3 delegate:(id)arg4;
- (void)wk_unregisterSyncHandler:(id)arg1 virtualTopic:(id)arg2;
- (void)wk_unregisterSyncTypes:(id)arg1 modelClasses:(id)arg2 virtualTopic:(id)arg3 delegate:(id)arg4;
- (void)wk_unregisterSyncType:(id)arg1 modelClass:(Class)arg2 virtualTopic:(id)arg3 delegate:(id)arg4;
- (void)wk_registerSyncType:(id)arg1 modelClass:(Class)arg2 virtualTopic:(id)arg3 delegate:(id)arg4;
- (void)wk_unregisterSyncNoticeHandler:(id)arg1 virtualTopic:(id)arg2;
- (void)wk_registerSyncNoticeHandler:(id)arg1 virtualTopic:(id)arg2;
- (void)wk_registerSyncHandler:(id)arg1 virtualTopic:(id)arg2;
- (id)_findHandlerWithTypes:(id)arg1 modelClasses:(id)arg2 delegate:(id)arg3;
- (_Bool)isValidClasses:(id)arg1;
- (void)clearSyncHandler;
- (void)dealloc;
- (void)configInternalSyncNoticeTopic;
- (void)setProcessQueue:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1;

@end

