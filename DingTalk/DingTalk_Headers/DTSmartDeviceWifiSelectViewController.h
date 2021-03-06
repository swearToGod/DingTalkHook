//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView;

@interface DTSmartDeviceWifiSelectViewController : DTViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_wifiTableView;
    NSMutableArray *_tableDataSource;
    CDUnknownBlockType _tableCellDidSelectedBlock;
    CDUnknownBlockType _tableCellDidSelectedOtherBlock;
}

@property(copy, nonatomic) CDUnknownBlockType tableCellDidSelectedOtherBlock; // @synthesize tableCellDidSelectedOtherBlock=_tableCellDidSelectedOtherBlock;
@property(copy, nonatomic) CDUnknownBlockType tableCellDidSelectedBlock; // @synthesize tableCellDidSelectedBlock=_tableCellDidSelectedBlock;
@property(retain, nonatomic) UITableView *wifiTableView; // @synthesize wifiTableView=_wifiTableView;
- (void).cxx_destruct;
- (void)showWifiSelectViewController:(struct CGRect)arg1 dataSource:(id)arg2 title:(id)arg3 presenter:(id)arg4 selectBlock:(CDUnknownBlockType)arg5 otherBlock:(CDUnknownBlockType)arg6;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setPreferredContentSize:(struct CGSize)arg1;
@property(retain, nonatomic) NSMutableArray *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

