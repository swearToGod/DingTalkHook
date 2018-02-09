//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactBaseViewController.h"

#import "DTCrumbViewDataSource-Protocol.h"
#import "DTCrumbViewDelegate-Protocol.h"
#import "DTDepartInviteListViewControllerDelegate-Protocol.h"
#import "DTLoadMoreDelegate-Protocol.h"
#import "DTSearchDisplayControllerDelegate-Protocol.h"
#import "DTTableViewHandlerDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class DTBizConversation, DTContactRelation, DTCrumbView, DTEmptyResultView, DTGroupInvite, DTInviteTipsView, DTInviteTipsViewModel, DTLoadMoreController, DTOrganization, DTSWHrmModel, DTSearchController, DTSectionItem, DTTableViewDataSource, DTTableViewHandler, NSArray, NSDictionary, NSString, UIActivityIndicatorView, UIButton, UITableView, UIView, UTShareContent;

@interface DTOrganizationRelationViewController : DTContactBaseViewController <DTTableViewHandlerDelegate, UISearchBarDelegate, DTSearchDisplayControllerDelegate, DTCrumbViewDelegate, DTCrumbViewDataSource, DTLoadMoreDelegate, DTDepartInviteListViewControllerDelegate, MFMessageComposeViewControllerDelegate>
{
    _Bool _hideRootCrumb;
    _Bool _isEditingMode;
    _Bool _showAddStaff;
    _Bool _hasManageCurrentDepartRight;
    _Bool _needRefreshDataInViewWillAppear;
    _Bool _hasGetRequestDataSource;
    DTContactRelation *_relation;
    NSString *_rootCrumbName;
    long long _popToIndex;
    NSString *_tips;
    CDUnknownBlockType _departDidRemoveInEditing;
    CDUnknownBlockType _departDidUpdateInEditting;
    DTCrumbView *_crumbView;
    NSArray *_crumbDataSource;
    UITableView *_contactTablView;
    DTTableViewHandler *_contactTableViewHandler;
    DTTableViewDataSource *_contactDataSource;
    DTSectionItem *_addDepartMasterSection;
    DTSectionItem *_departSection;
    DTSectionItem *_memberSection;
    DTSectionItem *_inviteSection;
    DTSearchController *_searchController;
    DTLoadMoreController *_loadMoreController;
    UIActivityIndicatorView *_indicatorView;
    DTOrganization *_organization;
    UIView *_actionBackground;
    UIButton *_addDepartButton;
    UIButton *_addMemberButton;
    UIButton *_editButton;
    DTEmptyResultView *_emptyView;
    UIView *_noRightHintView;
    UIView *_headerView;
    DTInviteTipsView *_inviteView;
    DTInviteTipsViewModel *_inviteModel;
    UIView *_tipsView;
    DTGroupInvite *_groupInvite;
    UTShareContent *_shareContent;
    DTBizConversation *_conversation;
    NSDictionary *_shareData;
    unsigned long long _masterSetStatus;
    DTSWHrmModel *_hrmInfo;
}

