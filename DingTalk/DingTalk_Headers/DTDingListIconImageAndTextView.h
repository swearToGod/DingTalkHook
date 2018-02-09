//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTBadgeView, UIImageView, UILabel;

@interface DTDingListIconImageAndTextView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_textLabel;
    DTBadgeView *_badgeView;
}

@property(retain, nonatomic) DTBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)setBadge:(id)arg1;
- (void)setUnreadBadgeNumber:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

