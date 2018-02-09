//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BKPasscodeInputView.h"

#import "BKPasscodeFieldImageSource-Protocol.h"

@class NSString, UIControl, UILabel;

@interface DTLockScreenPasscodeInputView : BKPasscodeInputView <BKPasscodeFieldImageSource>
{
}

+ (void)configureErrorMessageLabel:(id)arg1;
+ (void)configureMessageLabel:(id)arg1;
+ (void)configureTitleLabel:(id)arg1;
+ (double)virtualKeyboardMarginWithWidth:(double)arg1;
- (id)passcodeField:(id)arg1 dotImageAtIndex:(long long)arg2 filled:(_Bool)arg3;
- (void)onVirtualDelPressed:(id)arg1;
- (void)onVirtualNumberPressed:(id)arg1;
- (id)numberButtonWithFrame:(struct CGRect)arg1 number:(long long)arg2;
- (void)buildVirtualKeyboard;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UILabel *errorMessageLabel; // @dynamic errorMessageLabel;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UILabel *messageLabel; // @dynamic messageLabel;
@property(retain, nonatomic) UIControl *passcodeField; // @dynamic passcodeField;
@property(readonly) Class superclass;
@property(retain, nonatomic) UILabel *titleLabel; // @dynamic titleLabel;

@end

