//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTBusinessConfTipView, UILabel;

@interface DTBusinessConfProgress : UIView
{
    UIView *_allDurationView;
    UIView *_progressView;
    UILabel *_infoLabel;
    DTBusinessConfTipView *_tipView;
}

@property(retain, nonatomic) DTBusinessConfTipView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *allDurationView; // @synthesize allDurationView=_allDurationView;
- (void).cxx_destruct;
- (void)updateProgress:(double)arg1 title:(id)arg2 detailTitle:(id)arg3;
- (void)loadCompoment;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

