//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTBadgeView, DTFillColorCircleView, UIImageView, UILabel;

@interface DTDingTableActionView : UIView
{
    CDUnknownBlockType _didClickedBlock;
    UIImageView *_iconView;
    UILabel *_titleView;
    UIView *_lineView;
    DTFillColorCircleView *_circleView;
    DTBadgeView *_badgeView;
}

@property(retain, nonatomic) DTBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) DTFillColorCircleView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) CDUnknownBlockType didClickedBlock; // @synthesize didClickedBlock=_didClickedBlock;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1 circleStrokeColor:(id)arg2 circleFillColor:(id)arg3 progress:(double)arg4 allImage:(id)arg5;
- (void)setTitle:(id)arg1 circleStrokeColor:(id)arg2 circleFillColor:(id)arg3 progress:(double)arg4;
- (void)setTitle:(id)arg1 bgImage:(id)arg2;
- (void)tap:(id)arg1;
- (void)layoutSubviews;
- (void)loadComponents;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

