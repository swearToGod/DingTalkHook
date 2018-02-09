//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTButtonView, DTIdentifier, NSArray, NSString;

@interface DTTeamCreateMemberEditViewController : DTTableViewController
{
    _Bool _jobTitleVisiable;
    _Bool _mobileInputVisiable;
    _Bool _deleteable;
    _Bool _canBeContinue;
    DTIdentifier *_iden;
    NSArray *_jobTitleList;
    NSString *_customTitle;
    CDUnknownBlockType _deleteBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _confirmBlock;
    DTIdentifier *_privateIden;
    DTButtonView *_buttonView;
}

@property(retain, nonatomic) DTButtonView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) DTIdentifier *privateIden; // @synthesize privateIden=_privateIden;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(nonatomic) _Bool canBeContinue; // @synthesize canBeContinue=_canBeContinue;
@property(nonatomic) _Bool deleteable; // @synthesize deleteable=_deleteable;
@property(nonatomic) _Bool mobileInputVisiable; // @synthesize mobileInputVisiable=_mobileInputVisiable;
@property(copy, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(nonatomic) _Bool jobTitleVisiable; // @synthesize jobTitleVisiable=_jobTitleVisiable;
@property(copy, nonatomic) NSArray *jobTitleList; // @synthesize jobTitleList=_jobTitleList;
@property(retain, nonatomic) DTIdentifier *iden; // @synthesize iden=_iden;
- (void).cxx_destruct;
- (void)showJobTitleInputWithInitTitle:(id)arg1 showingViewController:(id)arg2;
- (void)pickJobTitle;
- (void)quit;
- (void)cancel;
- (void)createUidIfNeededWithIdentifier:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)save;
- (void)saveAndContinue:(id)arg1;
- (void)loadData;
- (void)dataInitialize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
