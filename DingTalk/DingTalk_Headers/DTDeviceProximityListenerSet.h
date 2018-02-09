//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface DTDeviceProximityListenerSet : NSObject
{
    NSHashTable *_weakTable;
    _Bool _proximityState;
    _Bool _isEnabledNotification;
}

@property(nonatomic) _Bool isEnabledNotification; // @synthesize isEnabledNotification=_isEnabledNotification;
@property(readonly, nonatomic) _Bool proximityState; // @synthesize proximityState=_proximityState;
- (void).cxx_destruct;
- (void)notifyProximityDidChange;
- (void)proximityStateDidChange:(id)arg1;
- (void)listenerDidChange:(_Bool)arg1;
- (_Bool)hasListeners;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)init;

@end

