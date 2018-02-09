//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LWFetchedResultsControllerDelegate-Protocol.h"

@class DTCMail, LWFetchedResultsController, NSArray, NSMutableArray, NSMutableDictionary, NSString, UITableView;
@protocol DTCMailReceiverListInterface;

@interface DTCMailReceiverListPresenter : NSObject <LWFetchedResultsControllerDelegate>
{
    _Bool _isExistDTUsers;
    _Bool _isPreview;
    _Bool _hasQueryStatus;
    id <DTCMailReceiverListInterface> _userInterface;
    UITableView *_tableView;
    NSMutableDictionary *_receiverDataMap;
    NSArray *_cidModels;
    NSMutableArray *_arrEmailResult;
    DTCMail *_mail;
    LWFetchedResultsController *_fetchController;
    NSMutableArray *_arrEmailsGroups;
    long long _currentOrgId;
}

@property(nonatomic) _Bool hasQueryStatus; // @synthesize hasQueryStatus=_hasQueryStatus;
@property(nonatomic) _Bool isPreview; // @synthesize isPreview=_isPreview;
@property(nonatomic) long long currentOrgId; // @synthesize currentOrgId=_currentOrgId;
@property(retain, nonatomic) NSMutableArray *arrEmailsGroups; // @synthesize arrEmailsGroups=_arrEmailsGroups;
@property(retain, nonatomic) LWFetchedResultsController *fetchController; // @synthesize fetchController=_fetchController;
@property(nonatomic) _Bool isExistDTUsers; // @synthesize isExistDTUsers=_isExistDTUsers;
@property(retain, nonatomic) DTCMail *mail; // @synthesize mail=_mail;
@property(retain, nonatomic) NSMutableArray *arrEmailResult; // @synthesize arrEmailResult=_arrEmailResult;
@property(retain, nonatomic) NSArray *cidModels; // @synthesize cidModels=_cidModels;
@property(retain, nonatomic) NSMutableDictionary *receiverDataMap; // @synthesize receiverDataMap=_receiverDataMap;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <DTCMailReceiverListInterface> userInterface; // @synthesize userInterface=_userInterface;
- (void).cxx_destruct;
- (void)reloadTableview;
- (void)updateReceiverEmailIsGroup:(id)arg1;
- (void)updateMailIsGroup;
- (void)controllerDidRollback:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(long long)arg4 newIndex:(unsigned long long)arg5;
- (void)controllerWillChangeContent:(id)arg1;
- (void)datasourceModified;
- (void)datasourceModfiyNotifiatonIfNeed;
- (_Bool)canGoChatWithStatusModel:(id)arg1;
- (void)filterDTUserWithEmails:(id)arg1 statusModels:(id)arg2;
- (void)buildReceiverDataWithoutMailReceiver;
- (void)buildReceiverData;
- (void)cleanup;
- (void)loadReceiverListForMail:(id)arg1 isPreview:(_Bool)arg2;
- (id)receiverAtIndexPath:(id)arg1;
- (id)receiverSectionTitleAtSection:(long long)arg1;
- (long long)receiverCountAtSection:(long long)arg1;
- (long long)receiverSectionNum;
- (_Bool)existDTUsers;
- (void)buildFetch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

