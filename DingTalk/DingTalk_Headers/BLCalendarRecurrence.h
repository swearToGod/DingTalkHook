//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface BLCalendarRecurrence : NSObject
{
    long long _count;
    long long _durationInSecond;
    long long _freq;
    unsigned long long _interval;
    long long _recurIDForException;
    long long _until;
    long long _weekStart;
    NSArray *_byDayListOfMonth;
    NSArray *_byDayListOfWeek;
    NSArray *_byDayListOfYear;
    NSArray *_byMonthListOfYear;
    NSArray *_bySetPosList;
    NSArray *_byWeekListOfYear;
}

+ (id)recurrenceWithJsonString:(id)arg1;
@property(retain, nonatomic) NSArray *byWeekListOfYear; // @synthesize byWeekListOfYear=_byWeekListOfYear;
@property(retain, nonatomic) NSArray *bySetPosList; // @synthesize bySetPosList=_bySetPosList;
@property(retain, nonatomic) NSArray *byMonthListOfYear; // @synthesize byMonthListOfYear=_byMonthListOfYear;
@property(retain, nonatomic) NSArray *byDayListOfYear; // @synthesize byDayListOfYear=_byDayListOfYear;
@property(retain, nonatomic) NSArray *byDayListOfWeek; // @synthesize byDayListOfWeek=_byDayListOfWeek;
@property(retain, nonatomic) NSArray *byDayListOfMonth; // @synthesize byDayListOfMonth=_byDayListOfMonth;
@property(nonatomic) long long weekStart; // @synthesize weekStart=_weekStart;
@property(nonatomic) long long until; // @synthesize until=_until;
@property(nonatomic) long long recurIDForException; // @synthesize recurIDForException=_recurIDForException;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(nonatomic) long long freq; // @synthesize freq=_freq;
@property(nonatomic) long long durationInSecond; // @synthesize durationInSecond=_durationInSecond;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)toJsonString;

@end

