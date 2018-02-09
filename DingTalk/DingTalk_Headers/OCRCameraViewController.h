//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class DTCameraScanView, OCRCameraView, UIBorderLabel, UIButton, UIImage, UILabel;

@interface OCRCameraViewController : UIViewController
{
    _Bool _isPersent;
    _Bool _breathing;
    CDUnknownBlockType _capturePic;
    CDUnknownBlockType _captureDidCancel;
    CDUnknownBlockType _cardDidPick;
    CDUnknownBlockType _cardDidConfirmPick;
    CDUnknownBlockType _cardDidCancelPick;
    OCRCameraView *_cameraView;
    UILabel *_tipLabel;
    UIBorderLabel *_centerLabel;
    DTCameraScanView *_scanView;
    UIButton *_takePhotoBtn;
    UIImage *_caputuredImage;
}

@property(nonatomic) _Bool breathing; // @synthesize breathing=_breathing;
@property(retain, nonatomic) UIImage *caputuredImage; // @synthesize caputuredImage=_caputuredImage;
@property(retain, nonatomic) UIButton *takePhotoBtn; // @synthesize takePhotoBtn=_takePhotoBtn;
@property(retain, nonatomic) DTCameraScanView *scanView; // @synthesize scanView=_scanView;
@property(retain, nonatomic) UIBorderLabel *centerLabel; // @synthesize centerLabel=_centerLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) OCRCameraView *cameraView; // @synthesize cameraView=_cameraView;
@property(copy, nonatomic) CDUnknownBlockType cardDidCancelPick; // @synthesize cardDidCancelPick=_cardDidCancelPick;
@property(copy, nonatomic) CDUnknownBlockType cardDidConfirmPick; // @synthesize cardDidConfirmPick=_cardDidConfirmPick;
@property(copy, nonatomic) CDUnknownBlockType cardDidPick; // @synthesize cardDidPick=_cardDidPick;
@property(copy, nonatomic) CDUnknownBlockType captureDidCancel; // @synthesize captureDidCancel=_captureDidCancel;
@property(copy, nonatomic) CDUnknownBlockType capturePic; // @synthesize capturePic=_capturePic;
@property(nonatomic) _Bool isPersent; // @synthesize isPersent=_isPersent;
- (void).cxx_destruct;
- (void)showPreviewWithImage:(id)arg1;
- (void)finishTakeCard:(id)arg1;
- (id)getSubImageFrom:(id)arg1 WithRect:(struct CGRect)arg2;
- (void)takePhoto:(id)arg1;
- (id)cropImageFrom:(id)arg1;
- (void)reTakeImageBtnDidPress:(id)arg1;
- (void)takeImageBtnDidPress:(id)arg1;
- (void)cancelBtnDidPress:(id)arg1;
- (double)cameraBorderOriginY;
- (double)cameraBorderOriginX;
- (double)cameraBorderHeight;
- (double)cameraBorderWidth;
- (void)breathe;
- (id)reTakeImageBtn;
- (id)takeImageBtn;
- (void)stopCapture;
- (void)setCardDidRecognizingFailure:(id)arg1;
- (void)setCardDidRecognizingProcess:(double)arg1 time:(double)arg2;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)updateAuthorizationCloudSetting:(_Bool)arg1;
- (id)authorizationCloudSetting;
- (void)turnOnCamera;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showScanTips;
- (void)showMore;
- (void)viewDidLoad;
- (void)dealloc;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;

@end

