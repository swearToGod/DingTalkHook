//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UISwitch;

@interface DTMailPushFolderTableViewCell : UITableViewCell
{
    CDUnknownBlockType _completionBlock;
    UISwitch *_oneSwitch;
}

@property(retain, nonatomic) UISwitch *oneSwitch; // @synthesize oneSwitch=_oneSwitch;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)switchChangeAction:(id)arg1;
- (void)configCell:(id)arg1 index:(id)arg2 isPush:(_Bool)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

