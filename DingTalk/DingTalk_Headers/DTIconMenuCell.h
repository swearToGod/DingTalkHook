//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class DTIconMenuItem, DTWebAnimatedImageView, UIImageView, UILabel;

@interface DTIconMenuCell : UICollectionViewCell
{
    DTWebAnimatedImageView *_iconView;
    UIImageView *_bgView;
    UILabel *_menuTitleLabel;
    DTIconMenuItem *_item;
}

@property(retain, nonatomic) DTIconMenuItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UILabel *menuTitleLabel; // @synthesize menuTitleLabel=_menuTitleLabel;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) DTWebAnimatedImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)refreshWithItem:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
