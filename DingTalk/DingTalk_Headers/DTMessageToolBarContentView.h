//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTMessageComposerAudioViewDelegate-Protocol.h"
#import "DTMessageComposerTextViewDelegate-Protocol.h"
#import "DTMessageToolBarAudioViewDelegate-Protocol.h"
#import "DTMessageToolBarCamaraViewDelegate-Protocol.h"
#import "DTMessageToolBarFaceViewDelegate-Protocol.h"

@class DTAudioRecorderWrapper, DTAudioRecordingInteractionView, DTMessageComposerAudioView, DTMessageComposerTextView, DTMessageInputContainerView, DTMessageToolBarAudioView, DTMessageToolBarCameraView, DTMessageToolBarFaceView, NSString, UIButton, UIImageView;
@protocol DTMessageToolBarContentViewDelegate;

@interface DTMessageToolBarContentView : UIView <DTMessageComposerTextViewDelegate, DTMessageComposerAudioViewDelegate, DTMessageToolBarCamaraViewDelegate, DTMessageToolBarAudioViewDelegate, DTMessageToolBarFaceViewDelegate>
{
    struct {
        unsigned int manuallyCancelled:1;
        unsigned int invalidRecording:1;
        unsigned int containerFrameDidChange:1;
        unsigned int didDispatchStartBlink:1;
        unsigned int ignoreRecordingOnce:1;
    } _contentViewFlags;
    _Bool _noAudioBar;
    DTMessageInputContainerView *_containerView;
    UIButton *_switchButton;
    UIImageView *_separateView;
    DTMessageComposerTextView *_inputView;
    DTMessageComposerAudioView *_recordView;
    DTMessageToolBarFaceView *_faceView;
    DTMessageToolBarCameraView *_camaraView;
    DTMessageToolBarAudioView *_audioView;
    id <DTMessageToolBarContentViewDelegate> _delegate;
    unsigned long long _config;
    DTAudioRecorderWrapper *_recorderWrapper;
    DTAudioRecordingInteractionView *_recordingInteractionView;
    UIView *_bgBlurView;
    UIButton *_likeButton;
    UIImageView *_safeIconView;
}

@property(retain, nonatomic) UIImageView *safeIconView; // @synthesize safeIconView=_safeIconView;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(nonatomic) _Bool noAudioBar; // @synthesize noAudioBar=_noAudioBar;
@property(retain, nonatomic) UIView *bgBlurView; // @synthesize bgBlurView=_bgBlurView;
@property(retain, nonatomic) DTAudioRecordingInteractionView *recordingInteractionView; // @synthesize recordingInteractionView=_recordingInteractionView;
@property(retain, nonatomic) DTAudioRecorderWrapper *recorderWrapper; // @synthesize recorderWrapper=_recorderWrapper;
@property(nonatomic) unsigned long long config; // @synthesize config=_config;
@property(nonatomic) __weak id <DTMessageToolBarContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DTMessageToolBarAudioView *audioView; // @synthesize audioView=_audioView;
@property(retain, nonatomic) DTMessageToolBarCameraView *camaraView; // @synthesize camaraView=_camaraView;
@property(retain, nonatomic) DTMessageToolBarFaceView *faceView; // @synthesize faceView=_faceView;
@property(retain, nonatomic) DTMessageComposerAudioView *recordView; // @synthesize recordView=_recordView;
@property(retain, nonatomic) DTMessageComposerTextView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIImageView *separateView; // @synthesize separateView=_separateView;
@property(retain, nonatomic) UIButton *switchButton; // @synthesize switchButton=_switchButton;
@property(nonatomic) __weak DTMessageInputContainerView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)setPlusButtonHidden:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)showVoiceShortToast;
- (void)likeBtnDidLongPress:(id)arg1;
- (void)likeBtnDidClick;
- (void)switchButtonPressed:(id)arg1;
- (void)dismissSwitchButtonWithAnimated:(_Bool)arg1;
- (void)showSwitchButtonWithAnimated:(_Bool)arg1;
- (void)messageToolBarAudioViewDidTap:(id)arg1;
- (void)messageToolBarCameraView:(id)arg1 didTappedWithGestureRecognizer:(id)arg2;
- (void)messageComposerAudioView:(id)arg1 command:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)notifyDidChangeInputMode:(unsigned long long)arg1;
- (void)applyChangeInputMode:(_Bool)arg1 activeInput:(_Bool)arg2;
- (_Bool)isAudioMode;
- (_Bool)hasExpandedEmotionView;
- (void)sendText;
- (void)dispatchRecordingUserAction:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)handleAudioRecordingDidFinishAction:(_Bool)arg1;
- (void)willStartAudioRecording;
- (void)showInvalidContentWarning;
- (void)dismissRecordingInteractionView:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 config:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 config:(unsigned long long)arg2 containerView:(id)arg3;
- (void)configureContentView:(unsigned long long)arg1;
- (void)configWithIconColor:(id)arg1 audioBtnBgColor:(id)arg2 audioBtnTextColor:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

