//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput;

@interface LmiVideoCapturerImplementationAVFoundation : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    _Bool drop;
    AVCaptureDevice *device;
    AVCaptureVideoDataOutput *output;
    AVCaptureDeviceInput *input;
    AVCaptureSession *session;
    struct LmiVideoCapturer_ *capturer;
    void *frameBuffer;
    unsigned long long frameLength;
}

- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (_Bool)isSuspended;
- (_Bool)stop;
- (void)stopOnMainThread:(id)arg1;
- (_Bool)_stop;
- (_Bool)start;
- (void)startOnMainThread:(id)arg1;
- (_Bool)_start;
- (void)unregisterObservers;
- (void)registerObservers;
- (_Bool)configure;
- (_Bool)_configureiOS6;
- (_Bool)_configure;
- (_Bool)_configureNotMatchingFormat;
- (_Bool)_configureExactMatch;
- (void)enableImageStablization;
- (void)setFrameRate:(CDStruct_1b6d18a9)arg1;
- (void)dropLateFrames:(_Bool)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithVideoCapturerDevice:(struct LmiVideoCapturer_ *)arg1;
- (id)_initiOS6;
- (id)_init;

@end

