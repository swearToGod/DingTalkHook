//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class DTBizDingMinutesModel, YYLabel;

@interface DTMeetingMinutesContentCell : UITableViewCell
{
    DTBizDingMinutesModel *_dingMinutesModel;
    YYLabel *_meetingMinutesContentLabel;
}

+ (id)attributedStringWithDingMinutesModel:(id)arg1;
+ (double)cellHeightWithDingMinutesModel:(id)arg1 constrainedWidth:(double)arg2;
@property(retain, nonatomic) YYLabel *meetingMinutesContentLabel; // @synthesize meetingMinutesContentLabel=_meetingMinutesContentLabel;
@property(retain, nonatomic) DTBizDingMinutesModel *dingMinutesModel; // @synthesize dingMinutesModel=_dingMinutesModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

