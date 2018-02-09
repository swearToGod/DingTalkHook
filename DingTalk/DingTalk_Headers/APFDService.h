//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MGLivenessProtocolDelegate-Protocol.h"

@class MGLivenessDetector, NSString;
@protocol APFDServiceProtocolDelegate;

@interface APFDService : NSObject <MGLivenessProtocolDelegate>
{
    int _yuvSampleInterval;
    int _sampleIntervalStep;
    id <APFDServiceProtocolDelegate> _delegate;
    MGLivenessDetector *_livenessDetector;
}

@property(nonatomic) int sampleIntervalStep; // @synthesize sampleIntervalStep=_sampleIntervalStep;
@property(retain, nonatomic) MGLivenessDetector *livenessDetector; // @synthesize livenessDetector=_livenessDetector;
@property(nonatomic) int yuvSampleInterval; // @synthesize yuvSampleInterval=_yuvSampleInterval;
@property(nonatomic) __weak id <APFDServiceProtocolDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onFrameDetected:(id)arg1 andTimeout:(float)arg2;
- (int)onDetectionSuccess:(id)arg1;
- (void)onDetectionFailed:(int)arg1;
- (void)closeService;
- (void)fastdetectFacewithYUVImageBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;
- (void)detectFacewithYUVImageBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;
- (void)detectFacewithImageBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;
- (int)initService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

