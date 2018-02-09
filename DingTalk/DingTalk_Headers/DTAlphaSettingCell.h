//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCell.h"

@class DTAlphaSettingItem, DTAlphaSettingView, UIView;

@interface DTAlphaSettingCell : DTBaseCell
{
    DTAlphaSettingItem *_cellItem;
    DTAlphaSettingView *_infoView;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) DTAlphaSettingView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) DTAlphaSettingItem *cellItem; // @synthesize cellItem=_cellItem;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)configCellWithItem:(id)arg1;
- (void)layoutSubViewsForCell;
- (id)initWithCellItem:(id)arg1;

@end
