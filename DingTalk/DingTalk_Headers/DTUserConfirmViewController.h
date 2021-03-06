//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class DTContact, DTEnterpriseCard, DTMyInfoHeaderView, UIButton, UILabel, UIScrollView;

@interface DTUserConfirmViewController : DTViewController
{
    DTEnterpriseCard *_enterpriseCard;
    CDUnknownBlockType _finishBlock;
    UIScrollView *_containerView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    DTMyInfoHeaderView *_userInfoView;
    UIButton *_doneButton;
    DTContact *_currentUser;
}

@property(retain, nonatomic) DTContact *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) DTMyInfoHeaderView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(retain, nonatomic) DTEnterpriseCard *enterpriseCard; // @synthesize enterpriseCard=_enterpriseCard;
- (void).cxx_destruct;
- (void)doneButtonPressed:(id)arg1;
- (void)containerViewPressed:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)showsUserInformation;
- (void)loadDatasource;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

