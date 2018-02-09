//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIColor;
@protocol DTMessageToolBarAudioViewDelegate;

@interface DTMessageToolBarAudioView : UIView
{
    _Bool _showRecordingActionView;
    id <DTMessageToolBarAudioViewDelegate> _delegate;
    UIButton *_audioBtn;
    UIColor *_iconColor;
}

@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(retain, nonatomic) UIButton *audioBtn; // @synthesize audioBtn=_audioBtn;
@property(nonatomic) __weak id <DTMessageToolBarAudioViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTap:(id)arg1;
- (void)updateAudioButtonAppearance:(_Bool)arg1;
- (void)updateAudioButtonAppearance;
- (void)configWithIconColor:(id)arg1;
- (void)setupToolBarAudioView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

