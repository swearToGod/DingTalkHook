//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ABDetectListener-Protocol.h"
#import "ABFaceDetectCallback-Protocol.h"

@class NSCondition, NSString, UIViewController;
@protocol ABAuthCallback, ABFaceDetectCallback, ABLivenessDetector;

@interface ABAuthContext : NSObject <ABDetectListener, ABFaceDetectCallback>
{
    _Bool _isProcessing;
    _Bool _faceDetected;
    id <ABFaceDetectCallback> _mpFaceDetectCallback;
    id <ABAuthCallback> _authCallback;
    id _faceRecognizer;
    UIViewController *_cameraViewController;
    id <ABLivenessDetector> _livenessDetector;
    NSCondition *_mpProcessCondition;
    struct opaqueCMSampleBuffer *_processingBuffer;
    struct ABFaceDetectResult _msFaceDetectResult;
}

+ (void)setFaceRecognizer:(id)arg1;
+ (void)safePresent:(id)arg1 withTarget:(id)arg2;
+ (void)livenessDetect:(id)arg1 withConfig:(id)arg2 withCallback:(id)arg3;
+ (id)explainConfig:(id)arg1;
+ (void)endLivenessDetect:(int)arg1 withData:(id)arg2;
+ (void)restartLivenessDetect:(id)arg1;
+ (void)livenessOnFailed:(int)arg1;
+ (void)dismiss;
+ (id)getVersion;
+ (id)sharedInstance;
@property _Bool faceDetected; // @synthesize faceDetected=_faceDetected;
@property struct ABFaceDetectResult msFaceDetectResult; // @synthesize msFaceDetectResult=_msFaceDetectResult;
@property struct opaqueCMSampleBuffer *processingBuffer; // @synthesize processingBuffer=_processingBuffer;
@property(retain, nonatomic) NSCondition *mpProcessCondition; // @synthesize mpProcessCondition=_mpProcessCondition;
@property(retain) id <ABLivenessDetector> livenessDetector; // @synthesize livenessDetector=_livenessDetector;
@property(nonatomic) __weak UIViewController *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
@property _Bool isProcessing; // @synthesize isProcessing=_isProcessing;
@property(nonatomic) __weak id faceRecognizer; // @synthesize faceRecognizer=_faceRecognizer;
@property(retain) id <ABAuthCallback> authCallback; // @synthesize authCallback=_authCallback;
@property(retain) id <ABFaceDetectCallback> mpFaceDetectCallback; // @synthesize mpFaceDetectCallback=_mpFaceDetectCallback;
- (void).cxx_destruct;
- (void)record:(id)arg1;
- (void)doRecord:(id)arg1;
- (void)onLivenessDetectFinish:(id)arg1;
- (void)onLivenessDetectFailed:(long long)arg1 withLivenessResult:(id)arg2;
- (void)onLivenessDetectSuccess:(id)arg1;
- (void)onFaceDetected:(id)arg1 FaceDetectResult:(struct ABFaceDetectResult)arg2;
- (void)onMessage:(int)arg1 withData:(id)arg2;
- (void)onFrameDetected:(id)arg1 andTimeout:(float)arg2;
- (int)onDetectSuccess:(id)arg1;
- (void)onDetectFailed:(int)arg1 withData:(id)arg2;
- (int)faceDetect:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2 params:(id)arg3 callback:(id)arg4;
- (int)faceDetect:(char *)arg1 withWidth:(int)arg2 withHeight:(int)arg3 withAngle:(int)arg4 callback:(id)arg5;
- (int)faceDetect:(id)arg1 params:(id)arg2 callback:(id)arg3;
- (struct ABFaceDetectResult)faceDetect:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;
- (int)faceDetect:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2 callback:(id)arg3;
- (void)faceCaptcha:(id)arg1 withConfig:(id)arg2 withCallback:(id)arg3;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

