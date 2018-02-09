//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SRWebSocketDelegate-Protocol.h"
#import "WXWebSocketHandler-Protocol.h"

@class NSString, WXThreadSafeMutableDictionary;

@interface WXWebSocketDefaultImpl : NSObject <SRWebSocketDelegate, WXWebSocketHandler>
{
    WXThreadSafeMutableDictionary *_webSockets;
}

- (void).cxx_destruct;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocketDidOpen:(id)arg1;
- (void)clear:(id)arg1;
- (void)close:(id)arg1 code:(long long)arg2 reason:(id)arg3;
- (void)close:(id)arg1;
- (void)send:(id)arg1 data:(id)arg2;
- (void)open:(id)arg1 protocol:(id)arg2 identifier:(id)arg3 withDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

