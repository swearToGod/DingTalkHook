//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTQRCodeCardController.h"

@class DTBizConversation;

@interface DTConversationGroupQRController : DTQRCodeCardController
{
    DTBizConversation *_conversation;
}

@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (id)sharePanelTitle;
- (void)showBottomActionButtons;
- (void)hideBottomActionButtons;
- (void)handleResponseQRCode:(id)arg1;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)viewDidLoad;
- (id)initWithConversation:(id)arg1;

@end

