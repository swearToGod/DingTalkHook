//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCell.h"

@class DTPickTimeCellItem, DTPickTimeCellTimeDescView, UIImageView;

@interface DTPickTimeCell : DTBaseCell
{
    DTPickTimeCellItem *_item;
    DTPickTimeCellTimeDescView *_leftDescView;
    DTPickTimeCellTimeDescView *_rightDescView;
    UIImageView *_middleImageView;
}

@property(retain, nonatomic) UIImageView *middleImageView; // @synthesize middleImageView=_middleImageView;
@property(retain, nonatomic) DTPickTimeCellTimeDescView *rightDescView; // @synthesize rightDescView=_rightDescView;
@property(retain, nonatomic) DTPickTimeCellTimeDescView *leftDescView; // @synthesize leftDescView=_leftDescView;
@property(retain, nonatomic) DTPickTimeCellItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)rightDidSelected:(id)arg1;
- (void)leftDidSelected:(id)arg1;
- (void)configCellWithItem:(id)arg1;
- (void)loadComponents;
- (void)layoutSubViewsForCell;
- (id)initWithReuseIdentifier:(id)arg1;

@end

