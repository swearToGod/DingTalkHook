//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;

@interface DTDataUpgradeProgress : NSObject
{
    NSTimer *_timer;
    double _timeout;
    double _fireCntPerStep;
    unsigned long long _currentStep;
    double _nextStepBoundary;
    double _currentProgress;
    CDUnknownBlockType _changedBlock;
}

- (void).cxx_destruct;
- (void)onFired:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWithTimeout:(double)arg1 changedBlock:(CDUnknownBlockType)arg2;

@end

