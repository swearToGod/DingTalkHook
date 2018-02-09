//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class NSArray, NSString;

@interface DTDingHistoryListController : DTTableViewController
{
    _Bool _showAddNewReceiver;
    _Bool _showPickGroupMember;
    _Bool _showSendToSelf;
    unsigned long long _maxReceiverCount;
    NSString *_maxReceiverCountOverLimitString;
    CDUnknownBlockType _finishBlock;
    unsigned long long _historySource;
    NSArray *_receivers;
}

@property(copy, nonatomic) NSArray *receivers; // @synthesize receivers=_receivers;
@property(nonatomic) _Bool showSendToSelf; // @synthesize showSendToSelf=_showSendToSelf;
@property(nonatomic) _Bool showPickGroupMember; // @synthesize showPickGroupMember=_showPickGroupMember;
@property(nonatomic) _Bool showAddNewReceiver; // @synthesize showAddNewReceiver=_showAddNewReceiver;
@property(nonatomic) unsigned long long historySource; // @synthesize historySource=_historySource;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(copy, nonatomic) NSString *maxReceiverCountOverLimitString; // @synthesize maxReceiverCountOverLimitString=_maxReceiverCountOverLimitString;
@property(nonatomic) unsigned long long maxReceiverCount; // @synthesize maxReceiverCount=_maxReceiverCount;
- (void).cxx_destruct;
- (id)concatUserName:(id)arg1 WithChar:(id)arg2;
- (void)selectHistoryMember:(id)arg1;
- (void)tableView:(id)arg1 rowWithCell:(id)arg2 withItem:(id)arg3 indexPath:(id)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getViewControllerWith:(Class)arg1;
- (void)pickGroupMemberPressed:(id)arg1;
- (void)choseNewPepolePressed:(id)arg1;
- (void)sendSelfPressed:(id)arg1;
- (_Bool)hasHistoryDing;
- (id)loadDingReceivers:(long long)arg1;
- (void)loadDataSources;
- (void)viewDidLoad;

@end
