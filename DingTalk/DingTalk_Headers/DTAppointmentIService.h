//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface DTAppointmentIService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)getAppointmentStatistic:(id)arg1;
- (void)pullAppointmentInfo:(id)arg1 callback:(id)arg2;
- (void)pullAppointmentList:(id)arg1 callback:(id)arg2;
- (void)joinAppointment:(id)arg1 callback:(id)arg2;
- (void)refuseAppointment:(id)arg1 callback:(id)arg2;
- (void)acceptAppointment:(id)arg1 callback:(id)arg2;
- (void)cancelAppointment:(id)arg1 callback:(id)arg2;
- (void)updateAppointment:(id)arg1 callback:(id)arg2;
- (void)createAppointment:(id)arg1 callback:(id)arg2;

@end

