//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTWorkCalendarCell.h"

@class NSMutableArray, UILabel;

@interface DTWorkCalendarAvatarListCell : DTWorkCalendarCell
{
    long long _memberCount;
    UILabel *_titleLabel;
    NSMutableArray *_avatarList;
    NSMutableArray *_nameLabelList;
}

+ (double)cellHeightForCellModel:(id)arg1 cellWidth:(double)arg2;
@property(retain, nonatomic) NSMutableArray *nameLabelList; // @synthesize nameLabelList=_nameLabelList;
@property(retain, nonatomic) NSMutableArray *avatarList; // @synthesize avatarList=_avatarList;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)resetAvatarListAndNameLabelList;
- (void)layoutSubviews;
- (void)setCellModel:(id)arg1;
- (id)initWithCellStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

