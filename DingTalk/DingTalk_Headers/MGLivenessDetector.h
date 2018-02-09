//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LicenseProtocolDelegate-Protocol.h"

@class MGLivenessDetectionFrame, NSDate, NSMutableArray, NSMutableString, NSString;
@protocol MGLivenessProtocolDelegate;

@interface MGLivenessDetector : NSObject <LicenseProtocolDelegate>
{
    struct _00066 *_sessionManager;
    unsigned long long _actionState;
    int _curDetectionType;
    struct dispatch_queue_s *_queue;
    _Bool _failed;
    _Bool _tracking;
    NSMutableArray *_validFrame;
    NSDate *_curStepStartTime;
    NSDate *_startTime;
    MGLivenessDetectionFrame *_bestFrame;
    MGLivenessDetectionFrame *_actionFrame;
    long long _sessionHash;
    long long _taskQueueSize;
    NSObject *_taskMutex;
    struct _DetectorConfig _config;
    char *grayRawData;
    NSMutableString *algorithmLog;
    id <MGLivenessProtocolDelegate> delegate;
}

+ (id)checkCachedLicense;
+ (id)takeLicenseFromNetworkWithUUID:(id)arg1;
+ (id)setLicense:(id)arg1;
+ (id)getContextWithUUID:(id)arg1;
+ (id)getVersion;
+ (void)clearCachedAlgorithmLog;
+ (id)getCachedAlgorithmLog;
+ (id)detectorOfOptions:(id)arg1 andDispatchQueue:(struct dispatch_queue_s *)arg2;
+ (id)detectorOfOptions:(id)arg1;
@property(nonatomic) id <MGLivenessProtocolDelegate> delegate; // @synthesize delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setFaceRect:(struct CGRect)arg1;
- (void)saveAlgorithmLog;
- (id)getAlgorithmLog;
- (id)getFaceIDData;
- (id)getFaceIDDataWithMaxImageSize:(int)arg1;
- (id)getValidFrame;
- (int)getCurDetectType;
- (void)resetAction;
- (void)reset;
- (void)clearInternalData;
- (void)processImage:(id)arg1 hash:(long long)arg2;
- (void)taskFailed:(int)arg1 error:(const struct _00184 *)arg2;
- (void)appendAlgorithmLog:(id)arg1 errorInfo:(const struct _00184 *)arg2;
- (void)changeDetectionType:(int)arg1;
- (unsigned long long)getActionState:(int)arg1;
- (_Bool)detectWithImage:(id)arg1;
- (_Bool)detectWithBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;
- (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;
- (void)setOptions:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1 andModelData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

