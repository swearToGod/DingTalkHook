//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCell.h"

@class DTDingCalendarCellModel, DTWebImageView, UIImageView, UILabel;

@interface DTDingCalendarTableViewCell : DTBaseCell
{
    UIImageView *_sepTopLine;
    UIImageView *_sepBottomLine;
    DTWebImageView *_iconImageView;
    DTDingCalendarCellModel *_cellItem;
    UILabel *_leftTitleLabel;
    UILabel *_leftSubTitleLabel;
    UILabel *_rightTitleLabel;
    UILabel *_rightContentLabel;
    UILabel *_commentLabel;
}

@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UILabel *rightContentLabel; // @synthesize rightContentLabel=_rightContentLabel;
@property(retain, nonatomic) UILabel *rightTitleLabel; // @synthesize rightTitleLabel=_rightTitleLabel;
@property(retain, nonatomic) UILabel *leftSubTitleLabel; // @synthesize leftSubTitleLabel=_leftSubTitleLabel;
@property(retain, nonatomic) UILabel *leftTitleLabel; // @synthesize leftTitleLabel=_leftTitleLabel;
@property(retain, nonatomic) DTDingCalendarCellModel *cellItem; // @synthesize cellItem=_cellItem;
@property(retain, nonatomic) DTWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *sepBottomLine; // @synthesize sepBottomLine=_sepBottomLine;
@property(retain, nonatomic) UIImageView *sepTopLine; // @synthesize sepTopLine=_sepTopLine;
- (void).cxx_destruct;
- (void)configCellWithItem:(id)arg1;
- (void)loadComponents;
- (void)layoutSubViewsForCell;
- (id)initWithCellItem:(id)arg1;

@end

