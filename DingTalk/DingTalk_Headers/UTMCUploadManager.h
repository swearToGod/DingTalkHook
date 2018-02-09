//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UTMCLifeCycleProtocol-Protocol.h"

@class NSString, UTMCTask;

@interface UTMCUploadManager : NSObject <UTMCLifeCycleProtocol>
{
    int DEFAULT_MODE;
    int _allowedNetoworkStatus;
    int _currentMode;
    UTMCTask *_task;
    long long _currentUploadInterval;
    long long _currentBatchThreshold;
    CDUnknownBlockType _listenerBlock;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType listenerBlock; // @synthesize listenerBlock=_listenerBlock;
@property long long currentBatchThreshold; // @synthesize currentBatchThreshold=_currentBatchThreshold;
@property long long currentUploadInterval; // @synthesize currentUploadInterval=_currentUploadInterval;
@property int currentMode; // @synthesize currentMode=_currentMode;
@property(retain, nonatomic) UTMCTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)startWithMode:(int)arg1;
- (void)setAllowedNetoworkStatus:(int)arg1;
- (void)setBatchThreshold:(long long)arg1;
- (void)setInterval:(long long)arg1;
- (void)setMode:(int)arg1;
- (void)stop;
- (void)start;
- (void)switchBackGround;
- (void)switchForeGround;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

