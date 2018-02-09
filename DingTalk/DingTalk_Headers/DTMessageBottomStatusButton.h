//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class DTMessageBottomStatusViewItem;
@protocol DTMessageBottomStatusDelegate;

@interface DTMessageBottomStatusButton : UIButton
{
    double _maxWidth;
    id <DTMessageBottomStatusDelegate> _delegate;
    UIButton *_unreadAlertButton;
    DTMessageBottomStatusViewItem *_statusItem;
}

@property(retain, nonatomic) DTMessageBottomStatusViewItem *statusItem; // @synthesize statusItem=_statusItem;
@property(retain, nonatomic) UIButton *unreadAlertButton; // @synthesize unreadAlertButton=_unreadAlertButton;
@property(nonatomic) __weak id <DTMessageBottomStatusDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didClick:(id)arg1 event:(id)arg2;
- (void)unreadAlertButtonPressed;
- (id)formatTimeLeft:(long long)arg1;
- (void)updateUIWithItem:(id)arg1;
- (void)setUnreadAlertButtonDelayShow:(id)arg1;
- (void)setStatusAlertHidden:(_Bool)arg1 withTag:(unsigned long long)arg2;
- (void)setStatusAlertHidden:(_Bool)arg1;
- (void)createUnreadAlertButtonWithItem:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)configWithItem:(id)arg1;
- (void)updateCountDownNotification:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)willMoveToSuperview:(id)arg1;

@end

