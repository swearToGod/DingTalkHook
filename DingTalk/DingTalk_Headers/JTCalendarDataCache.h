//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class JTCalendar, NSDateFormatter, NSMutableDictionary;

@interface JTCalendarDataCache : NSObject
{
    NSMutableDictionary *events;
    NSDateFormatter *dateFormatter;
    JTCalendar *_calendarManager;
}

@property(nonatomic) __weak JTCalendar *calendarManager; // @synthesize calendarManager=_calendarManager;
- (void).cxx_destruct;
- (_Bool)haveEvent:(id)arg1;
- (void)reloadData;
- (id)init;

@end

