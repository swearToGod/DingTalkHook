//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertView.h>

@interface UIAlertView (Blocks)
+ (id)showWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 tapBlock:(CDUnknownBlockType)arg6 shouldEnableFirstOtherButtonBlock:(CDUnknownBlockType)arg7 actionBeforeShow:(CDUnknownBlockType)arg8;
+ (id)showWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 tapBlock:(CDUnknownBlockType)arg5;
+ (id)showWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 tapBlock:(CDUnknownBlockType)arg6;
- (_Bool)alertViewShouldEnableFirstOtherButton:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)didPresentAlertView:(id)arg1;
- (void)willPresentAlertView:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType shouldEnableFirstOtherButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType didPresentBlock;
@property(copy, nonatomic) CDUnknownBlockType willPresentBlock;
@property(copy, nonatomic) CDUnknownBlockType didDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType willDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType tapBlock;
- (void)_checkAlertViewDelegate;
@end

