//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCell.h"

@class DTMergeMessageTimeLineItem, DTMergeMessageTimeLineView;

@interface DTMergeMessageTimeLineCell : DTBaseCell
{
    DTMergeMessageTimeLineView *_timeLineView;
    DTMergeMessageTimeLineItem *_lineItem;
}

@property(retain, nonatomic) DTMergeMessageTimeLineItem *lineItem; // @synthesize lineItem=_lineItem;
@property(retain, nonatomic) DTMergeMessageTimeLineView *timeLineView; // @synthesize timeLineView=_timeLineView;
- (void).cxx_destruct;
- (void)configCellWithItem:(id)arg1;
- (void)layoutSubViewsForCell;
- (id)initWithCellItem:(id)arg1;

@end

