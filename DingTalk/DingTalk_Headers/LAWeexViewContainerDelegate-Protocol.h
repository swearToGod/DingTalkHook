//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAMicroAppContextProtocol-Protocol.h"
#import "NSObject-Protocol.h"

@class LAWeexViewContainer, NSError, UIView;

@protocol LAWeexViewContainerDelegate <NSObject, LAMicroAppContextProtocol>

@optional
- (void)weexViewContainer:(LAWeexViewContainer *)arg1 onRenderFailed:(NSError *)arg2;
- (void)weexViewContainer:(LAWeexViewContainer *)arg1 onRenderFinish:(UIView *)arg2;
- (void)weexViewContainer:(LAWeexViewContainer *)arg1 onViewCreate:(UIView *)arg2;
- (struct CGRect)weexViewFrameForContainer:(LAWeexViewContainer *)arg1;
@end

