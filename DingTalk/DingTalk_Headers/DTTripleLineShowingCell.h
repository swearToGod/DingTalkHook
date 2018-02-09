//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCell.h"

@class DTBadgeView, DTIconView, DTTripleLineShowingCellItem, NSArray, UIImageView, UILabel;

@interface DTTripleLineShowingCell : DTBaseCell
{
    DTTripleLineShowingCellItem *_cellItem;
    DTIconView *_operationIconView;
    DTIconView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_remarkTitleLabel;
    DTIconView *_signIconView;
    DTIconView *_statusIconView;
    DTIconView *_detailIconView;
    DTBadgeView *_badgeView;
    DTIconView *_commentIconView;
    UIImageView *_indicatorView;
    NSArray *_medalViews;
}

@property(copy, nonatomic) NSArray *medalViews; // @synthesize medalViews=_medalViews;
@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) DTIconView *commentIconView; // @synthesize commentIconView=_commentIconView;
@property(retain, nonatomic) DTBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) DTIconView *detailIconView; // @synthesize detailIconView=_detailIconView;
@property(retain, nonatomic) DTIconView *statusIconView; // @synthesize statusIconView=_statusIconView;
@property(retain, nonatomic) DTIconView *signIconView; // @synthesize signIconView=_signIconView;
@property(retain, nonatomic) UILabel *remarkTitleLabel; // @synthesize remarkTitleLabel=_remarkTitleLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DTIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) DTIconView *operationIconView; // @synthesize operationIconView=_operationIconView;
@property(retain, nonatomic) DTTripleLineShowingCellItem *cellItem; // @synthesize cellItem=_cellItem;
- (void).cxx_destruct;
- (double)calculateWidthForView:(id)arg1 remindWidth:(double)arg2;
- (void)layoutSubViewsForCell;
- (void)configCellWithItem:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

