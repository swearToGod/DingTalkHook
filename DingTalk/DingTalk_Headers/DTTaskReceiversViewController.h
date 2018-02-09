//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTCollectionViewDatasourceDelegate-Protocol.h"

@class DTBizDingModel, DTButton, DTManageMemberDatasource, NSMutableArray, NSString, UICollectionView;

@interface DTTaskReceiversViewController : DTViewController <DTCollectionViewDatasourceDelegate>
{
    DTBizDingModel *_taskModel;
    UICollectionView *_collectionView;
    DTManageMemberDatasource *_datasource;
    NSMutableArray *_receiverList;
    DTButton *_addReceiversButton;
}

@property(retain, nonatomic) DTButton *addReceiversButton; // @synthesize addReceiversButton=_addReceiversButton;
@property(retain, nonatomic) NSMutableArray *receiverList; // @synthesize receiverList=_receiverList;
@property(retain, nonatomic) DTManageMemberDatasource *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) DTBizDingModel *taskModel; // @synthesize taskModel=_taskModel;
- (void).cxx_destruct;
- (void)openUserProfileWithUid:(long long)arg1;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)resetReceivers;
- (void)openSelectWithRequireUids:(id)arg1;
- (void)addReceiversBtnPressed:(id)arg1;
- (id)unFinishUids;
- (void)refreshNav;
- (long long)urgentLevel:(long long)arg1;
- (void)sendAgainDing;
- (id)itemsWithReceivers:(id)arg1;
- (void)loadDataSourceWithLoadMore:(id)arg1;
- (void)loadComponent;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

