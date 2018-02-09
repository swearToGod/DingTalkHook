//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;
@protocol DTDropBoxActionProtocol;

@interface DTDropBoxBottomView : UIView
{
    UIImage *_upImage;
    UIImage *_downImage;
    UIImage *_lineImage;
    UIView *_referenceView;
    double *_headerExpandHeight;
    CDUnknownBlockType _dropBoxToBottomBlock;
    id <DTDropBoxActionProtocol> _actionDelegate;
    double _dropTopLimitPoint;
    double _dropBottomLimitPoint;
    UIImageView *_arrowView;
}

@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(nonatomic) double dropBottomLimitPoint; // @synthesize dropBottomLimitPoint=_dropBottomLimitPoint;
@property(nonatomic) double dropTopLimitPoint; // @synthesize dropTopLimitPoint=_dropTopLimitPoint;
@property(nonatomic) __weak id <DTDropBoxActionProtocol> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(copy, nonatomic) CDUnknownBlockType dropBoxToBottomBlock; // @synthesize dropBoxToBottomBlock=_dropBoxToBottomBlock;
@property(nonatomic) double *headerExpandHeight; // @synthesize headerExpandHeight=_headerExpandHeight;
@property(nonatomic) __weak UIView *referenceView; // @synthesize referenceView=_referenceView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setDropView:(_Bool)arg1 duration:(double)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)closeDropBoxWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)showDropBoxWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)didTap:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)didTap:(id)arg1;
- (void)setArrowViewIsDown:(_Bool)arg1;
- (void)setArrowLineWhenPaning;
- (void)setArrowHidden:(_Bool)arg1;
- (_Bool)isShowDropBox:(id)arg1;
- (void)setArrowColor:(id)arg1;
- (void)didPan:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)didPan:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

