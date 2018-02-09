//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTPushHandlerProtocol-Protocol.h"

@class NSString;

@interface DTPushDingHandler : NSObject <DTPushHandlerProtocol>
{
}

- (void)unReadDingAndNewCommentChangedWithInfo:(id)arg1;
- (void)updateNoticeModel:(id)arg1 dingModel:(id)arg2 type:(long long)arg3;
- (void)postNoticeNotificationWithNoticeType:(long long)arg1 bizDingModel:(id)arg2 summary:(id)arg3 sourceType:(long long)arg4;
- (void)postNoticeNotificationWithNoticeType:(long long)arg1 bizDingModel:(id)arg2 summary:(id)arg3;
- (void)postNoticeNotificationWithNoticeType:(long long)arg1 bizDingModel:(id)arg2;
- (void)showNoticeAlertWhenTaskFinishStateChangedWithDingModel:(id)arg1 state:(long long)arg2;
- (_Bool)handleRemindLaterNotice:(id)arg1;
- (_Bool)handleTaskFinishedBySelf:(id)arg1;
- (_Bool)handleTaskClosedOrReopened:(id)arg1;
- (_Bool)handleExecutorFinishCountChanged:(id)arg1;
- (void)handleTaskCloseStatusChange:(id)arg1;
- (void)handleNextRemindTimeDidUpdate:(id)arg1;
- (void)handleDingMinutesDidChange:(id)arg1;
- (void)handleDingModifyNotice:(id)arg1;
- (void)handleDingAlertNotice:(id)arg1;
- (void)handleInvitationCancel:(id)arg1;
- (void)handleInvitationDidChange:(id)arg1;
- (void)handleInvitationStatusDidChange:(id)arg1;
- (void)handleDeadlineChange:(id)arg1;
- (_Bool)handleDingCommentDeleted:(id)arg1;
- (void)handleReceiversChange:(id)arg1;
- (void)handleFocusStatusChange:(id)arg1;
- (void)handleAdvanceNotice:(id)arg1;
- (void)handleDeadlineFinishStatusChange:(id)arg1;
- (void)handleGuideLayerModel:(id)arg1;
- (void)configRedDotDing:(id)arg1 andPushComment:(id)arg2;
- (void)handleCommentNofityStatusChanged:(id)arg1;
- (void)handleDingConfirmStatusChange:(id)arg1;
- (void)handelDingNewSent:(id)arg1;
- (void)handleDingSendStatus:(id)arg1;
- (void)handelUserDingStatus:(id)arg1;
- (_Bool)handelDingQuto:(id)arg1;
- (_Bool)handleDingCommentCreated:(id)arg1;
- (_Bool)handleFinishDing:(id)arg1;
- (_Bool)handleSelfConfirmDing:(id)arg1;
- (_Bool)handleReceiverConfirmDing:(id)arg1;
- (_Bool)handleCreateDing:(id)arg1 againDing:(_Bool)arg2;
- (void)pushCaught:(id)arg1 error:(id)arg2;
- (id)convertData:(id)arg1 toObjectWithClazz:(Class)arg2;
- (void)pushReceived:(id)arg1 value:(id)arg2;
- (Class)returnedValueClass;
- (id)topicName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

