//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;

@protocol DTMapServiceProtocol <NSObject>
- (UIViewController *)createMapPositionPageWithTitle:(NSString *)arg1 showCustomNavPopView:(_Bool)arg2 showCurrentUserLocation:(_Bool)arg3 showTargetLocation:(_Bool)arg4 showTransmit:(_Bool)arg5 latitude:(double)arg6 longitude:(double)arg7 transmitClickBlock:(void (^)(void))arg8;
@end

