//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTMessageBaseHandler.h"

@class DTBizMessage, DTDingCreatorInputParams, DTDingCreatorPresenter;

@interface DTMessageDingHandler : DTMessageBaseHandler
{
    _Bool _isSendingFocusDing;
    DTDingCreatorPresenter *_dingCreatorPresenter;
    DTDingCreatorInputParams *_dingCreatorInputParams;
    DTBizMessage *_remindedMessage;
}

+ (void)focusDingWithMessage:(id)arg1 inConversation:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)showPinFirstGuideWithConfirmBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak DTBizMessage *remindedMessage; // @synthesize remindedMessage=_remindedMessage;
@property(nonatomic) _Bool isSendingFocusDing; // @synthesize isSendingFocusDing=_isSendingFocusDing;
@property(retain, nonatomic) DTDingCreatorInputParams *dingCreatorInputParams; // @synthesize dingCreatorInputParams=_dingCreatorInputParams;
@property(retain, nonatomic) DTDingCreatorPresenter *dingCreatorPresenter; // @synthesize dingCreatorPresenter=_dingCreatorPresenter;
- (void).cxx_destruct;
- (void)jumpToDingDetailWithMessage:(id)arg1;
- (void)_sendFocusDing:(id)arg1 inConversation:(id)arg2;
- (void)sendFocusDing:(id)arg1 inConversation:(id)arg2;
- (id)createScheduleModuleWithDate:(id)arg1 message:(id)arg2 conversationID:(id)arg3;
- (void)showRequestFailedAlertWithTitle:(id)arg1;
- (_Bool)showNetworkUnreachableAlert;
- (void)showScheduleRemindDatePickerViewWithSelectedBlock:(CDUnknownBlockType)arg1;
- (void)createRemindWithDate:(id)arg1 message:(id)arg2;
- (void)modifyRemindDateWithDate:(id)arg1 message:(id)arg2;
- (void)closeRemindWithMessage:(id)arg1;
- (void)showModifyRemindDateActionSheetWithMessage:(id)arg1;
- (id)actionSheetTitleWithMessage:(id)arg1;
- (void)sendScheduleWithMessage:(id)arg1 conversation:(id)arg2;

@end

