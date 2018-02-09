//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JTCalendar, JTCalendarMonthWeekDaysView, NSArray;

@interface JTCalendarMonthView : UIView
{
    JTCalendarMonthWeekDaysView *weekdaysView;
    NSArray *weeksViews;
    unsigned long long currentMonthIndex;
    _Bool cacheLastWeekMode;
    JTCalendar *_calendarManager;
}

@property(nonatomic) __weak JTCalendar *calendarManager; // @synthesize calendarManager=_calendarManager;
- (void).cxx_destruct;
- (void)reloadAppearance;
- (void)reloadData;
- (void)setBeginningOfMonth:(id)arg1;
- (void)configureConstraintsForSubviews;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

