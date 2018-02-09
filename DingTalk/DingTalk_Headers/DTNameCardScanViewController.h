//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "LWAutoPicViewDelegate-Protocol.h"

@class DTCameraScanView, LWAutoPicView, NSString, UIButton, UILabel;

@interface DTNameCardScanViewController : DTViewController <LWAutoPicViewDelegate>
{
    _Bool _isPresent;
    CDUnknownBlockType _capturePic;
    CDUnknownBlockType _captureDidCancel;
    LWAutoPicView *_picView;
    UIButton *_takePhotoBtn;
    UILabel *_tipLabel;
    DTCameraScanView *_scanView;
}

@property(retain, nonatomic) DTCameraScanView *scanView; // @synthesize scanView=_scanView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIButton *takePhotoBtn; // @synthesize takePhotoBtn=_takePhotoBtn;
@property(retain, nonatomic) LWAutoPicView *picView; // @synthesize picView=_picView;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
@property(copy, nonatomic) CDUnknownBlockType captureDidCancel; // @synthesize captureDidCancel=_captureDidCancel;
@property(copy, nonatomic) CDUnknownBlockType capturePic; // @synthesize capturePic=_capturePic;
- (void).cxx_destruct;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveCardToAlumbImage:(id)arg1;
- (id)imageInMaskView:(id)arg1;
- (void)fetchAutoImage:(id)arg1;
- (void)stopCapture;
- (void)close:(id)arg1;
- (void)singleTap:(id)arg1;
- (void)cancelBtnDidPress:(id)arg1;
- (void)takePhoto:(id)arg1;
- (double)cameraBorderOriginY;
- (double)cameraBorderOriginX;
- (double)cameraBorderHeight;
- (double)cameraBorderWidth;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showScanTips;
- (void)showMore;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

