//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTAppLaunchDelegate-Protocol.h"

@class NSString, YYThreadSafeArray;

@interface DTDingWordManager : NSObject <DTAppLaunchDelegate>
{
    _Bool _needHandlePasteboard;
    YYThreadSafeArray *_noNeedRPCArray;
}

+ (id)sharedInstance;
@property(copy, nonatomic) YYThreadSafeArray *noNeedRPCArray; // @synthesize noNeedRPCArray=_noNeedRPCArray;
@property(nonatomic) _Bool needHandlePasteboard; // @synthesize needHandlePasteboard=_needHandlePasteboard;
- (void).cxx_destruct;
- (void)getTaoPasswordModel:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)getGroupInviteWithQueryModel:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)applicationDidEnterMainPage;
- (void)getTaoPasswordWithPasteString:(id)arg1;
- (long long)currentTime;
- (_Bool)isDingWord:(id)arg1;
- (void)becomeActive;
- (void)handleDingWordQuery:(id)arg1;
- (void)openURLWithType:(long long)arg1;
- (void)showDingWordPopupViewInView:(id)arg1 clickBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)showGroupInviteDingWordPopupViewInView:(id)arg1 queryModel:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

