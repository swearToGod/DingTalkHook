//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIColor, UIImageView, UILabel, UIView;

@interface DTCMailFolderCellV1 : UITableViewCell
{
    UIColor *_customSelectedFolderColor;
    UIImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_badgeLabel;
    UIView *_bottomLine;
    UIImageView *_redDotView;
}

+ (double)height;
@property(retain, nonatomic) UIImageView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIColor *customSelectedFolderColor; // @synthesize customSelectedFolderColor=_customSelectedFolderColor;
- (void).cxx_destruct;
- (id)folderIcon:(id)arg1 isFocus:(_Bool)arg2;
- (long long)getUnreadCount:(id)arg1;
- (void)configureCell:(id)arg1 didFocus:(_Bool)arg2 hasUnread:(_Bool)arg3 ignoreBadge:(_Bool)arg4 isBottom:(_Bool)arg5;
- (void)configureCell:(id)arg1 didFocus:(_Bool)arg2 hasUnread:(_Bool)arg3 isBottom:(_Bool)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct CGRect)nameLabelInitFrame;
- (struct CGRect)bottomLineInitFrame;

@end

