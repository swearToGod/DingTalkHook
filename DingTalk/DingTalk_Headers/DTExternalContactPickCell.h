//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCell.h"

@class DTAvatarView, DTExternalContactPickCellItem, DTLabelContainer, UIButton, UIImageView, UILabel;

@interface DTExternalContactPickCell : DTBaseCell
{
    DTExternalContactPickCellItem *_item;
    DTAvatarView *_avatarView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    DTLabelContainer *_labelContainer;
    UILabel *_commentLabel;
    UIButton *_button1;
    UIButton *_button2;
    UIImageView *_checkbox;
}

@property(retain, nonatomic) UIImageView *checkbox; // @synthesize checkbox=_checkbox;
@property(retain, nonatomic) UIButton *button2; // @synthesize button2=_button2;
@property(retain, nonatomic) UIButton *button1; // @synthesize button1=_button1;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) DTLabelContainer *labelContainer; // @synthesize labelContainer=_labelContainer;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DTAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) DTExternalContactPickCellItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)layoutSubViewsForCell;
- (void)configCellWithItem:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

