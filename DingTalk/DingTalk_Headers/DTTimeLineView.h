//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTTimeLineViewItem, DTWebImageView, UILabel;

@interface DTTimeLineView : UIView
{
    UILabel *_leftTimeLabel;
    DTWebImageView *_iconImageView;
    UILabel *_rightTimeLabel;
    UIView *_lineView;
    DTTimeLineViewItem *_item;
}

@property(retain, nonatomic) DTTimeLineViewItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *rightTimeLabel; // @synthesize rightTimeLabel=_rightTimeLabel;
@property(retain, nonatomic) DTWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *leftTimeLabel; // @synthesize leftTimeLabel=_leftTimeLabel;
- (void).cxx_destruct;
- (void)configWithItem:(id)arg1;
- (void)layoutViews;

@end

