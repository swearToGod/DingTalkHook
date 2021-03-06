//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTPlaceHolderTextView, UIButton, UIImageView;
@protocol DTRedEnvelopGoodTimePickDelegate;

@interface DTRedEnvelopGoodTimePickCell : UIView
{
    id <DTRedEnvelopGoodTimePickDelegate> _delegate;
    long long _maxInputCnt;
    DTPlaceHolderTextView *_textInputView;
    UIImageView *_topLine;
    UIImageView *_middleLine;
    UIImageView *_bottomLine;
    UIButton *_pickBtn;
    UIButton *_calBtn;
    UIImageView *_leftTopImageView;
    UIImageView *_rightTopImageView;
    UIImageView *_leftBottomImageView;
    UIImageView *_rightBottomImageView;
}

@property(retain, nonatomic) UIImageView *rightBottomImageView; // @synthesize rightBottomImageView=_rightBottomImageView;
@property(retain, nonatomic) UIImageView *leftBottomImageView; // @synthesize leftBottomImageView=_leftBottomImageView;
@property(retain, nonatomic) UIImageView *rightTopImageView; // @synthesize rightTopImageView=_rightTopImageView;
@property(retain, nonatomic) UIImageView *leftTopImageView; // @synthesize leftTopImageView=_leftTopImageView;
@property(retain, nonatomic) UIButton *calBtn; // @synthesize calBtn=_calBtn;
@property(retain, nonatomic) UIButton *pickBtn; // @synthesize pickBtn=_pickBtn;
@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *middleLine; // @synthesize middleLine=_middleLine;
@property(retain, nonatomic) UIImageView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) DTPlaceHolderTextView *textInputView; // @synthesize textInputView=_textInputView;
@property(nonatomic) long long maxInputCnt; // @synthesize maxInputCnt=_maxInputCnt;
@property(nonatomic) __weak id <DTRedEnvelopGoodTimePickDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)inputTextDidChange:(id)arg1;
- (void)inputTextDidEndEditing:(id)arg1;
- (void)inputTextDidBeginEditing:(id)arg1;
- (void)onTapCal:(id)arg1;
- (void)onTapPick:(id)arg1;
- (void)configWithGoodTime:(id)arg1 serverTime:(id)arg2 explain:(id)arg3;
- (void)configViews;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

