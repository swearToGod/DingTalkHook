//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class YYThreadSafeDictionary;
@protocol DTDingCommentServiceProtocol, DTDingServiceProtocol;

@interface DTServiceKit : NSObject
{
    _Bool _isHandleDingFinished;
    _Bool _handleNormalDingFinished;
    _Bool _handleDeleteDingFinished;
    id <DTDingServiceProtocol> _dingService;
    id <DTDingCommentServiceProtocol> _dingCommentService;
    long long _dingServiceRequestCount;
    long long _dingServiceRequestDeleteCount;
    long long _normalDingCursor;
    long long _deleteDingCursor;
    YYThreadSafeDictionary *_dingConferenceContentDictionary;
    YYThreadSafeDictionary *_dingSourceCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) YYThreadSafeDictionary *dingSourceCache; // @synthesize dingSourceCache=_dingSourceCache;
@property(retain, nonatomic) YYThreadSafeDictionary *dingConferenceContentDictionary; // @synthesize dingConferenceContentDictionary=_dingConferenceContentDictionary;
@property(nonatomic) _Bool handleDeleteDingFinished; // @synthesize handleDeleteDingFinished=_handleDeleteDingFinished;
@property(nonatomic) _Bool handleNormalDingFinished; // @synthesize handleNormalDingFinished=_handleNormalDingFinished;
@property(nonatomic) long long deleteDingCursor; // @synthesize deleteDingCursor=_deleteDingCursor;
@property(nonatomic) long long normalDingCursor; // @synthesize normalDingCursor=_normalDingCursor;
@property(nonatomic) long long dingServiceRequestDeleteCount; // @synthesize dingServiceRequestDeleteCount=_dingServiceRequestDeleteCount;
@property(nonatomic) long long dingServiceRequestCount; // @synthesize dingServiceRequestCount=_dingServiceRequestCount;
@property(readonly, nonatomic) id <DTDingCommentServiceProtocol> dingCommentService; // @synthesize dingCommentService=_dingCommentService;
@property(readonly, nonatomic) id <DTDingServiceProtocol> dingService; // @synthesize dingService=_dingService;
@property(nonatomic) _Bool isHandleDingFinished; // @synthesize isHandleDingFinished=_isHandleDingFinished;
- (void).cxx_destruct;
- (void)loadDingReceiverConfirmStatusInfo;
- (void)setDingSource:(id)arg1 forConversationId:(id)arg2;
- (id)dingSourceForConversationId:(id)arg1;
- (void)setDingContentCacheForDingId:(long long)arg1 content:(id)arg2;
- (id)dingContentCacheForDingId:(long long)arg1;
- (void)asyncSaveDingSenderContacts;
- (void)checkAndLoadDeleteDing;
- (void)checkAndLoadNormalDing;
- (void)postHandleDingFinishedNotification;
- (void)checkHandleDingFinishedAndPostNotification;
- (void)checkAndLoadDing;
- (void)onAccountLoggedOut:(id)arg1;
- (void)onAccountLoggedIn:(id)arg1;
- (void)clear;
- (void)asyncHandleDingInLocalDB;
- (void)handleDingInLocalDB;
- (void)setup;
- (void)dealloc;
- (id)init;

@end

