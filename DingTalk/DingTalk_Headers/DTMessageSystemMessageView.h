//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTUserNameLabel, UIImageView, YYLabel;

@interface DTMessageSystemMessageView : UIView
{
    YYLabel *_systemLabel;
    UIImageView *_backgroundImageView;
    DTUserNameLabel *_nameLabel;
}

@property(retain, nonatomic) DTUserNameLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) YYLabel *systemLabel; // @synthesize systemLabel=_systemLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

