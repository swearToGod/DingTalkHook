//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAMediaTimingFunction, NSString, UIColor;
@protocol HKCircularProgressEndPointDrawer;

@interface HKCircularProgressView : UIView <CAAnimationDelegate>
{
    CAMediaTimingFunction *_animationTiming;
    double _animationDuration;
}

+ (Class)layerClass;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) CAMediaTimingFunction *animationTiming; // @synthesize animationTiming=_animationTiming;
- (void).cxx_destruct;
@property(nonatomic) double current;
@property(nonatomic) double max;
@property(nonatomic) double step;
@property(nonatomic) unsigned long long concentricProgressionType;
@property(nonatomic) double concentricGap;
@property(nonatomic) double concentricStep;
@property(nonatomic) double gap;
@property(retain, nonatomic) id <HKCircularProgressEndPointDrawer> endPoint;
@property(nonatomic) _Bool drawFullTrack;
@property(nonatomic) double startAngle;
@property(nonatomic) double fillRadiusPx;
@property(nonatomic) double fillRadius;
@property(nonatomic) double outlineWidth;
@property(nonatomic) _Bool alwaysDrawOutline;
@property(retain, nonatomic) UIColor *outlineTintColor;
@property(retain, nonatomic) UIColor *trackTintColor;
@property(retain, nonatomic) UIColor *progressTintColor;
- (void)setMax:(double)arg1 animated:(_Bool)arg2;
- (void)setCurrent:(double)arg1 animated:(_Bool)arg2;
- (void)setFillRadiusPx:(double)arg1 animated:(_Bool)arg2;
- (void)setFillRadius:(double)arg1 animated:(_Bool)arg2;
- (void)stopAnimating;
- (void)startAnimating;
- (void)_defaultInit;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

