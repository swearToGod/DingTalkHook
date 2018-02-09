//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface DTIndicatorLoadingView : UIView
{
    NSString *_loadingTips;
    UIActivityIndicatorView *_indicatorView;
    UILabel *_tipsLabel;
}

@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(copy, nonatomic) NSString *loadingTips; // @synthesize loadingTips=_loadingTips;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)stopAnimation;
- (void)startAnimation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

