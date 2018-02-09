//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactBaseViewController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class DTSearchBar, DTSectionInfo, NSArray, NSString, UIButton, UIImageView, UILabel, UISearchDisplayController, UITableView, UITextField;

@interface DTAddFriendViewController : DTContactBaseViewController <UITextFieldDelegate, UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UITextField *_mobileInputField;
    UIImageView *_searchImageView;
    DTSearchBar *_searchBar;
    UISearchDisplayController *_searchDC;
    NSArray *_datasource;
    DTSectionInfo *_keySection;
    DTSectionInfo *_contactSection;
    UILabel *_qrLabel;
    UIButton *_qrButton;
    UITableView *_actionTableView;
    NSArray *_actionDatasoure;
}

@property(retain, nonatomic) NSArray *actionDatasoure; // @synthesize actionDatasoure=_actionDatasoure;
@property(retain, nonatomic) UITableView *actionTableView; // @synthesize actionTableView=_actionTableView;
@property(retain, nonatomic) UIButton *qrButton; // @synthesize qrButton=_qrButton;
@property(retain, nonatomic) UILabel *qrLabel; // @synthesize qrLabel=_qrLabel;
@property(retain, nonatomic) DTSectionInfo *contactSection; // @synthesize contactSection=_contactSection;
@property(retain, nonatomic) DTSectionInfo *keySection; // @synthesize keySection=_keySection;
@property(retain, nonatomic) NSArray *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) UISearchDisplayController *searchDC; // @synthesize searchDC=_searchDC;
@property(retain, nonatomic) DTSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIImageView *searchImageView; // @synthesize searchImageView=_searchImageView;
@property(retain, nonatomic) UITextField *mobileInputField; // @synthesize mobileInputField=_mobileInputField;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (_Bool)isNumberString:(id)arg1;
- (void)gotoUnregisterVC:(id)arg1 uid:(long long)arg2;
- (void)gotoContactProfileWithMobileContact:(id)arg1;
- (void)showsMobileContacts:(id)arg1 searchText:(id)arg2;
- (void)searchMobileContactWithSearchText:(id)arg1;
- (void)showMobileSearchingWithPhone:(id)arg1;
- (void)gotoAddMobileContacts;
- (void)gotoScan;
- (void)gotoMyQR;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadDatasource;
- (void)viewDidLoad;
- (_Bool)isPushed;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

