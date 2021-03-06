//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTBindAndActiveRequestModel, DTOrgAppBindConfigModel, NSArray, NSOrderedSet, NSString, UIButton, UIView;
@protocol DTOrganization;

@interface DTAlphaSettingViewController : DTTableViewController
{
    _Bool _autoSelectWiFiName;
    _Bool _notifyMainAdmin;
    int _sock;
    NSOrderedSet *_selectedPersons;
    NSOrderedSet *_selectedDepartments;
    DTBindAndActiveRequestModel *_settingModel;
    id <DTOrganization> _selectOrgInfo;
    DTOrgAppBindConfigModel *_orgAppBindConfigModel;
    NSString *_selectWiFiName;
    UIView *_bottomView;
    UIButton *_confirmBtn;
    NSString *_jumpUrl;
    NSArray *_selectedPersonsForServer;
    NSArray *_selectedDepartmentsForServer;
    NSString *_contactPickResultString;
}

@property(copy, nonatomic) NSString *contactPickResultString; // @synthesize contactPickResultString=_contactPickResultString;
@property(nonatomic) _Bool notifyMainAdmin; // @synthesize notifyMainAdmin=_notifyMainAdmin;
@property(copy, nonatomic) NSArray *selectedDepartmentsForServer; // @synthesize selectedDepartmentsForServer=_selectedDepartmentsForServer;
@property(copy, nonatomic) NSArray *selectedPersonsForServer; // @synthesize selectedPersonsForServer=_selectedPersonsForServer;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) _Bool autoSelectWiFiName; // @synthesize autoSelectWiFiName=_autoSelectWiFiName;
@property(copy, nonatomic) NSString *selectWiFiName; // @synthesize selectWiFiName=_selectWiFiName;
@property(retain, nonatomic) DTOrgAppBindConfigModel *orgAppBindConfigModel; // @synthesize orgAppBindConfigModel=_orgAppBindConfigModel;
@property(copy, nonatomic) id <DTOrganization> selectOrgInfo; // @synthesize selectOrgInfo=_selectOrgInfo;
@property(nonatomic) int sock; // @synthesize sock=_sock;
@property(retain, nonatomic) DTBindAndActiveRequestModel *settingModel; // @synthesize settingModel=_settingModel;
- (void).cxx_destruct;
- (_Bool)checkEnableNetScope;
- (void)goToPushVC:(id)arg1;
- (void)jumpOpenUrl:(id)arg1;
- (id)amManagerOrgs;
- (id)getRPCModel;
- (void)showBindError:(id)arg1;
- (void)confirm:(id)arg1;
- (void)pushUserGuide:(id)arg1;
- (void)recordScopeTipStatus:(_Bool)arg1;
- (_Bool)hasScopeTipBeenShown;
@property(copy, nonatomic) NSOrderedSet *selectedDepartments; // @synthesize selectedDepartments=_selectedDepartments;
@property(copy, nonatomic) NSOrderedSet *selectedPersons; // @synthesize selectedPersons=_selectedPersons;
- (id)buildContactPickResultString:(id)arg1 personIdentifiers:(id)arg2;
- (_Bool)checkIfAllMembersSelected:(id)arg1 personIdentifiers:(id)arg2;
- (void)showContactPicker;
- (id)getNetScopeSectionItem;
- (id)getWiFiInfoSectionItem;
- (id)getBindTeamSectionItem;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadSectionData;
- (void)loadCompoment;
- (void)cancel;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;

@end

