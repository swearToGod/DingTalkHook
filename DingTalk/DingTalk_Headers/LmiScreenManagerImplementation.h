//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LmiScreenManagerImplementation : NSObject
{
    void *screenManager;
}

- (void)orientationDidChange:(id)arg1;
- (void)brightnessDidChange:(id)arg1;
- (void)screenModeDidChange:(id)arg1;
- (void)screenDidDisconnect:(id)arg1;
- (void)screenDidConnect:(id)arg1;
- (_Bool)stop;
- (_Bool)start;
- (void)dealloc;
- (id)initWithScreenManager:(struct LmiScreenManager_ *)arg1;

@end

