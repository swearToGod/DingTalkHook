//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

@interface DTProjectorControlPannel : UIButton
{
    unsigned long long _deviceCount;
    UIImageView *_imageView;
    UILabel *_countLabel;
    UILabel *_statusLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long deviceCount;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

