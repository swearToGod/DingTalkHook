//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTMapServiceProtocol-Protocol.h"

@class NSString;

@interface DTMapServiceImpl : NSObject <DTMapServiceProtocol>
{
}

- (id)createMapPositionPageWithTitle:(id)arg1 showCustomNavPopView:(_Bool)arg2 showCurrentUserLocation:(_Bool)arg3 showTargetLocation:(_Bool)arg4 showTransmit:(_Bool)arg5 latitude:(double)arg6 longitude:(double)arg7 transmitClickBlock:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

