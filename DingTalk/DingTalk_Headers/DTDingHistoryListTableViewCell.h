//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface DTDingHistoryListTableViewCell : UITableViewCell
{
    UILabel *_infoLabel;
    UILabel *_manysLabel;
    UILabel *_timeLabel;
}

@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *manysLabel; // @synthesize manysLabel=_manysLabel;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
- (void).cxx_destruct;
- (void)configModel:(id)arg1;
- (id)concatUserName:(id)arg1 WithChar:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

