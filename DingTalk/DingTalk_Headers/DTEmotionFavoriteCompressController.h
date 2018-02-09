//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class UIImage, UIImageView, UIView;

@interface DTEmotionFavoriteCompressController : DTViewController
{
    UIImage *_originImage;
    CDUnknownBlockType _completeBlock;
    CDUnknownBlockType _cancelBlock;
    UIView *_imageBgView;
    UIImageView *_imageView;
    UIView *_bottomView;
    UIView *_borderView;
}

@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *imageBgView; // @synthesize imageBgView=_imageBgView;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;
- (void).cxx_destruct;
- (void)backEvent:(id)arg1;
- (void)confirmAction:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

@end

