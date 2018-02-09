//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class DTAvatarImageView, DTBizMessageReceiver, UILabel;

@interface DTMessageUnreadMemberCell : UITableViewCell
{
    DTBizMessageReceiver *_receiver;
    DTAvatarImageView *_avatarView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UILabel *_timeLabel;
}

@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DTAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) DTBizMessageReceiver *receiver; // @synthesize receiver=_receiver;
- (void).cxx_destruct;
- (void)configWithReceiver:(id)arg1;
- (id)statusText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

