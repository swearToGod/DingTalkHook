//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "VIContextRuntime-Protocol.h"

@class NSString;
@protocol VIContextRuntime;

@interface VIContextRuntimeWrapper : NSObject <VIContextRuntime>
{
    id <VIContextRuntime> _runtimeAdapter;
}

- (void).cxx_destruct;
- (id)gatewayUrl;
- (_Bool)startApplication:(id)arg1 params:(id)arg2 animated:(_Bool)arg3;
- (id)navigationController;
- (id)window;
- (id)initWithRuntimeAdatper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

