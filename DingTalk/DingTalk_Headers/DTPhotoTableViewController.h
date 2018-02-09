//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTLoadMoreDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTBizMessage, DTImageView, DTLoadMoreController, DTPhotoBrowerHelper, NSArray, NSString, UITableView, UIView, UIViewController;
@protocol DTPhotoTableDelegate;

@interface DTPhotoTableViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, DTLoadMoreDelegate>
{
    _Bool _isEnabledLoadNext;
    _Bool _scrollToCursorItemOnce;
    _Bool _shouldIgnoreScrollEventOnce;
    id <DTPhotoTableDelegate> _delegate;
    UIViewController *_parentVC;
    NSArray *_dataSource;
    DTBizMessage *_cursorMessage;
    unsigned long long _columns;
    UITableView *_tableView;
    UIView *_noPhotoView;
    DTLoadMoreController *_previousLoadMore;
    DTLoadMoreController *_nextLoadMore;
    DTImageView *_selectedImageView;
    DTPhotoBrowerHelper *_photoBrowerHelper;
}

@property(nonatomic) _Bool shouldIgnoreScrollEventOnce; // @synthesize shouldIgnoreScrollEventOnce=_shouldIgnoreScrollEventOnce;
@property(nonatomic) _Bool scrollToCursorItemOnce; // @synthesize scrollToCursorItemOnce=_scrollToCursorItemOnce;
@property(retain, nonatomic) DTPhotoBrowerHelper *photoBrowerHelper; // @synthesize photoBrowerHelper=_photoBrowerHelper;
@property(nonatomic) __weak DTImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) DTLoadMoreController *nextLoadMore; // @synthesize nextLoadMore=_nextLoadMore;
@property(retain, nonatomic) DTLoadMoreController *previousLoadMore; // @synthesize previousLoadMore=_previousLoadMore;
@property(retain, nonatomic) UIView *noPhotoView; // @synthesize noPhotoView=_noPhotoView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long columns; // @synthesize columns=_columns;
@property(nonatomic) _Bool isEnabledLoadNext; // @synthesize isEnabledLoadNext=_isEnabledLoadNext;
@property(retain, nonatomic) DTBizMessage *cursorMessage; // @synthesize cursorMessage=_cursorMessage;
@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(nonatomic) __weak id <DTPhotoTableDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)photoBrowserHelper:(id)arg1 customMenusWithItem:(id)arg2;
- (void)openPhotoBrowserWithItem:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)itemsForIndexPath:(id)arg1;
- (id)photoSectionInSection:(long long)arg1;
- (long long)numberOfSectionsInPhotoTable;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (id)photoBrowserItemForMessage:(id)arg1;
- (id)lastPhotoBrowerItem;
- (id)indexPathForPhotoItem:(id)arg1;
- (void)notifyDidFetchWithDataSource:(id)arg1 option:(long long)arg2 hasMoreTable:(id)arg3;
- (void)neverLoadMore:(long long)arg1;
- (void)didEndLoading:(long long)arg1;
- (void)scrollToCursorMessageOnceIfNeeds;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

