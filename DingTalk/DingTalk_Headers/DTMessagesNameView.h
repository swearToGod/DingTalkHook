//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTUserNameLabelDelegate-Protocol.h"

@class DTMessagesNameViewItem, DTUserNameLabel, NSMutableArray, NSString;

@interface DTMessagesNameView : UIView <DTUserNameLabelDelegate>
{
    DTUserNameLabel *_nameLabel;
    DTMessagesNameViewItem *_item;
    NSMutableArray *_itemViews;
}

@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) DTMessagesNameViewItem *item; // @synthesize item=_item;
@property(retain, nonatomic) DTUserNameLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutNameLabelAndButton;
- (void)userNameLabelTextDidChange:(id)arg1 change:(id)arg2;
- (void)updateNameView:(id)arg1;
- (void)configWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