@property(retain, nonatomic) DTSWHrmModel *hrmInfo; // @synthesize hrmInfo=_hrmInfo;
@property(nonatomic) unsigned long long masterSetStatus; // @synthesize masterSetStatus=_masterSetStatus;
@property(retain, nonatomic) NSDictionary *shareData; // @synthesize shareData=_shareData;
@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) UTShareContent *shareContent; // @synthesize shareContent=_shareContent;
@property(retain, nonatomic) DTGroupInvite *groupInvite; // @synthesize groupInvite=_groupInvite;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) DTInviteTipsViewModel *inviteModel; // @synthesize inviteModel=_inviteModel;
@property(retain, nonatomic) DTInviteTipsView *inviteView; // @synthesize inviteView=_inviteView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool hasGetRequestDataSource; // @synthesize hasGetRequestDataSource=_hasGetRequestDataSource;
@property(retain, nonatomic) UIView *noRightHintView; // @synthesize noRightHintView=_noRightHintView;
@property(retain, nonatomic) DTEmptyResultView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIButton *addMemberButton; // @synthesize addMemberButton=_addMemberButton;
@property(retain, nonatomic) UIButton *addDepartButton; // @synthesize addDepartButton=_addDepartButton;
@property(retain, nonatomic) UIView *actionBackground; // @synthesize actionBackground=_actionBackground;
@property(nonatomic) _Bool needRefreshDataInViewWillAppear; // @synthesize needRefreshDataInViewWillAppear=_needRefreshDataInViewWillAppear;
@property(retain, nonatomic) DTOrganization *organization; // @synthesize organization=_organization;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(retain, nonatomic) DTSearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) DTSectionItem *inviteSection; // @synthesize inviteSection=_inviteSection;
@property(retain, nonatomic) DTSectionItem *memberSection; // @synthesize memberSection=_memberSection;
@property(retain, nonatomic) DTSectionItem *departSection; // @synthesize departSection=_departSection;
@property(retain, nonatomic) DTSectionItem *addDepartMasterSection; // @synthesize addDepartMasterSection=_addDepartMasterSection;
@property(retain, nonatomic) DTTableViewDataSource *contactDataSource; // @synthesize contactDataSource=_contactDataSource;
@property(retain, nonatomic) DTTableViewHandler *contactTableViewHandler; // @synthesize contactTableViewHandler=_contactTableViewHandler;
@property(retain, nonatomic) UITableView *contactTablView; // @synthesize contactTablView=_contactTablView;
@property(retain, nonatomic) NSArray *crumbDataSource; // @synthesize crumbDataSource=_crumbDataSource;
@property(retain, nonatomic) DTCrumbView *crumbView; // @synthesize crumbView=_crumbView;
@property(copy, nonatomic) CDUnknownBlockType departDidUpdateInEditting; // @synthesize departDidUpdateInEditting=_departDidUpdateInEditting;
@property(copy, nonatomic) CDUnknownBlockType departDidRemoveInEditing; // @synthesize departDidRemoveInEditing=_departDidRemoveInEditing;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) _Bool hasManageCurrentDepartRight; // @synthesize hasManageCurrentDepartRight=_hasManageCurrentDepartRight;
@property(nonatomic) _Bool showAddStaff; // @synthesize showAddStaff=_showAddStaff;
@property(nonatomic) _Bool isEditingMode; // @synthesize isEditingMode=_isEditingMode;
@property(nonatomic) long long popToIndex; // @synthesize popToIndex=_popToIndex;
@property(nonatomic) _Bool hideRootCrumb; // @synthesize hideRootCrumb=_hideRootCrumb;
@property(copy, nonatomic) NSString *rootCrumbName; // @synthesize rootCrumbName=_rootCrumbName;
@property(retain, nonatomic) DTContactRelation *relation; // @synthesize relation=_relation;
- (void).cxx_destruct;
- (id)iconImageWithText:(id)arg1 tintColor:(id)arg2;
- (id)attachmentIconWithTitle:(id)arg1 color:(id)arg2;
- (void)changeDepartName:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)showMessageViewWithReceivers:(id)arg1 body:(id)arg2;
- (void)shareToSMSWithShareContent:(id)arg1;
- (void)sendShareInfoToConversation:(id)arg1;
- (void)shareToDingTalk;
- (void)shareWithGroupInvite:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)layoutTipsView;
- (void)editButtonPressed:(id)arg1;
- (void)addMemberButtonPressed:(id)arg1;
- (void)addDepartButtonPressed:(id)arg1;
- (void)addDepartmentToSectionFirstIndex:(id)arg1;
- (void)batchAddSuccess;
- (void)addEnterpriseCardBatch;
- (void)addEnterpriseCardByManual;
- (void)addEnterpriseCard;
- (void)addDepartment;
- (void)editEnterpriseCard:(id)arg1 withContactItem:(id)arg2 showSubordinate:(_Bool)arg3;
- (long long)currentDepartmentId;
- (void)popToRootVC;
- (void)quitOrganization;
- (void)upgradeToAuthOrganization;
- (void)configEmptyViewButton:(_Bool)arg1;
- (void)refreshActionBackgroundWithRight:(_Bool)arg1;
- (void)enterEditingMode;
- (_Bool)isAuthOrg;
- (void)moreAction;
- (void)selecteDeptsWithBlock:(CDUnknownBlockType)arg1;
- (void)removeEmployeesWithIds:(id)arg1 inOrg:(long long)arg2 formDeptId:(long long)arg3 vc:(id)arg4;
- (void)batchSelectMemberForOperation:(unsigned long long)arg1 title:(id)arg2;
- (void)batchOperation;
- (void)showActionSheetWithLeaveButtonTitle:(id)arg1 otherButtonTitles:(id)arg2 actionItem:(id)arg3;
- (void)showActionSheetForTeam;
- (void)showActionSheetForOrg;
- (void)showsRelationListOfMasterRelation:(id)arg1 cellItem:(id)arg2;
- (void)reloadDataWithCheckEmpty:(_Bool)arg1;
- (void)reloadData;
- (void)configBaseUserCellItem:(id)arg1 card:(id)arg2 showSubordinate:(_Bool)arg3;
- (id)doubleLineUserItemWithEnterpriseCard:(id)arg1 showSubordinate:(_Bool)arg2;
- (id)singleLineUserItemWithEnterpriseCard:(id)arg1 showSubordinate:(_Bool)arg2;
- (id)deptItemWithDepartment:(id)arg1;
- (void)showsOrganizationRelations:(id)arg1;
- (void)requestsOrgRelationsOfMasterRelation:(id)arg1 offset:(long long)arg2 size:(long long)arg3;
- (void)showsContactInfoWithRelation:(id)arg1;
- (id)crumbsWithOrgRelations:(id)arg1;
- (id)currentDepartment;
- (void)layoutInviteView;
- (void)setDeptMaster;
- (void)configInviteSection;
- (void)selectMemberInDept:(id)arg1 title:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)loadNavItems;
- (void)configEmptyViewWithNoIcon;
- (void)configEmptyViewWithInviteIcon;
- (void)configEmptyViewWithAddIcon;
- (double)safeBottom;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (id)homePageForSearchWithFrame:(struct CGRect)arg1;
- (_Bool)shouldShowHomePageForSearch;
- (id)viewControllerName;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (id)crumbView:(id)arg1 cellForColumnAtColumnIndex:(long long)arg2;
- (double)crumbView:(id)arg1 heightForColumnAtColumnIndex:(long long)arg2;
- (long long)numberOfColumnsInCrumbView:(id)arg1;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)tableViewDidScroll:(id)arg1;
- (void)fetchInactiveMembersWithCursor:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)openInactiveMembersList;
- (_Bool)isMyDepart;
- (void)confirmToCancel;
- (void)dt_fetchInviteList;
- (void)fetchInviteList;
- (void)loadDataSource;
- (void)backToViewControllerAtIndex;
- (void)popToBack;
- (void)loadCompoment;
- (void)manageOrg;
- (void)organizationRelationDidChange:(id)arg1;
- (void)inviteColleagues;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

