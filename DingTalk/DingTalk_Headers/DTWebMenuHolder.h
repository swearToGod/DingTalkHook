//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIColor;

@interface DTWebMenuHolder : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    CDUnknownBlockType _didSelectBlock;
    NSArray *_dataSources;
    NSString *_itemIdSelected;
    double _maxShowingCnt;
    UIColor *_backgroundColor;
    UIColor *_menuTextColor;
}

@property(retain, nonatomic) UIColor *menuTextColor; // @synthesize menuTextColor=_menuTextColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double maxShowingCnt; // @synthesize maxShowingCnt=_maxShowingCnt;
@property(copy, nonatomic) NSString *itemIdSelected; // @synthesize itemIdSelected=_itemIdSelected;
@property(copy, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
@property(copy, nonatomic) CDUnknownBlockType didSelectBlock; // @synthesize didSelectBlock=_didSelectBlock;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)enableScroll;
- (double)itemWidth;
- (double)itemHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

