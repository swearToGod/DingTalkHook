//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactTableViewCell.h"

@class UIImageView;
@protocol DTContactTableViewCellDelegate;

@interface DTMobileContactCell : DTContactTableViewCell
{
    id <DTContactTableViewCellDelegate> _delegate;
    UIImageView *_dingCardImageView;
}

+ (double)calculateCellHeight:(id)arg1 cellWidth:(double)arg2;
@property(retain, nonatomic) UIImageView *dingCardImageView; // @synthesize dingCardImageView=_dingCardImageView;
@property(nonatomic) __weak id <DTContactTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)configCellWithContactItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCellStyle:(unsigned long long)arg1 reuseIdentifier:(id)arg2;

@end

