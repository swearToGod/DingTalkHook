//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTFaceDetector.h"

#import "ABFaceDetectCallback-Protocol.h"

@class ABFaceRecognizer, NSString;

@interface DTSafetyFaceDetector : DTFaceDetector <ABFaceDetectCallback>
{
    ABFaceRecognizer *_faceRecognizer;
    struct ABFaceDetectResult _resultData;
    struct CGSize _processSampleBufferSize;
}

@property(nonatomic) struct CGSize processSampleBufferSize; // @synthesize processSampleBufferSize=_processSampleBufferSize;
- (void).cxx_destruct;
- (void)onLivenessDetectFinish:(id)arg1;
- (void)doRecord:(id)arg1;
- (void)onLivenessDetectFailed:(long long)arg1 withLivenessResult:(id)arg2;
- (void)onLivenessDetectSuccess:(id)arg1;
- (void)onFaceDetected:(id)arg1 FaceDetectResult:(struct ABFaceDetectResult)arg2;
- (void)stopDetect;
- (int)faceImageAngle;
- (_Bool)isBetterResult:(id)arg1 thanResult:(id)arg2;
- (_Bool)isGoodResult:(id)arg1;
- (void)updateResult:(id)arg1 origResult:(struct ABFaceDetectResult)arg2 scene:(id)arg3;
- (void)detectSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 smileEnabled:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
