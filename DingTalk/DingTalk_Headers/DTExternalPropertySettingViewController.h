//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTIcon, DTSectionItem, DTTableLoadingView;

@interface DTExternalPropertySettingViewController : DTTableViewController
{
    long long _orgId;
    DTTableLoadingView *_loadingView;
    DTSectionItem *_extSection;
    DTIcon *_requiredIcon;
}

@property(retain, nonatomic) DTIcon *requiredIcon; // @synthesize requiredIcon=_requiredIcon;
@property(retain, nonatomic) DTSectionItem *extSection; // @synthesize extSection=_extSection;
@property(retain, nonatomic) DTTableLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (void)removeExtField:(id)arg1 andItem:(id)arg2;
- (void)gotoEditingField:(id)arg1 andItem:(id)arg2;
- (id)createAddingFieldItem;
- (id)createExtFieldItem:(id)arg1;
- (id)createDefaultFieldItem:(id)arg1 canEdit:(_Bool)arg2;
- (void)showsFields:(id)arg1;
- (void)loadDatasource;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadComponent;
- (void)viewDidLoad;

@end

