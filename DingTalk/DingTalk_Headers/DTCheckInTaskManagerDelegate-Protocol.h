//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTCheckInTask, DTCheckInTaskManager, DTOANotifyPushModel, NSString;

@protocol DTCheckInTaskManagerDelegate <NSObject>
- (void)taskManager:(DTCheckInTaskManager *)arg1 checkInTask:(DTCheckInTask *)arg2 completeSrcType:(long long)arg3 notify:(DTOANotifyPushModel *)arg4;
- (void)taskManager:(DTCheckInTaskManager *)arg1 checkInTask:(DTCheckInTask *)arg2 handleAbort:(long long)arg3;
- (void)taskManager:(DTCheckInTaskManager *)arg1 checkInTaskStart:(DTCheckInTask *)arg2;
- (void)taskManager:(DTCheckInTaskManager *)arg1 removeUserValueForKey:(NSString *)arg2;
- (NSString *)taskManager:(DTCheckInTaskManager *)arg1 userValueForKey:(NSString *)arg2;
- (void)taskManager:(DTCheckInTaskManager *)arg1 setUserValue:(NSString *)arg2 forKey:(NSString *)arg3;

@optional
- (void)taskManager:(DTCheckInTaskManager *)arg1 quryUserValueError:(NSString *)arg2 withKey:(NSString *)arg3;
@end
