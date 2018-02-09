//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTAttendenceHeaderViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTAttendenceHeaderView, DTDcPersonAttendanceModel, NSString, UIButton, UITableView, UIView;

@interface DTAttendenceViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, DTAttendenceHeaderViewDelegate>
{
    _Bool _reloadWhenAppear;
    long long _orgId;
    NSString *_staffId;
    NSString *_appId;
    NSString *_subAppId;
    long long _date;
    NSString *_titleText;
    DTDcPersonAttendanceModel *_attendanceModel;
    UITableView *_attendTableView;
    DTAttendenceHeaderView *_attendHeaderView;
    UIView *_emptyView;
    UIView *_bottomView;
    UIButton *_forwardButton;
}

@property(retain, nonatomic) UIButton *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) DTAttendenceHeaderView *attendHeaderView; // @synthesize attendHeaderView=_attendHeaderView;
@property(retain, nonatomic) UITableView *attendTableView; // @synthesize attendTableView=_attendTableView;
@property(retain, nonatomic) DTDcPersonAttendanceModel *attendanceModel; // @synthesize attendanceModel=_attendanceModel;
@property(nonatomic) _Bool reloadWhenAppear; // @synthesize reloadWhenAppear=_reloadWhenAppear;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) long long date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *subAppId; // @synthesize subAppId=_subAppId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *staffId; // @synthesize staffId=_staffId;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (void)headerView:(id)arg1 didAvatarViewClicked:(id)arg2;
- (void)forwardButtonClicked:(id)arg1;
- (void)showEmptyView;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)rebuildViewComponent;
- (void)queryAttendeceData;
- (void)confPopBack:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithOrgId:(long long)arg1 staffId:(id)arg2 date:(long long)arg3 appId:(id)arg4 subAppId:(id)arg5 titleText:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

