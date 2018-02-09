//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTCallManageModel, DTEmptyResultView;

@interface DTConferenceManageViewController : DTTableViewController
{
    _Bool _hasFixUI;
    DTCallManageModel *_currentModel;
    DTEmptyResultView *_emptyView;
}

@property(nonatomic) _Bool hasFixUI; // @synthesize hasFixUI=_hasFixUI;
@property(retain, nonatomic) DTEmptyResultView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) DTCallManageModel *currentModel; // @synthesize currentModel=_currentModel;
- (void).cxx_destruct;
- (void)showTestTitle:(id)arg1 content:(id)arg2;
- (void)alertAction:(id)arg1;
- (void)jumpAction:(id)arg1;
- (_Bool)enableAlertModel:(id)arg1;
- (_Bool)enableJumpModel:(id)arg1;
- (_Bool)enableMiddleBottom:(id)arg1;
- (_Bool)enableMiddleDetails:(id)arg1;
- (void)changeBizOrgRPCWithModel:(id)arg1 cardType:(long long)arg2;
- (void)doChangeBizOrg:(id)arg1;
- (void)changeBizOrg:(id)arg1;
- (_Bool)updateADSaveLocalModel:(id)arg1 hasClose:(_Bool)arg2;
- (_Bool)updateRedSaveLocalModel:(id)arg1 hasShow:(_Bool)arg2 hasTap:(_Bool)arg3;
- (id)getBootomCellItemWithModel:(id)arg1;
- (void)tableView:(id)arg1 rowWithCell:(id)arg2 withItem:(id)arg3 indexPath:(id)arg4;
- (id)getMiddleCellItemWithModel:(id)arg1;
- (id)getTopCellItemWithModel:(id)arg1;
- (id)getADCellItemWithModel:(id)arg1;
- (id)getCradSectionHeaderView:(id)arg1;
- (id)getCardSectionItem:(id)arg1;
- (id)getADSectionItem:(id)arg1;
- (void)refreshUI:(id)arg1;
- (_Bool)checkIfShowWithReddotModel:(id)arg1;
- (_Bool)checkIfShowReddotWithCardModel:(id)arg1;
- (void)checkIfRefreshReddotWithModel:(id)arg1;
- (void)updateCallManageInfoToLocal:(id)arg1 withOrgId:(long long)arg2;
- (id)loadCallManageInfoFromLocalWithOrgId:(long long)arg1;
- (void)loadCallManageInfo;
- (void)loadData;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didReceiveMemoryWarning;

@end

