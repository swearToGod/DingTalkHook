//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface UIViewController (DTKeyboardLayout)
- (void)dt_keyboardFrameChanges:(struct CGRect)arg1 duration:(double)arg2;
- (void)dt_keyboardDidShowOrHide;
- (void)dt_keyboardShowOrHideAnimateTransition:(struct CGRect)arg1 duration:(double)arg2 isShowing:(_Bool)arg3;
- (void)dt_keyboardWillShowOrHide:(struct CGRect)arg1 duration:(double)arg2 isShowing:(_Bool)arg3;
- (void)setDt_keyboardLayoutGuideBottomConstraint:(id)arg1;
- (id)dt_keyboardLayoutGuideBottomConstraint;
- (void)setDt_keyboardVisible:(_Bool)arg1;
@property(readonly, nonatomic) _Bool dt_keyboardVisible;
- (void)setDt_keyboardLayoutGuideTop:(double)arg1;
@property(readonly, nonatomic) double dt_keyboardLayoutGuideTop;
- (void)setDt_keyboardLayoutGuide:(id)arg1;
@property(readonly, nonatomic) UIView *dt_keyboardLayoutGuide;
- (void)dt_addKeyboardLayoutGuideIfNeeded;
- (void)dt_updateKeyboardLayoutGuideConstraintWithKeyboardRect:(struct CGRect)arg1;
- (void)dt_setupKeyboardLayoutGuideIfNeeded;
- (void)dt_removeKeyboardObserver;
- (void)dt_addKeyboardObserver;
@end

