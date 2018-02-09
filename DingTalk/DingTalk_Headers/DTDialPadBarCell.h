//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class DTDialPadCellData, UIImageView, UILabel;

@interface DTDialPadBarCell : UICollectionViewCell
{
    DTDialPadCellData *_data;
    UIImageView *_imageView;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)_generateImageWithColor:(id)arg1 size:(struct CGSize)arg2 isHighlight:(_Bool)arg3;
- (void)_refreshUIWhenCellDataChanged;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
@property(retain, nonatomic) DTDialPadCellData *data; // @synthesize data=_data;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

