//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTAvatarViewControlDelegate-Protocol.h"
#import "DTUserTitleViewDelegate-Protocol.h"

@class DTAuthOrgInfoView, DTAvatarView, DTMyInfoHeaderItem, DTUserNameLabel, DTUserTitleView, NSString, UIButton, UILabel;

@interface DTMyInfoHeaderView : UIView <DTUserTitleViewDelegate, DTAvatarViewControlDelegate>
{
    UIView *_contentView;
    DTAvatarView *_avatarView;
    UIButton *_attachFirstBtn;
    UIButton *_attachSecondBtn;
    UIButton *_attentionBtn;
    DTUserNameLabel *_nameLabel;
    UIButton *_ownnessBtn;
    DTAuthOrgInfoView *_authOrgInfoView;
    UIButton *_createTeamBtn;
    UIButton *_settingMainOrgBtn;
    UILabel *_tipLabel;
    DTUserTitleView *_userTitleView;
    DTMyInfoHeaderItem *_item;
    unsigned long long _type;
    UIButton *_inviteButton;
    UILabel *_cancelLabel;
}

@property(retain, nonatomic) UILabel *cancelLabel; // @synthesize cancelLabel=_cancelLabel;
@property(retain, nonatomic) UIButton *inviteButton; // @synthesize inviteButton=_inviteButton;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) DTMyInfoHeaderItem *item; // @synthesize item=_item;
@property(retain, nonatomic) DTUserTitleView *userTitleView; // @synthesize userTitleView=_userTitleView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIButton *settingMainOrgBtn; // @synthesize settingMainOrgBtn=_settingMainOrgBtn;
@property(retain, nonatomic) UIButton *createTeamBtn; // @synthesize createTeamBtn=_createTeamBtn;
@property(retain, nonatomic) DTAuthOrgInfoView *authOrgInfoView; // @synthesize authOrgInfoView=_authOrgInfoView;
@property(retain, nonatomic) UIButton *ownnessBtn; // @synthesize ownnessBtn=_ownnessBtn;
@property(retain, nonatomic) DTUserNameLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIButton *attentionBtn; // @synthesize attentionBtn=_attentionBtn;
@property(retain, nonatomic) UIButton *attachSecondBtn; // @synthesize attachSecondBtn=_attachSecondBtn;
@property(retain, nonatomic) UIButton *attachFirstBtn; // @synthesize attachFirstBtn=_attachFirstBtn;
@property(retain, nonatomic) DTAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)avatarViewClick:(id)arg1;
- (void)userTitleDidSelect:(id)arg1;
- (void)qrCodeButtonClick;
- (void)ownnessBtnPressed;
- (void)homepageBtnPressed;
- (void)settingMainOrgBtnPressed;
- (void)createTeamBtnPressed;
- (void)headerViewPressed;
- (void)configCallbackForAuthOrgInfoView;
- (void)inviteButtonClicked;
- (void)layoutSubviews;
- (void)loadDataSource;
- (void)loadComponents;
- (void)layoutWithItem:(id)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

