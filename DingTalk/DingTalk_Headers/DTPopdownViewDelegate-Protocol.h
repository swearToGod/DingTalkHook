//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTPopdownView;

@protocol DTPopdownViewDelegate <NSObject>

@optional
- (void)popdownView:(DTPopdownView *)arg1 viewDidHide:(_Bool)arg2;
- (void)popdownView:(DTPopdownView *)arg1 viewWillHide:(_Bool)arg2;
- (void)popdownView:(DTPopdownView *)arg1 viewDidShow:(_Bool)arg2;
- (void)popdownView:(DTPopdownView *)arg1 viewWillShow:(_Bool)arg2;
@end

