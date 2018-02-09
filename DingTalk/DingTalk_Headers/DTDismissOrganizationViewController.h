//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class DTContactItem, NSArray, NSIndexPath, NSString, UILabel, UITableView, UITextView, UIView;

@interface DTDismissOrganizationViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate>
{
    _Bool _hasEdited;
    _Bool _isOpen;
    long long _orgId;
    CDUnknownBlockType _dismissOrgSuccessBlock;
    UITableView *_tableview;
    NSArray *_dataSource;
    UIView *_footerView;
    UITextView *_textView;
    UILabel *_textViewTilteLable;
    NSString *_placeholder;
    UILabel *_counter;
    UIView *_counterContainer;
    NSIndexPath *_selectedIndex;
    DTContactItem *_deployItem;
}

@property(retain, nonatomic) DTContactItem *deployItem; // @synthesize deployItem=_deployItem;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) _Bool hasEdited; // @synthesize hasEdited=_hasEdited;
@property(retain, nonatomic) NSIndexPath *selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIView *counterContainer; // @synthesize counterContainer=_counterContainer;
@property(retain, nonatomic) UILabel *counter; // @synthesize counter=_counter;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UILabel *textViewTilteLable; // @synthesize textViewTilteLable=_textViewTilteLable;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableview; // @synthesize tableview=_tableview;
@property(copy, nonatomic) CDUnknownBlockType dismissOrgSuccessBlock; // @synthesize dismissOrgSuccessBlock=_dismissOrgSuccessBlock;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)hideKeyBoard:(id)arg1;
- (void)onBack:(id)arg1;
- (void)checkPasswordWithCorrectBlock:(CDUnknownBlockType)arg1;
- (void)onCommit:(id)arg1;
- (void)rightBarButtonEnable:(_Bool)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)bespeakServiceItemClick;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadDatas;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

