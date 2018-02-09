//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCell.h"

@class DTDingDetailSubTasksCellItem, DTStatusButton, UIButton, UIImage, UIImageView, UILabel;

@interface DTDingDetailSubTasksCell : DTBaseCell
{
    DTDingDetailSubTasksCellItem *_cellItem;
    UIButton *_checkBoxBtn;
    DTStatusButton *_statusBtn;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_leftDotView;
    UIImageView *_backgroundGrayView;
    UIImage *_backgroundImage;
    UIImage *_listBgImage;
}

@property(retain, nonatomic) UIImage *listBgImage; // @synthesize listBgImage=_listBgImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImageView *backgroundGrayView; // @synthesize backgroundGrayView=_backgroundGrayView;
@property(retain, nonatomic) UIImageView *leftDotView; // @synthesize leftDotView=_leftDotView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DTStatusButton *statusBtn; // @synthesize statusBtn=_statusBtn;
@property(retain, nonatomic) UIButton *checkBoxBtn; // @synthesize checkBoxBtn=_checkBoxBtn;
@property(retain, nonatomic) DTDingDetailSubTasksCellItem *cellItem; // @synthesize cellItem=_cellItem;
- (void).cxx_destruct;
- (void)finishBtnClicked:(id)arg1;
- (id)checkImageWithDingModel:(id)arg1;
- (id)finishStatusTitleWithCount:(unsigned long long)arg1 totalCount:(long long)arg2;
- (void)configCellWithItem:(id)arg1;
- (void)layoutSubViewsForCell;
- (void)addConstraints;
- (void)loadComponents;
- (id)initWithCellItem:(id)arg1;

@end

