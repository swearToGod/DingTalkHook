//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LVAvatarViewProtocol-Protocol.h"

@class NSArray, NSString, UIImageView, UILabel;
@protocol DTAvatarViewControlDelegate, DTAvatarViewDelegate;

@interface DTAvatarView : UIView <LVAvatarViewProtocol>
{
    _Bool _scalable;
    _Bool _showInactiveSign;
    _Bool _hasAddGestureRecognizer;
    id <DTAvatarViewDelegate> _showDelegate;
    id <DTAvatarViewControlDelegate> _controlDelegate;
    NSArray *_avatarModels;
    unsigned long long _avatarMaxCount;
    long long _avatarSize;
    NSString *_avatarSizeKey;
    NSArray *_avatarImageViews;
    UIImageView *_backgroundImageView;
    UIImageView *_inactiveBGView;
    UILabel *_inavtiveLabel;
}

+ (id)sizeKeyForAvatarSize:(long long)arg1;
+ (id)DT_A11;
+ (id)DT_A10;
+ (id)DT_A9;
+ (id)DT_A8;
+ (id)DT_A7;
+ (id)DT_A6;
+ (id)DT_A5;
+ (id)DT_A4;
+ (id)DT_A3;
+ (id)DT_A2;
+ (id)DT_A1;
+ (id)dt_avatarWithSize:(long long)arg1;
@property(retain, nonatomic) UILabel *inavtiveLabel; // @synthesize inavtiveLabel=_inavtiveLabel;
@property(retain, nonatomic) UIImageView *inactiveBGView; // @synthesize inactiveBGView=_inactiveBGView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) _Bool hasAddGestureRecognizer; // @synthesize hasAddGestureRecognizer=_hasAddGestureRecognizer;
@property(copy, nonatomic) NSArray *avatarImageViews; // @synthesize avatarImageViews=_avatarImageViews;
@property(copy, nonatomic) NSString *avatarSizeKey; // @synthesize avatarSizeKey=_avatarSizeKey;
@property(nonatomic) long long avatarSize; // @synthesize avatarSize=_avatarSize;
@property(nonatomic) _Bool showInactiveSign; // @synthesize showInactiveSign=_showInactiveSign;
@property(nonatomic) unsigned long long avatarMaxCount; // @synthesize avatarMaxCount=_avatarMaxCount;
@property(copy, nonatomic) NSArray *avatarModels; // @synthesize avatarModels=_avatarModels;
@property(nonatomic) __weak id <DTAvatarViewControlDelegate> controlDelegate; // @synthesize controlDelegate=_controlDelegate;
@property(nonatomic) __weak id <DTAvatarViewDelegate> showDelegate; // @synthesize showDelegate=_showDelegate;
@property(nonatomic) _Bool scalable; // @synthesize scalable=_scalable;
- (void).cxx_destruct;
- (void)resetAvatarImageViews;
- (void)layoutInavtiveView;
- (void)layoutSubviews;
- (void)refreshAvatar;
- (void)longPressEvent:(id)arg1;
- (void)clickEvent:(id)arg1;
- (void)addGestureRecognizer;
- (id)avatarViewImage;
- (void)setBackgroundImage:(id)arg1;
- (void)setFixedImage:(id)arg1;
- (void)setAvatarSize;
- (void)addAllSubViews;
- (void)lv_updateWithUid:(long long)arg1;
- (void)dtc_setAvatarWithEmail:(id)arg1 nick:(id)arg2;
- (void)setAvatarHandler:(id)arg1;
- (id)avatarHandler;
- (void)setAvatarModelHandler:(id)arg1;
- (id)avatarModelHandler;
- (void)setAvatarHandler:(id)arg1;
- (id)avatarHandler;
- (void)dt_setBizModels:(id)arg1;
- (void)dt_setAvatarModels:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

