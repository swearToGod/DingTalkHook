//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTAvatarView, DTIconNameView, DTImageView, DTRedEnvelopPickViewItem, UIButton, UIImageView, UILabel;

@interface DTRedEnvelopPickView : UIView
{
    DTRedEnvelopPickViewItem *_item;
    DTAvatarView *_avatarView;
    UIImageView *_ribbonIcon;
    DTImageView *_logoIcon;
    UILabel *_sourceNameLabel;
    UILabel *_redEnvelopTypeLabel;
    UILabel *_congratulationLabel;
    UILabel *_amountLabel;
    UILabel *_redEnvelopNameLabel;
    UIView *_moneyBgView;
    UIButton *_moneyIconButton;
    UIImageView *_headerImageView;
    UIImageView *_footerImageView;
    DTIconNameView *_detailButton;
}

@property(retain, nonatomic) DTIconNameView *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) UIImageView *footerImageView; // @synthesize footerImageView=_footerImageView;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) UIButton *moneyIconButton; // @synthesize moneyIconButton=_moneyIconButton;
@property(retain, nonatomic) UIView *moneyBgView; // @synthesize moneyBgView=_moneyBgView;
@property(retain, nonatomic) UILabel *redEnvelopNameLabel; // @synthesize redEnvelopNameLabel=_redEnvelopNameLabel;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UILabel *congratulationLabel; // @synthesize congratulationLabel=_congratulationLabel;
@property(retain, nonatomic) UILabel *redEnvelopTypeLabel; // @synthesize redEnvelopTypeLabel=_redEnvelopTypeLabel;
@property(retain, nonatomic) UILabel *sourceNameLabel; // @synthesize sourceNameLabel=_sourceNameLabel;
@property(retain, nonatomic) DTImageView *logoIcon; // @synthesize logoIcon=_logoIcon;
@property(retain, nonatomic) UIImageView *ribbonIcon; // @synthesize ribbonIcon=_ribbonIcon;
@property(retain, nonatomic) DTAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) DTRedEnvelopPickViewItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)unpack;
- (void)endLoadingAnimation:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)startLoadingAnimation;
- (void)startRotateOpenLuckyMoneyBtn:(long long)arg1 angle:(double)arg2;
- (void)configWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

