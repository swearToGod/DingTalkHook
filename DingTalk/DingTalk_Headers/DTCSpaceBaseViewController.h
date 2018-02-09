//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTHorizontalPopdownViewDelegate-Protocol.h"

@class DTCSpaceTopOperationBar, DTDentrySearchController, DTHorizontalPopdownView, NSMutableArray, NSString, UIBarButtonItem, UIView;
@protocol DTDentrySearchInterface;

@interface DTCSpaceBaseViewController : DTViewController <DTHorizontalPopdownViewDelegate>
{
    DTCSpaceTopOperationBar *_operationBar;
    DTHorizontalPopdownView *_filterPopdownView;
    NSMutableArray *_settingItemArray;
    UIView *_filterBackgroundView;
    UIBarButtonItem *_filterItem;
    UIBarButtonItem *_searchItem;
    DTDentrySearchController *_customSearchController;
    id <DTDentrySearchInterface> _searchInterface;
}

+ (_Bool)canOperateFile:(id)arg1 withAccessType:(unsigned long long)arg2;
@property(nonatomic) __weak id <DTDentrySearchInterface> searchInterface; // @synthesize searchInterface=_searchInterface;
@property(retain, nonatomic) DTDentrySearchController *customSearchController; // @synthesize customSearchController=_customSearchController;
@property(retain, nonatomic) UIBarButtonItem *searchItem; // @synthesize searchItem=_searchItem;
@property(retain, nonatomic) UIBarButtonItem *filterItem; // @synthesize filterItem=_filterItem;
@property(retain, nonatomic) UIView *filterBackgroundView; // @synthesize filterBackgroundView=_filterBackgroundView;
@property(retain, nonatomic) NSMutableArray *settingItemArray; // @synthesize settingItemArray=_settingItemArray;
@property(retain, nonatomic) DTHorizontalPopdownView *filterPopdownView; // @synthesize filterPopdownView=_filterPopdownView;
@property(retain, nonatomic) DTCSpaceTopOperationBar *operationBar; // @synthesize operationBar=_operationBar;
- (void).cxx_destruct;
- (_Bool)allowCreateFolderAuthority:(unsigned long long)arg1;
- (_Bool)allowMultipleSelectAuthority:(unsigned long long)arg1;
- (_Bool)allowUploadAuthority:(unsigned long long)arg1;
- (void)horizontalPopdownView:(id)arg1 viewWillHide:(_Bool)arg2;
- (void)sortTypeChange:(id)arg1;
- (void)postFilesLockNotification;
- (void)addNotification;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)createNewFolder:(id)arg1;
- (void)openFilterVC:(long long)arg1;
- (void)createNewFolderClick:(id)arg1;
- (void)chooseClick:(id)arg1;
- (void)changeSortTypeWithOperationBar:(long long)arg1;
- (void)filterViewDismiss;
- (void)onBackgroundTpped:(id)arg1;
- (void)filterEvent:(id)arg1;
- (void)searchEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

