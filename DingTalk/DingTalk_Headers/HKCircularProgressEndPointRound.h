//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HKCircularProgressEndPointDrawer-Protocol.h"

@class NSString;

@interface HKCircularProgressEndPointRound : NSObject <HKCircularProgressEndPointDrawer>
{
}

- (void)drawEndPointInContext:(struct CGContext *)arg1 withCenter:(struct CGPoint)arg2 andRadius:(double)arg3 andInnerRadius:(double)arg4 atAngle:(double)arg5;
- (void)drawStartPointInContext:(struct CGContext *)arg1 withCenter:(struct CGPoint)arg2 andRadius:(double)arg3 andInnerRadius:(double)arg4 atAngle:(double)arg5;
- (double)endPointAngleWithCenter:(struct CGPoint)arg1 radius:(double)arg2 innerRadius:(double)arg3 angle:(double)arg4;
- (double)startPointAngleWithCenter:(struct CGPoint)arg1 radius:(double)arg2 innerRadius:(double)arg3 angle:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

