//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UIImageView;

@interface DTSmartDeviceConnectGuideView : UIView
{
    UIImageView *_controlCenterImageView;
    UIImageView *_handImageView;
    NSTimer *_animationTimer;
}

@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(retain, nonatomic) UIImageView *handImageView; // @synthesize handImageView=_handImageView;
@property(retain, nonatomic) UIImageView *controlCenterImageView; // @synthesize controlCenterImageView=_controlCenterImageView;
- (void).cxx_destruct;
- (void)_refreshAnimation;
- (void)_resetGuideUI;
- (void)_loadComponents;
- (void)stopGuideAnimation;
- (void)startGuideAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end
