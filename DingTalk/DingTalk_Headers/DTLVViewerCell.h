//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCell.h"

@class DTAvatarView, UILabel;

@interface DTLVViewerCell : DTBaseCell
{
    DTAvatarView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_durationLabel;
}

@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) DTAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configCellWithItem:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

