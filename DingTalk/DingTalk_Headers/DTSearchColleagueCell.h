//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactTableViewCell.h"

@class UIButton, UILabel;

@interface DTSearchColleagueCell : DTContactTableViewCell
{
    UIButton *_msgButton;
    UIButton *_telButton;
    UILabel *_middleLabel;
    UILabel *_robotIconLabel;
}

+ (double)calculateCellHeight:(id)arg1 cellWidth:(double)arg2;
@property(retain, nonatomic) UILabel *robotIconLabel; // @synthesize robotIconLabel=_robotIconLabel;
@property(retain, nonatomic) UILabel *middleLabel; // @synthesize middleLabel=_middleLabel;
@property(retain, nonatomic) UIButton *telButton; // @synthesize telButton=_telButton;
@property(retain, nonatomic) UIButton *msgButton; // @synthesize msgButton=_msgButton;
- (void).cxx_destruct;
- (void)telButtonPressed:(id)arg1;
- (void)msgButtonPressed:(id)arg1;
- (void)configCellWithContactItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCellStyle:(unsigned long long)arg1 reuseIdentifier:(id)arg2;

@end
