//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTWorkHeaderViewDelete-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTCHOrgModel, DTSectionItem, DTWorkHeaderView, NSArray, NSString, UITableView;

@interface DTChannelMainViewController : DTViewController <DTWorkHeaderViewDelete, UITableViewDataSource, UITableViewDelegate>
{
    long long _chOrgId;
    UITableView *_chTableView;
    DTCHOrgModel *_chInfo;
    DTWorkHeaderView *_headerView;
    DTSectionItem *_headerSection;
    NSArray *_sectionList;
    long long _conversationIndex;
    long long _lastItemMaxCount;
}

+ (void)showChannelMainViewWithOrgId:(long long)arg1;
@property(nonatomic) long long lastItemMaxCount; // @synthesize lastItemMaxCount=_lastItemMaxCount;
@property(nonatomic) long long conversationIndex; // @synthesize conversationIndex=_conversationIndex;
@property(copy, nonatomic) NSArray *sectionList; // @synthesize sectionList=_sectionList;
@property(retain, nonatomic) DTSectionItem *headerSection; // @synthesize headerSection=_headerSection;
@property(retain, nonatomic) DTWorkHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) DTCHOrgModel *chInfo; // @synthesize chInfo=_chInfo;
@property(retain, nonatomic) UITableView *chTableView; // @synthesize chTableView=_chTableView;
@property(nonatomic) long long chOrgId; // @synthesize chOrgId=_chOrgId;
- (void).cxx_destruct;
- (id)closedFooterView;
- (void)moreAction:(id)arg1;
- (void)popBack:(id)arg1;
- (void)onChannelInfoChangedNotify:(id)arg1;
- (void)onUnreadChannelMessageChangedNotify:(id)arg1;
- (void)workHeaderView:(id)arg1 didTapImageView:(id)arg2;
- (void)checkAndShowGuideView;
- (void)openAppStatistics:(id)arg1;
- (void)openMicroAppWithItem:(id)arg1 appView:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)headerSectinIndex;
- (long long)sectionForApp:(long long)arg1;
- (long long)sectionNumber;
- (void)asynLoadConversationLastMessgae:(CDUnknownBlockType)arg1;
- (void)openChannelNotificationCenterAsync;
- (void)openOrgHomePaeg;
- (void)refreshHeaderSection;
- (id)headerSectionForClosed;
- (id)headerSectionForOpen;
- (void)loadCompoment;
- (void)loadChannelInfo;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

