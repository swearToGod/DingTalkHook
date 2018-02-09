//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTMessageBubbleView, UIGestureRecognizer;

@protocol DTMessageBubbleViewDelegate <NSObject>

@optional
- (void)messageCellDidEndHighlightAnimation;
- (void)messageCellDidStartHighlightAnimation;
- (void)messageMailForward;
- (void)messageMailReplyAll;
- (void)messageMailReply;
- (void)messageQuote;
- (void)messageReactionInviteEditor:(DTMessageBubbleView *)arg1;
- (void)messageReactionOnlineEdit:(DTMessageBubbleView *)arg1;
- (void)messageReactionComment:(DTMessageBubbleView *)arg1;
- (void)messageReactionPraise:(DTMessageBubbleView *)arg1;
- (void)showLongPressNoActionAllowTips;
- (void)safeIconAlertBringToFront;
- (void)messageBubbleViewLongGestureBecomeNextResponder:(DTMessageBubbleView *)arg1;
- (void)confirmReceived:(DTMessageBubbleView *)arg1;
- (void)updateDingLayoutIfDismissDing:(DTMessageBubbleView *)arg1;
- (void)applyDingLayout;
- (void)messageBubbleView:(DTMessageBubbleView *)arg1 triggerMenuActionWithType:(long long)arg2;
- (void)messageBubbleView:(DTMessageBubbleView *)arg1 didDoubleTappedWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)messageBubbleView:(DTMessageBubbleView *)arg1 didTappedWithGestureRecognizer:(UIGestureRecognizer *)arg2;
@end

