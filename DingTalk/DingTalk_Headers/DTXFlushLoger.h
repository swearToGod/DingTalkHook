//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTXFlushLoger : NSObject
{
}

+ (_Bool)uploadUserLocationWithInfo:(id)arg1;
+ (_Bool)uploadOACheckInWarnningMessage:(id)arg1;
+ (_Bool)uploadCalendarWarnningDesc:(id)arg1;
+ (_Bool)uploadHostLwpWarnningMessage:(id)arg1;
+ (_Bool)uploadHpmStatusWithInfo:(id)arg1;
+ (_Bool)uploadHpmPackageWarningMessage:(id)arg1 errorDesc:(id)arg2;
+ (_Bool)uploadMicroAppWarningMessage:(id)arg1 withCode:(id)arg2 withLevel:(id)arg3;
+ (_Bool)uploadMicroAppWarningMessage:(id)arg1;
+ (void)uploadJumpChannelAppHomePageError:(id)arg1 appId:(long long)arg2 orgId:(long long)arg3;
+ (id)corpIdWithOrgId:(long long)arg1;
+ (void)uploadJumpMicroAppHomePageLogWithUrl:(id)arg1 withAppId:(long long)arg2 withOrgId:(long long)arg3;
+ (id)xFlushErrorTypeStr:(unsigned long long)arg1;
+ (id)logModelWithDic:(id)arg1 withCode:(id)arg2 withLevel:(id)arg3 msg:(id)arg4;
+ (id)logModelWithDic:(id)arg1 withCode:(id)arg2 withLevel:(id)arg3;
+ (void)sendXFlushLog:(id)arg1;
+ (void)sendLog:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)startupAfterLaunch;

@end

