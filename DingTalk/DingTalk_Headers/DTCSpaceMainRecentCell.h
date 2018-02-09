//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTCSpaceBaseCell.h"

@class DTBadgeView, UIImageView, UILabel;

@interface DTCSpaceMainRecentCell : DTCSpaceBaseCell
{
    DTBadgeView *_badgeView;
    UILabel *_iconLabel;
    UILabel *_nameLabel;
    UIImageView *_arrowImageView;
}

@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain, nonatomic) DTBadgeView *badgeView; // @synthesize badgeView=_badgeView;
- (void).cxx_destruct;
- (void)configCellWithModel:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

