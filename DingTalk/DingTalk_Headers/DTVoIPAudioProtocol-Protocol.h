//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAudioSessionRouteDescription, NSString, NSURL;

@protocol DTVoIPAudioProtocol <NSObject>
- (NSString *)currentAudioOutputDevice:(AVAudioSessionRouteDescription *)arg1;
- (NSString *)currentAudioInputDevice:(AVAudioSessionRouteDescription *)arg1;
- (void)resetAudioSessionCategory;
- (float)getVolume;
- (void)enableProximity:(_Bool)arg1 likePhone:(_Bool)arg2;
- (_Bool)setSpeaker:(_Bool)arg1;
- (void)forceStopPlayAudio;
- (void)stopPlayVibrate;
- (void)startPlayVibrateCompletion:(void (^)(void))arg1;
- (_Bool)startPlayAudioByURL:(NSURL *)arg1 enableSpeak:(_Bool)arg2 muteByDevice:(_Bool)arg3 muteWhenOutputExist:(_Bool)arg4 resetWhenEnd:(_Bool)arg5 numberOfLoops:(long long)arg6 error:(id *)arg7;
- (_Bool)startPlayAudioByURL:(NSURL *)arg1 enableSpeak:(_Bool)arg2 muteByDevice:(_Bool)arg3 resetWhenEnd:(_Bool)arg4 numberOfLoops:(long long)arg5 error:(id *)arg6;
- (_Bool)startPlayAudioByURL:(NSURL *)arg1 enableSpeak:(_Bool)arg2 resetWhenEnd:(_Bool)arg3 numberOfLoops:(long long)arg4 error:(id *)arg5;
- (_Bool)startPlayAudioByURL:(NSURL *)arg1 enableSpeak:(_Bool)arg2 error:(id *)arg3;
- (_Bool)startPlayAudioByURL:(NSURL *)arg1 error:(id *)arg2;
@end

