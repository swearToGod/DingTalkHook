//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTTableViewHandlerDelegate-Protocol.h"

@class DTDingFilterDropViewItem, DTDropBoxListViewHandler, DTTableView, NSString;

@interface DTDingFilterDropView : UIView <DTTableViewHandlerDelegate>
{
    DTTableView *_dropView;
    DTDingFilterDropViewItem *_item;
    DTDropBoxListViewHandler *_listViewHandler;
}

@property(retain, nonatomic) DTDropBoxListViewHandler *listViewHandler; // @synthesize listViewHandler=_listViewHandler;
@property(retain, nonatomic) DTDingFilterDropViewItem *item; // @synthesize item=_item;
@property(retain, nonatomic) DTTableView *dropView; // @synthesize dropView=_dropView;
- (void).cxx_destruct;
- (void)refreshSelectedWithStatus:(id)arg1;
- (unsigned long long)celIIndex:(id)arg1;
- (void)configWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

