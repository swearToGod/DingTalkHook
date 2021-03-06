//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTLabel, DTSkinImageView, NSArray, UIButton, UIImageView, UILabel, UISegmentedControl, UITapGestureRecognizer;

@interface DTDingCreateSettingItemView : UIView
{
    DTLabel *_titleLabel;
    DTLabel *_contentLabel;
    UILabel *_hintLabel;
    DTSkinImageView *_arrowView;
    DTLabel *_accessoryLabel;
    UITapGestureRecognizer *_tapGesture;
    long long _style;
    NSArray *_segmentTitles;
    CDUnknownBlockType _segmentSelectedBlock;
    CDUnknownBlockType _cleanClickBlock;
    UISegmentedControl *_segmentControl;
    UIButton *_deleteBtn;
    UIImageView *_deadlineIcon;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *deadlineIcon; // @synthesize deadlineIcon=_deadlineIcon;
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UISegmentedControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(copy, nonatomic) CDUnknownBlockType cleanClickBlock; // @synthesize cleanClickBlock=_cleanClickBlock;
@property(copy, nonatomic) CDUnknownBlockType segmentSelectedBlock; // @synthesize segmentSelectedBlock=_segmentSelectedBlock;
@property(copy, nonatomic) NSArray *segmentTitles; // @synthesize segmentTitles=_segmentTitles;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(readonly, nonatomic) DTLabel *accessoryLabel; // @synthesize accessoryLabel=_accessoryLabel;
@property(readonly, nonatomic) DTSkinImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(readonly, nonatomic) DTLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(readonly, nonatomic) DTLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)onDeleteIconClick:(id)arg1;
- (void)cleanContent;
- (void)showBottomLine:(_Bool)arg1;
- (void)showContentLabel:(id)arg1;
- (void)segmentClicked:(id)arg1;
- (void)setSegmentSelectedIndex:(long long)arg1;
- (void)setSegmentControlIndex:(id)arg1 enable:(_Bool)arg2;
- (void)addSegmentControl:(id)arg1 selectedIndex:(long long)arg2 selectedBlock:(CDUnknownBlockType)arg3;
- (void)addSegmentControl:(id)arg1 selectedBlock:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

