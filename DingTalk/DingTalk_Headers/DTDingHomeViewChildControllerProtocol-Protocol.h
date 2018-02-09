//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTDingAdvertiseView, DTDingAdvertiseViewModel;

@protocol DTDingHomeViewChildControllerProtocol <NSObject>
@property(retain, nonatomic) DTDingAdvertiseView *advertiseView;
@property(retain, nonatomic) DTDingAdvertiseViewModel *adsViewModel;
- (void)applyAdvertiseWithAdsModel:(DTDingAdvertiseViewModel *)arg1;
- (void)dingHomeViewSafeAreaInsetsDidChange:(struct UIEdgeInsets)arg1;

@optional
- (void)tabBarItemDoubleClicked;
@end

