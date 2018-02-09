//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;
@protocol DTMessageToolBarCamaraViewDelegate;

@interface DTMessageToolBarCameraView : UIView
{
    id <DTMessageToolBarCamaraViewDelegate> _delegate;
    UIButton *_camaraBtn;
    UIImageView *_maskImageView;
}

@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UIButton *camaraBtn; // @synthesize camaraBtn=_camaraBtn;
@property(nonatomic) __weak id <DTMessageToolBarCamaraViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (void)addGestureRecognizers;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureToolBarCamaraView;
- (void)configWithIconColor:(id)arg1;

@end

