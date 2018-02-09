//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class UIImageView, UILabel;

@interface DTProjectingGuideViewController : DTViewController
{
    CDUnknownBlockType _airplayImageSelectionStatusChangedCallback;
    UILabel *_titleLabel;
    UILabel *_tipsLabel;
    UIImageView *_systemPannelImageView;
    UILabel *_systemPannelLabel;
    UIImageView *_airplaySelectImageView;
    UILabel *_airplaySelectLabel;
    UIImageView *_arrowImageView;
    UIImageView *_lightImageView;
    UIImageView *_iPhoneXImageView;
    UILabel *_iPhoneXLabel;
}

@property(retain, nonatomic) UILabel *iPhoneXLabel; // @synthesize iPhoneXLabel=_iPhoneXLabel;
@property(retain, nonatomic) UIImageView *iPhoneXImageView; // @synthesize iPhoneXImageView=_iPhoneXImageView;
@property(retain, nonatomic) UIImageView *lightImageView; // @synthesize lightImageView=_lightImageView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *airplaySelectLabel; // @synthesize airplaySelectLabel=_airplaySelectLabel;
@property(retain, nonatomic) UIImageView *airplaySelectImageView; // @synthesize airplaySelectImageView=_airplaySelectImageView;
@property(retain, nonatomic) UILabel *systemPannelLabel; // @synthesize systemPannelLabel=_systemPannelLabel;
@property(retain, nonatomic) UIImageView *systemPannelImageView; // @synthesize systemPannelImageView=_systemPannelImageView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType airplayImageSelectionStatusChangedCallback; // @synthesize airplayImageSelectionStatusChangedCallback=_airplayImageSelectionStatusChangedCallback;
- (void).cxx_destruct;
- (void)stopNotifyLightAnimation;
- (void)startNotifyLightAnimation;
- (void)viewWillLayoutSubviews;
- (void)setupUI;
- (_Bool)checkDidSelectAirplayImage;
- (void)notifyAirplayImageNotSelected;
- (void)notifyAirplayImageDidSelected;
- (void)checkProjectStatus;
- (void)appWillResignAvtive:(id)arg1;
- (void)appActive:(id)arg1;
- (void)cancelBtnAction:(id)arg1;
- (_Bool)shouldOverrideBackButton;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

