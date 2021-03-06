//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTCMailReceiverListInterface-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTCMail, DTCMailReceiverListPresenter, NSString, UITableView;

@interface DTCMailReceiverListViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, DTCMailReceiverListInterface>
{
    _Bool _isPreview;
    _Bool _isSendByMe;
    DTCMail *_mail;
    UITableView *_tableView;
    DTCMailReceiverListPresenter *_listPresenter;
}

@property(nonatomic) _Bool isSendByMe; // @synthesize isSendByMe=_isSendByMe;
@property(retain, nonatomic) DTCMailReceiverListPresenter *listPresenter; // @synthesize listPresenter=_listPresenter;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isPreview; // @synthesize isPreview=_isPreview;
@property(retain, nonatomic) DTCMail *mail; // @synthesize mail=_mail;
- (void).cxx_destruct;
- (void)receiverListDidUpdateFailed:(id)arg1;
- (void)receiverListDidUpdate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onClickDing:(id)arg1;
- (void)onClickCall:(id)arg1;
- (void)writeMailWithReceiverModel:(id)arg1;
- (void)setupNavigationBar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

