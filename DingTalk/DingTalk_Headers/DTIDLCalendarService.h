//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface DTIDLCalendarService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)updateAlert:(id)arg1 eventId:(id)arg2 alarmList:(id)arg3 callback:(id)arg4;
- (void)updateExceptionDate:(id)arg1 eventId:(id)arg2 time:(id)arg3 callback:(id)arg4;
- (void)deleteCalendar:(id)arg1 callback:(id)arg2;
- (void)update:(id)arg1 callback:(id)arg2;
- (void)create:(id)arg1 callback:(id)arg2;
- (void)listExpireTask:(id)arg1 currentTime:(id)arg2 callback:(id)arg3;
- (void)getExpireTaskCount:(id)arg1 callback:(id)arg2;
- (void)listCalender:(id)arg1 callback:(id)arg2;
- (void)listCalendarNewest:(id)arg1 callback:(id)arg2;
- (void)listRepeatCalender:(id)arg1 callback:(id)arg2;
- (void)listNonRepeatCalendar:(id)arg1 highStartTime:(id)arg2 callback:(id)arg3;

@end

