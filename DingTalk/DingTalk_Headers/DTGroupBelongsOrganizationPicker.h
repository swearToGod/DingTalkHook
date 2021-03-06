//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTGroupUpgradeViewController.h"

@class DTOrgIdNameModel, NSArray, NSString;

@interface DTGroupBelongsOrganizationPicker : DTGroupUpgradeViewController
{
    NSString *_cid;
    long long _action;
    NSArray *_orgList;
    DTOrgIdNameModel *_currentPickedOrg;
    CDUnknownBlockType _didPickOrgModelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didPickOrgModelBlock; // @synthesize didPickOrgModelBlock=_didPickOrgModelBlock;
@property(retain, nonatomic) DTOrgIdNameModel *currentPickedOrg; // @synthesize currentPickedOrg=_currentPickedOrg;
@property(readonly, nonatomic) NSArray *orgList; // @synthesize orgList=_orgList;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)reloadWithOrgList:(id)arg1;
- (void)fetchOrgListInfo;
- (void)updateWithDataProvider:(id)arg1;
- (void)fetchOrgListIfNeeds;
- (void)showEnterpriseCardWithOrgModel:(id)arg1;
- (void)didPickOrgItem:(id)arg1;
- (void)setupTableDataSource;
- (void)save:(id)arg1;
- (void)setRightBarButtonEnable:(_Bool)arg1;
- (void)setupRightBarButtonItem;
- (id)actionTitle;
- (void)viewDidLoad;
- (id)initWithUpgradeActionHandler:(id)arg1;
- (id)initWithAction:(long long)arg1 cid:(id)arg2;
- (id)initWithAction:(long long)arg1 orgList:(id)arg2;
- (id)initWithAction:(long long)arg1;

@end

