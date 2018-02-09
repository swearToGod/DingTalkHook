//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTDingModuleServiceProtocol-Protocol.h"

@class DTDingCreatorPresenter, NSString;

@interface DTDingServiceImpl : NSObject <DTDingModuleServiceProtocol>
{
    DTDingCreatorPresenter *_dingCreatorPresenter;
}

+ (id)dingCreatorViewControllerWithCreateType:(long long)arg1 inputParams:(id)arg2 goDingList:(_Bool)arg3 successBlock:(CDUnknownBlockType)arg4;
+ (id)generateEmptyDingCreatorInputParams;
+ (id)generateBizDingModelWithSendModel:(id)arg1 message:(id)arg2 conversation:(id)arg3 attachment:(id)arg4;
+ (id)generateEmptyBizDingSendModel;
+ (id)generateEmptyBizDingAttachmentText;
+ (id)generateBizDingAttachmentExtraWithBizDingModel:(id)arg1;
+ (id)generateEmptyBizDingLinkModel;
+ (id)generateEmptyBizDingModel;
@property(retain, nonatomic) DTDingCreatorPresenter *dingCreatorPresenter; // @synthesize dingCreatorPresenter=_dingCreatorPresenter;
- (void).cxx_destruct;
- (id)buildAttachmentWithCSpaceDentry:(id)arg1;
- (_Bool)handleMailCalendarLocalPushNotification:(id)arg1;
- (void)sendDingWithSendModel:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)generateSelectedUidsWithMessage:(id)arg1 conversation:(id)arg2;
- (void)createDingWithMessage:(id)arg1 conversation:(id)arg2 remindType:(long long)arg3 receiverUids:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)createDingWithMessage:(id)arg1 conversation:(id)arg2 remindType:(long long)arg3 receiverUids:(id)arg4;
- (void)statisticUnreadMessage2DingEventsWithActionButtonIndex:(long long)arg1 source:(long long)arg2;
- (void)showUnreadMessage2DingActionSheetWithSource:(long long)arg1 title:(id)arg2 message:(id)arg3 conversation:(id)arg4 receiverUid:(long long)arg5;
- (id)createSchedulePageWithInputParam:(id)arg1;
- (id)newCalendarInputParam;
- (_Bool)showRedDotInDingTab;
- (_Bool)grayFunctionInConversation;
- (_Bool)shouldReplaceDingAsNotice;
- (_Bool)handleMailCalendarLoalPushWithNotification:(id)arg1;
- (_Bool)handleLocalPushWithNotification:(id)arg1;
- (_Bool)canHandleLocalNotification:(id)arg1;
- (id)openCreateDingPageWithInputParam:(id)arg1;
- (id)createCommentViewControllerWithDingModel:(id)arg1 isFromFavoriteList:(_Bool)arg2 readIfNeeded:(_Bool)arg3;
- (void)loadDingWithId:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)audioAccessRuleWithDing:(id)arg1;
- (id)dingExtensionAppendIgnore:(id)arg1;
- (id)newDingLinkModel;
- (id)newDingAttachmentExtra;
- (id)newAttachmentAudio;
- (id)newDingInputParam;
- (void)sendDingWithDing:(id)arg1 sendModel:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
