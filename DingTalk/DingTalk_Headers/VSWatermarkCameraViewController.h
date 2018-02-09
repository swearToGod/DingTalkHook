//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "CAAnimationDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "VSRecorderDelegate-Protocol.h"

@class AVCaptureVideoPreviewLayer, NSDictionary, NSString, UIButton, UIImage, UIImageView, UIView, VSFocusView, VSImageView, VSRecorder, VSSignCoverView;

@interface VSWatermarkCameraViewController : UINavigationController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, CAAnimationDelegate, VSRecorderDelegate>
{
    _Bool _previousStatusBarHidden;
    double _beginZoomFactor;
    _Bool _flashBtnHidden;
    _Bool _useRealtimePhoto;
    _Bool _canTakePicture;
    _Bool _enableCaptureAnimation;
    long long _flashMode;
    VSFocusView *_signView;
    UIView *_captureView;
    VSSignCoverView *_signCoverView;
    UIButton *_captureBtn;
    UIButton *_camereBtn;
    UIButton *_flashBtn;
    UIButton *_confirmBtn;
    long long _languageType;
    NSDictionary *_inputWatermarkInfo;
    VSRecorder *_recorder;
    VSImageView *_magicFaceView;
    NSDictionary *_languageInfo;
    UIView *_backView;
    UIView *_confirmView;
    UIImageView *_previewIV;
    UIImage *_originImage;
    UIImage *_coverImage;
    UIImage *_beautyImage;
    long long _lastOrientation;
    NSDictionary *_outputInfo;
    CDUnknownBlockType _capturePreviewBlock;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _cancelBlock;
    struct CGAffineTransform _originTransform;
}

@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) CDUnknownBlockType capturePreviewBlock; // @synthesize capturePreviewBlock=_capturePreviewBlock;
@property(nonatomic) _Bool enableCaptureAnimation; // @synthesize enableCaptureAnimation=_enableCaptureAnimation;
@property(nonatomic) _Bool canTakePicture; // @synthesize canTakePicture=_canTakePicture;
@property(retain, nonatomic) NSDictionary *outputInfo; // @synthesize outputInfo=_outputInfo;
@property(nonatomic) long long lastOrientation; // @synthesize lastOrientation=_lastOrientation;
@property(nonatomic) struct CGAffineTransform originTransform; // @synthesize originTransform=_originTransform;
@property(retain, nonatomic) UIImage *beautyImage; // @synthesize beautyImage=_beautyImage;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;
@property(retain, nonatomic) UIImageView *previewIV; // @synthesize previewIV=_previewIV;
@property(retain, nonatomic) UIView *confirmView; // @synthesize confirmView=_confirmView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) NSDictionary *languageInfo; // @synthesize languageInfo=_languageInfo;
@property(retain, nonatomic) VSImageView *magicFaceView; // @synthesize magicFaceView=_magicFaceView;
@property(retain, nonatomic) VSRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) _Bool useRealtimePhoto; // @synthesize useRealtimePhoto=_useRealtimePhoto;
@property(nonatomic) _Bool flashBtnHidden; // @synthesize flashBtnHidden=_flashBtnHidden;
@property(copy, nonatomic) NSDictionary *inputWatermarkInfo; // @synthesize inputWatermarkInfo=_inputWatermarkInfo;
@property(nonatomic) long long languageType; // @synthesize languageType=_languageType;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *flashBtn; // @synthesize flashBtn=_flashBtn;
@property(retain, nonatomic) UIButton *camereBtn; // @synthesize camereBtn=_camereBtn;
@property(retain, nonatomic) UIButton *captureBtn; // @synthesize captureBtn=_captureBtn;
@property(readonly, nonatomic) VSSignCoverView *signCoverView; // @synthesize signCoverView=_signCoverView;
@property(retain, nonatomic) UIView *captureView; // @synthesize captureView=_captureView;
@property(retain, nonatomic) VSFocusView *signView; // @synthesize signView=_signView;
- (void).cxx_destruct;
- (id)getProcessedImage:(struct opaqueCMSampleBuffer *)arg1;
- (void)takePictureWithImage:(id)arg1 orientation:(long long)arg2 animated:(_Bool)arg3;
- (void)takePictureWithImage:(id)arg1 animated:(_Bool)arg2;
- (void)takePictureWithImage:(id)arg1;
- (id)addCoverImage:(id)arg1 withInfo:(id)arg2 orientation:(long long)arg3;
- (id)previewImage:(id)arg1 withInfo:(id)arg2 orientation:(long long)arg3;
- (id)createSignCoverView;
- (void)didSwitchToCaptureMode;
- (void)didSwitchToConfirmView;
- (void)detectOrientation;
- (void)switchDevice;
- (void)switchFlash;
- (void)updateFlashView:(long long)arg1;
- (void)onPreviewViewPinched:(id)arg1;
- (void)onPreviewViewTaped:(id)arg1;
- (void)confirmBtnOnClick:(id)arg1;
- (void)confirmPicture;
- (void)retakeBtnOnClick:(id)arg1;
- (void)captureBtnOnClick:(id)arg1;
- (void)resetCameraViewTransformForCapture;
- (void)recorder:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)layoutSignView:(long long)arg1;
- (void)confirmViewDidLoad;
- (void)layoutConfirmViewWithImage:(id)arg1 animated:(_Bool)arg2;
- (void)layoutConfirmViewWithImage:(id)arg1;
- (long long)getDeviceOrientation;
- (void)addOrientationObserver;
- (void)layoutCaptureView;
- (void)dealloc;
- (void)tryTakePicture;
- (void)setupLaugaugeInfo;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
- (void)validateFlash;
@property(nonatomic) long long cameraDevice;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
- (id)initWithDictionary:(id)arg1 config:(id)arg2 capturePreviewBlock:(CDUnknownBlockType)arg3 successBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;
- (id)initWithDictionary:(id)arg1 capturePreviewBlock:(CDUnknownBlockType)arg2 successBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

