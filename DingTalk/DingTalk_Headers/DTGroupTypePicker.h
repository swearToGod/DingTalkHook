//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTGroupUpgradeViewController.h"

@class DTGroupTypeDataProvider, NSString, UIViewController;

@interface DTGroupTypePicker : DTGroupUpgradeViewController
{
    long long _action;
    DTGroupTypeDataProvider *_provider;
    NSString *_cid;
    UIViewController *_popAnchorViewController;
}

@property(nonatomic) __weak UIViewController *popAnchorViewController; // @synthesize popAnchorViewController=_popAnchorViewController;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)popToAnchorViewController:(_Bool)arg1;
- (void)handleUpgradeGroupWithOption:(id)arg1;
- (void)didPickGroupKindOption:(id)arg1;
- (void)setupTableDataSource;
- (void)fetchGroupTypeDataIfNeeds;
- (void)viewDidLoad;
- (id)initWithUpgradeActionHandler:(id)arg1;
- (id)initWithAction:(long long)arg1 provider:(id)arg2;

@end

