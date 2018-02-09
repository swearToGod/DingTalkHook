//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface DTDingHotNumbers : NSObject
{
    unsigned long long _receivedUnconfirmedDingCount;
    unsigned long long _sentUnconfirmedDingCount;
    unsigned long long _hiddenUnconfirmedDingCount;
    unsigned long long _allNewRepliedDingCount;
    unsigned long long _receivedNewRepliedDingCount;
    unsigned long long _sentNewRepliedDingCount;
    unsigned long long _hiddenNewRepliedDingCount;
    unsigned long long _selfSendHasConfirmCommentCount;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)redDotWithDing:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) unsigned long long selfSendHasConfirmCommentCount; // @synthesize selfSendHasConfirmCommentCount=_selfSendHasConfirmCommentCount;
@property(nonatomic) unsigned long long hiddenNewRepliedDingCount; // @synthesize hiddenNewRepliedDingCount=_hiddenNewRepliedDingCount;
@property(nonatomic) unsigned long long sentNewRepliedDingCount; // @synthesize sentNewRepliedDingCount=_sentNewRepliedDingCount;
@property(nonatomic) unsigned long long receivedNewRepliedDingCount; // @synthesize receivedNewRepliedDingCount=_receivedNewRepliedDingCount;
@property(nonatomic) unsigned long long allNewRepliedDingCount; // @synthesize allNewRepliedDingCount=_allNewRepliedDingCount;
@property(nonatomic) unsigned long long hiddenUnconfirmedDingCount; // @synthesize hiddenUnconfirmedDingCount=_hiddenUnconfirmedDingCount;
@property(nonatomic) unsigned long long sentUnconfirmedDingCount; // @synthesize sentUnconfirmedDingCount=_sentUnconfirmedDingCount;
@property(nonatomic) unsigned long long receivedUnconfirmedDingCount; // @synthesize receivedUnconfirmedDingCount=_receivedUnconfirmedDingCount;
- (void).cxx_destruct;
- (void)innerRefreshHotNumbers;
- (void)refreshHotNumbers;
- (void)dealloc;
- (id)init;

@end

