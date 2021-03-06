//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol DTAudioRecorderDelegate;

@interface DTAudioRecorder : NSObject
{
    struct {
        unsigned int respondsShouldUpdateTrackTime:1;
    } _recorderFlags;
    _Bool _disposed;
    id <DTAudioRecorderDelegate> _delegate;
    NSString *_outputPath;
}

+ (void)setApplicationIdleTimerDisbaled:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSString *outputPath; // @synthesize outputPath=_outputPath;
@property(nonatomic) __weak id <DTAudioRecorderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool disposed; // @synthesize disposed=_disposed;
- (void).cxx_destruct;
- (void)notifyShouldUpdateTrackTime:(double)arg1;
- (void)notifyDidFinishRecording:(_Bool)arg1;
- (void)notifyDidStartRecording;
- (void)endSession;
- (void)beginSession;
- (float)soundLevelMeters;
- (_Bool)isRecording;
- (void)stop;
- (void)start;
- (void)disposeRecorder;

@end

