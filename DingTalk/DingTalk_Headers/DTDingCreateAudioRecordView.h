//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTAudioLevelMeterViewDelegate-Protocol.h"
#import "DTAudioRecorderDelegate-Protocol.h"

@class DTAudioDataAccessRule, DTAudioLevelMeterView, DTButton, NSArray, NSData, NSString, UIImageView, UILabel, UILongPressGestureRecognizer;
@protocol DTDingCreateAudioRecordViewDelegate;

@interface DTDingCreateAudioRecordView : UIView <DTAudioRecorderDelegate, DTAudioLevelMeterViewDelegate>
{
    _Bool _showingMeters;
    _Bool _isDownloading;
    _Bool _editable;
    CDUnknownBlockType _finishBlock;
    id <DTDingCreateAudioRecordViewDelegate> _delegate;
    DTAudioLevelMeterView *_meterView;
    UILabel *_durationLabel;
    DTButton *_mainButton;
    UIImageView *_recordingMaskView;
    UILabel *_tipsLabel;
    DTButton *_deleteButton;
    long long _state;
    UILongPressGestureRecognizer *_longPressGesture;
    double _audioDuration;
    NSArray *_audioMeters;
    DTAudioDataAccessRule *_accessRule;
    NSData *_amrData;
    NSString *_localRecordingPath;
}

@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(copy, nonatomic) NSString *localRecordingPath; // @synthesize localRecordingPath=_localRecordingPath;
@property(copy, nonatomic) NSData *amrData; // @synthesize amrData=_amrData;
@property(retain, nonatomic) DTAudioDataAccessRule *accessRule; // @synthesize accessRule=_accessRule;
@property(copy, nonatomic) NSArray *audioMeters; // @synthesize audioMeters=_audioMeters;
@property(nonatomic) double audioDuration; // @synthesize audioDuration=_audioDuration;
@property(nonatomic) _Bool showingMeters; // @synthesize showingMeters=_showingMeters;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) DTButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *recordingMaskView; // @synthesize recordingMaskView=_recordingMaskView;
@property(retain, nonatomic) DTButton *mainButton; // @synthesize mainButton=_mainButton;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) DTAudioLevelMeterView *meterView; // @synthesize meterView=_meterView;
@property(nonatomic) __weak id <DTDingCreateAudioRecordViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)audioLevelMeterDidStop:(id)arg1 duration:(double)arg2;
- (void)audioRecorder:(id)arg1 updateTrackTime:(double)arg2;
- (void)didFinishRecording:(id)arg1 succeed:(_Bool)arg2;
- (void)didStartRecording:(id)arg1;
- (void)pausePlay;
- (void)beginPlay;
- (void)stopRecord;
- (void)beginRecord;
- (void)onDeleteAudio:(id)arg1;
- (void)onMainButtonLongPressed:(id)arg1;
- (void)onMainButtonTapped:(id)arg1;
- (void)downloadAudioContent;
- (void)updateAudioDurationLabel;
- (void)updateRecordToState:(long long)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)audioVolumns;
- (id)duration;
- (id)amrFilePath;
- (void)cancelRecorder;
- (id)initWithFrame:(struct CGRect)arg1 audioLocalPath:(id)arg2 duration:(id)arg3 volumns:(id)arg4 delegate:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1 accessRule:(id)arg2 duration:(id)arg3 volumns:(id)arg4 delegate:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

