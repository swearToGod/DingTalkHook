//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MAOverlayContainerView;
@protocol MAOverlay;

@protocol MAOverlayDrawable <NSObject>
@property(readonly, nonatomic) id <MAOverlay> overlay;
@property(readonly, nonatomic) double alpha;
@property(nonatomic) MAOverlayContainerView *render;
- (void)setNeedsDisplayInMapRect:(struct MAMapRect)arg1 zoomScale:(double)arg2;
- (void)setNeedsDisplayInMapRect:(struct MAMapRect)arg1;
- (void)setNeedsDisplay;
- (void)drawMapRect:(struct MAMapRect)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (_Bool)canDrawMapRect:(struct MAMapRect)arg1 zoomScale:(double)arg2;
- (_Bool)respondsToDrawMapRect;
@end

