//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTBusinessConfEventView, DTBusinessConfMemberView, NSString, UIButton, UIImageView, UILabel;
@protocol BusinessConfHeaderDelegate, BusinessConfMeberDelegate;

@interface DTBusinessConfChairPersonHeaderView : UIView
{
    id <BusinessConfHeaderDelegate> _delegate;
    id <BusinessConfMeberDelegate> _memberDelegate;
    UIImageView *_background;
    DTBusinessConfMemberView *_avatarView;
    UILabel *_nickLabel;
    UILabel *_infoLabel;
    DTBusinessConfEventView *_eventView;
    long long _timeStamp;
    UIButton *_smsButton;
    UIImageView *_badgeView;
    NSString *_smsContent;
}

@property(copy, nonatomic) NSString *smsContent; // @synthesize smsContent=_smsContent;
@property(retain, nonatomic) UIImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIButton *smsButton; // @synthesize smsButton=_smsButton;
@property(nonatomic) long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) DTBusinessConfEventView *eventView; // @synthesize eventView=_eventView;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) DTBusinessConfMemberView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIImageView *background; // @synthesize background=_background;
@property(nonatomic) __weak id <BusinessConfMeberDelegate> memberDelegate; // @synthesize memberDelegate=_memberDelegate;
@property(nonatomic) __weak id <BusinessConfHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reset;
- (void)entryPWDPressed;
- (void)layoutSubviews;
- (void)reloadEvent:(id)arg1 forceClear:(_Bool)arg2 timeStamp:(long long)arg3;
- (void)reloadMemberInfoView:(id)arg1 confInfoStr:(id)arg2 sizeKey:(id)arg3 entryPwd:(id)arg4;
- (void)loadCompoment;
- (id)initWithFrame:(struct CGRect)arg1;

@end

