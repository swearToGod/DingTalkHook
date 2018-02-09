//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewCell.h"

@class DTAvatarImageView, UILabel;

@interface DTBusinessConfCreateCell : DTTableViewCell
{
    DTAvatarImageView *_avatarImageView;
    UILabel *_hostTitleLabel;
    UILabel *_contentLabel;
}

@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *hostTitleLabel; // @synthesize hostTitleLabel=_hostTitleLabel;
@property(retain, nonatomic) DTAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)reloadCell:(id)arg1 baseModel:(id)arg2 index:(unsigned long long)arg3;
- (id)avatarModel:(long long)arg1 nickName:(id)arg2;
- (void)loadCompoment;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

