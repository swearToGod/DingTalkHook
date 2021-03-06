//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTAlphaSettingJumpViews, DTAlphaSettingViewModel, UIButton, UIImageView, UILabel;

@interface DTAlphaSettingView : UIView
{
    UIButton *_titleBtn;
    UILabel *_detailLabel;
    UIImageView *_imageView;
    DTAlphaSettingJumpViews *_jumpViews;
    UILabel *_additionalInfoLabel;
    DTAlphaSettingViewModel *_viewModel;
}

@property(retain, nonatomic) DTAlphaSettingViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *additionalInfoLabel; // @synthesize additionalInfoLabel=_additionalInfoLabel;
@property(retain, nonatomic) DTAlphaSettingJumpViews *jumpViews; // @synthesize jumpViews=_jumpViews;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UIButton *titleBtn; // @synthesize titleBtn=_titleBtn;
- (void).cxx_destruct;
- (double)getAttibuteStringHeight:(id)arg1 maxWidth:(double)arg2;
- (void)layoutSubviews;
- (void)refreshUIWithModel:(id)arg1;
- (void)loadCompoment;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

