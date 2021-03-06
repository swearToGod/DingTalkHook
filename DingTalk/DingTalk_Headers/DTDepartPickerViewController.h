//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactBaseViewController.h"

#import "DTCrumbViewDataSource-Protocol.h"
#import "DTCrumbViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class DTCrumbView, DTDepartment, DTEmptyResultView, NSArray, NSString, UIActivityIndicatorView, UITableView;

@interface DTDepartPickerViewController : DTContactBaseViewController <UITableViewDataSource, UITableViewDelegate, DTCrumbViewDelegate, DTCrumbViewDataSource, UITextFieldDelegate>
{
    _Bool _enableCreateDepartment;
    _Bool _gotoRootDepartment;
    DTDepartment *_department;
    long long _popToIndex;
    UITableView *_contactTableView;
    NSArray *_contactDataSource;
    DTCrumbView *_crumbView;
    NSArray *_crumbDataSource;
    UIActivityIndicatorView *_indicatorView;
    unsigned long long _tableViewCellStyle;
    NSArray *_currentOrgRelations;
    DTEmptyResultView *_emptyView;
}

@property(retain, nonatomic) DTEmptyResultView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) NSArray *currentOrgRelations; // @synthesize currentOrgRelations=_currentOrgRelations;
@property(nonatomic) unsigned long long tableViewCellStyle; // @synthesize tableViewCellStyle=_tableViewCellStyle;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) NSArray *crumbDataSource; // @synthesize crumbDataSource=_crumbDataSource;
@property(retain, nonatomic) DTCrumbView *crumbView; // @synthesize crumbView=_crumbView;
@property(retain, nonatomic) NSArray *contactDataSource; // @synthesize contactDataSource=_contactDataSource;
@property(retain, nonatomic) UITableView *contactTableView; // @synthesize contactTableView=_contactTableView;
@property(nonatomic) _Bool gotoRootDepartment; // @synthesize gotoRootDepartment=_gotoRootDepartment;
@property(nonatomic) _Bool enableCreateDepartment; // @synthesize enableCreateDepartment=_enableCreateDepartment;
@property(nonatomic) long long popToIndex; // @synthesize popToIndex=_popToIndex;
@property(retain, nonatomic) DTDepartment *department; // @synthesize department=_department;
- (void).cxx_destruct;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)addDepartmentToSectionFirstIndexAndSelect:(id)arg1;
- (void)addDepartment;
- (void)createDepartmentWithName:(id)arg1;
- (void)showsDepartments:(id)arg1;
- (void)subDepartListOfDepartment:(id)arg1 cursor:(long long)arg2;
- (void)contactCell:(id)arg1 didSelectedWithContactItem:(id)arg2;
- (void)gotoSubDepartmentListOfDepartment:(id)arg1;
- (void)gotoSubDepartmentListOfDepartment:(id)arg1 animated:(_Bool)arg2;
- (void)showsCrumbsWithOrgRelations:(id)arg1;
- (void)backToViewControllerAtIndex;
- (void)popToBack;
- (void)cancelButtonPressed;
- (id)pickNavigationController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)crumbView:(id)arg1 cellForColumnAtColumnIndex:(long long)arg2;
- (double)crumbView:(id)arg1 heightForColumnAtColumnIndex:(long long)arg2;
- (long long)numberOfColumnsInCrumbView:(id)arg1;
- (void)loadDatasource;
- (void)loadComponent;
- (void)pickerDatasourceDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

