//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCell.h"

@class DTConferenceCallManageItem, UIView;

@interface DTConferenceCallManageCell : DTBaseCell
{
    DTConferenceCallManageItem *_cellItem;
    UIView *_detailViews;
}

@property(retain, nonatomic) UIView *detailViews; // @synthesize detailViews=_detailViews;
@property(retain, nonatomic) DTConferenceCallManageItem *cellItem; // @synthesize cellItem=_cellItem;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)configCellWithItem:(id)arg1;
- (void)viewTap:(id)arg1;
- (id)getDetailViewWithModel:(id)arg1;
- (id)getDetailsView;
- (void)layoutSubViewsForCell;
- (id)initWithCellItem:(id)arg1;

@end
