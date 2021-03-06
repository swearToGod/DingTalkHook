//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTBusinessConfTimerView, NSMutableArray, NSString, UITableView;

@interface DTBusinessConfEventView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSMutableArray *_eventsArray;
    DTBusinessConfTimerView *_timerView;
}

@property(retain, nonatomic) DTBusinessConfTimerView *timerView; // @synthesize timerView=_timerView;
@property(retain, nonatomic) NSMutableArray *eventsArray; // @synthesize eventsArray=_eventsArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshEvent:(id)arg1;
- (void)refreshEvent:(id)arg1 forceClear:(_Bool)arg2;
- (void)startTimerCount:(long long)arg1;
- (void)loadCompoment;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

