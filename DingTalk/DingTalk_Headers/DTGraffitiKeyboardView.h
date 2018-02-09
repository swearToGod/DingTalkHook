//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class DTGraffitiKeyboardToolBar, NSString, UITextView;
@protocol DTGraffitiKeyboardViewDelegate;

@interface DTGraffitiKeyboardView : UIView <UITextViewDelegate>
{
    id <DTGraffitiKeyboardViewDelegate> _delegate;
    UITextView *_textView;
    DTGraffitiKeyboardToolBar *_toolBar;
}

@property(retain, nonatomic) DTGraffitiKeyboardToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <DTGraffitiKeyboardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setTextColor:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)updateSubViewFrame:(struct CGRect)arg1;
- (void)handleKeyboardNotification:(id)arg1;
- (void)didReceiveKeyboardDidHideNotification:(id)arg1;
- (void)didReceiveKeyboardDidChangeFrameNotification:(id)arg1;
- (void)didReceiveKeyboardWillChangeFrameNotification:(id)arg1;
- (void)didReceiveKeyboardDidShowNotification:(id)arg1;
- (void)registerForNotifications;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

