//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTGlobalSearcherContactCell.h"

@class UILabel, UIView;

@interface DTGlobalSearcherContactWithTitleCell : DTGlobalSearcherContactCell
{
    UILabel *_subTitleLabel;
    UIView *_subTitleBackground;
}

@property(retain, nonatomic) UIView *subTitleBackground; // @synthesize subTitleBackground=_subTitleBackground;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
- (void).cxx_destruct;
- (void)configCellWithGlobalSearcherItem:(id)arg1;
- (void)layoutCustomSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

