//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LAWebViewAudioControlProtocol-Protocol.h"

@class NSString;

@interface DTWebViewAudioControlProtocolIMP : NSObject <LAWebViewAudioControlProtocol>
{
}

- (id)returnAudioSessionCode:(long long)arg1;
- (id)setAudioSessionPlayAndRecordWithSpeaker:(_Bool)arg1;
- (void)activeAudioSession:(_Bool)arg1 notifyOtherApp:(_Bool)arg2 speak:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resetUIWebViewAudioSession;
- (void)activeUIWebViewAudioSession;
- (void)audioControlHandleWKWebViewDealloc;
- (void)audioControlHandleWKWebViewDidEnterFullScrennVedio;
- (void)audioControlHandleUIWebViewDealloc;
- (void)audioControlHandleUIWebViewDidEnterFullScrennVedio;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

