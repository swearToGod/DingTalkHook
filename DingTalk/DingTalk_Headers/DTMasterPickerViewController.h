//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactBaseViewController.h"

#import "DTLoadMoreDelegate-Protocol.h"
#import "DTPickerAvatarViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTContactItem, DTDepartment, DTEmptyResultView, DTLoadMoreController, DTPickerAvatarView, DTPickerStatus, NSArray, NSSet, NSString, UITableView;

@interface DTMasterPickerViewController : DTContactBaseViewController <UITableViewDataSource, UITableViewDelegate, DTPickerAvatarViewDelegate, DTLoadMoreDelegate>
{
    _Bool _unSupportAllItemPick;
    DTDepartment *_department;
    NSString *_customTitle;
    NSSet *_disabledUIDs;
    unsigned long long _limitNumber;
    CDUnknownBlockType _pickDidFinishBlock;
    CDUnknownBlockType _pickCancelBlock;
    NSArray *_selectedIdentifiers;
    DTPickerStatus *_pickerStatus;
    unsigned long long _mode;
    UITableView *_tableView;
    NSArray *_dataSource;
    DTLoadMoreController *_loadMoreController;
    DTEmptyResultView *_emptyView;
    DTPickerAvatarView *_pickerAvatarView;
    NSArray *_memberList;
    DTContactItem *_allItem;
}

@property(retain, nonatomic) DTContactItem *allItem; // @synthesize allItem=_allItem;
@property(copy, nonatomic) NSArray *memberList; // @synthesize memberList=_memberList;
@property(retain, nonatomic) DTPickerAvatarView *pickerAvatarView; // @synthesize pickerAvatarView=_pickerAvatarView;
@property(retain, nonatomic) DTEmptyResultView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool unSupportAllItemPick; // @synthesize unSupportAllItemPick=_unSupportAllItemPick;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) DTPickerStatus *pickerStatus; // @synthesize pickerStatus=_pickerStatus;
@property(copy, nonatomic) NSArray *selectedIdentifiers; // @synthesize selectedIdentifiers=_selectedIdentifiers;
@property(copy, nonatomic) CDUnknownBlockType pickCancelBlock; // @synthesize pickCancelBlock=_pickCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType pickDidFinishBlock; // @synthesize pickDidFinishBlock=_pickDidFinishBlock;
@property(nonatomic) unsigned long long limitNumber; // @synthesize limitNumber=_limitNumber;
@property(copy, nonatomic) NSSet *disabledUIDs; // @synthesize disabledUIDs=_disabledUIDs;
@property(copy, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(retain, nonatomic) DTDepartment *department; // @synthesize department=_department;
- (void).cxx_destruct;
- (void)showOverLimitMessageWithAutoDismiss:(_Bool)arg1;
- (long long)indexOfContactItemInPickerAvatarView:(id)arg1;
- (void)contactCell:(id)arg1 didSelectedWithContactItem:(id)arg2;
- (void)showsMembers:(id)arg1;
- (void)deselectAllMembers;
- (void)selectAllMembers;
- (void)selectAllCell:(id)arg1 didSelectWithContactItem:(id)arg2;
- (void)setEmptyResultHidden:(_Bool)arg1;
- (void)groupStyleButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)longPressGesture:(id)arg1;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)pickedNumberOverLimit;
- (void)confirmButtonDidPressed;
- (void)pickerAvatarViewDidScroll:(id)arg1;
- (void)pickerAvatarView:(id)arg1 didSelectColumnAtColumnIndex:(long long)arg2;
- (id)pickerAvatarView:(id)arg1 cellForColumnAtColumnIndex:(long long)arg2;
- (long long)numberOfColumnsInPickerAvatarView:(id)arg1;
- (void)setItemsStyle;
- (void)loadDatasourceWithCursor:(long long)arg1;
- (void)loadCompoment;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

