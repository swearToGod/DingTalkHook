//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTAutoLayoutLabel, DTCircleFeedActionButton, DTCirclePostModel;

@interface DTCircleGalleryBottomView : UIView
{
    DTCirclePostModel *_postModel;
    CDUnknownBlockType _detailButtonDidTapCallback;
    CDUnknownBlockType _likesButtonDidTapCallback;
    CDUnknownBlockType _commentsButtonDidTapCallback;
    DTAutoLayoutLabel *_contentLabel;
    DTCircleFeedActionButton *_likesButton;
    DTCircleFeedActionButton *_commentsButton;
    DTCircleFeedActionButton *_detailButton;
    UIView *_actionButtonsContainer;
    UIView *_divider;
    UIView *_bottomExtendedBackgroundView;
    UIView *_contentBackgroundView;
}

@property(retain, nonatomic) UIView *contentBackgroundView; // @synthesize contentBackgroundView=_contentBackgroundView;
@property(retain, nonatomic) UIView *bottomExtendedBackgroundView; // @synthesize bottomExtendedBackgroundView=_bottomExtendedBackgroundView;
@property(retain, nonatomic) UIView *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) UIView *actionButtonsContainer; // @synthesize actionButtonsContainer=_actionButtonsContainer;
@property(retain, nonatomic) DTCircleFeedActionButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) DTCircleFeedActionButton *commentsButton; // @synthesize commentsButton=_commentsButton;
@property(retain, nonatomic) DTCircleFeedActionButton *likesButton; // @synthesize likesButton=_likesButton;
@property(retain, nonatomic) DTAutoLayoutLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(copy, nonatomic) CDUnknownBlockType commentsButtonDidTapCallback; // @synthesize commentsButtonDidTapCallback=_commentsButtonDidTapCallback;
@property(copy, nonatomic) CDUnknownBlockType likesButtonDidTapCallback; // @synthesize likesButtonDidTapCallback=_likesButtonDidTapCallback;
@property(copy, nonatomic) CDUnknownBlockType detailButtonDidTapCallback; // @synthesize detailButtonDidTapCallback=_detailButtonDidTapCallback;
@property(readonly, nonatomic) DTCirclePostModel *postModel; // @synthesize postModel=_postModel;
- (void).cxx_destruct;
- (void)commentsButtonDidTapHandler:(id)arg1;
- (void)likesButtonDidTapHandler:(id)arg1;
- (void)detailButtonDidTapHandler:(id)arg1;
- (void)updateWithPostModel:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

