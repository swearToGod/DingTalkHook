//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTNoCaptchaModel, DTSlideUnlockViewController, NSString;

@protocol DTSlideUnlockDelegate <NSObject>
- (void)slideUnlockController:(DTSlideUnlockViewController *)arg1 didAuthFailure:(NSString *)arg2;
- (void)slideUnlockController:(DTSlideUnlockViewController *)arg1 didAuthSucceed:(DTNoCaptchaModel *)arg2;
@end

