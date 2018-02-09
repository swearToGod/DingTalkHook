//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTCSpacePhotoBrowserDataSource-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTBizCSpaceDentry, DTCSpacePhotoItem, DTCSpaceRouteHandler, DTEmptyResultView, NSArray, NSString, UITableView;

@interface DTCSpaceDentryRecentFileListViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, DTCSpacePhotoBrowserDataSource>
{
    _Bool _isLoaded;
    NSString *_token;
    UITableView *_tableView;
    DTEmptyResultView *_emptyResultView;
    NSArray *_dentryList;
    DTCSpacePhotoItem *_photoItem;
    DTBizCSpaceDentry *_operatingFile;
    DTCSpaceRouteHandler *_routeHandler;
}

@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(retain, nonatomic) DTCSpaceRouteHandler *routeHandler; // @synthesize routeHandler=_routeHandler;
@property(retain, nonatomic) DTBizCSpaceDentry *operatingFile; // @synthesize operatingFile=_operatingFile;
@property(retain, nonatomic) DTCSpacePhotoItem *photoItem; // @synthesize photoItem=_photoItem;
@property(copy, nonatomic) NSArray *dentryList; // @synthesize dentryList=_dentryList;
@property(retain, nonatomic) DTEmptyResultView *emptyResultView; // @synthesize emptyResultView=_emptyResultView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)printFile:(id)arg1;
- (unsigned long long)sourceOperationType;
- (id)sourceSpace;
- (id)photoRequestHeader;
- (id)photoAtIndex:(unsigned long long)arg1;
- (id)photoes;
- (unsigned long long)currentPhotoIndex;
- (unsigned long long)photoCounts;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)requestInfoDentryWithSpaceId:(long long)arg1 itemId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)gotoDetailWithDentry:(id)arg1;
- (void)sendToContact:(id)arg1;
- (void)sendByMail:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)openActionSheetForBizShare:(id)arg1;
- (void)onTriggerCell:(id)arg1;
- (void)setDentryProperty:(id)arg1;
- (void)operateWithDentryList:(id)arg1;
- (void)showEmptyViewWithError:(id)arg1;
- (void)onTableViewRefresh;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

