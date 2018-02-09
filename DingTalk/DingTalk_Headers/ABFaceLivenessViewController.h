//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ABControllerDelegate-Protocol.h"
#import "ABFacePromptViewTouchDelegate-Protocol.h"
#import "ABNavViewDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class ABNavView, ABViewAgent, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ABFaceLivenessViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate, ABControllerDelegate, ABNavViewDelegate, ABFacePromptViewTouchDelegate>
{
    AVCaptureVideoPreviewLayer *previewLayer;
    AVCaptureVideoDataOutput *videoDataOutput;
    NSObject<OS_dispatch_queue> *videoDataOutputQueue;
    AVCaptureStillImageOutput *stillImageOutput;
    _Bool _navShowed;
    int _exceptionCount;
    ABViewAgent *_viewAgent;
    ABNavView *_navView;
    double _screenBrightness;
}

@property(nonatomic) double screenBrightness; // @synthesize screenBrightness=_screenBrightness;
@property(nonatomic) int exceptionCount; // @synthesize exceptionCount=_exceptionCount;
@property(nonatomic) _Bool navShowed; // @synthesize navShowed=_navShowed;
@property(retain, nonatomic) ABNavView *navView; // @synthesize navView=_navView;
@property(retain, nonatomic) ABViewAgent *viewAgent; // @synthesize viewAgent=_viewAgent;
- (void).cxx_destruct;
- (void)gotoSetting;
- (void)promptViewButtonTouchUp:(int)arg1 buttonIndex:(long long)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)configureCameraFront;
- (void)teardownAVCapture;
- (_Bool)setupAVCapture;
- (_Bool)isCurrentViewController;
- (void)showCameraInitFailPromptType;
- (void)showCameraPermissionPromptType;
- (void)setCommon;
- (void)volumeDidChange:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)onLivenessSuccess;
- (void)onGoBack;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)onNavStartButtonClicked:(id)arg1;
- (void)doEndLivenessDetectFinish;
- (void)endLivenessDetect:(id)arg1 withData:(id)arg2;
- (void)restartLivenessDetect:(id)arg1;
- (void)setup;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

