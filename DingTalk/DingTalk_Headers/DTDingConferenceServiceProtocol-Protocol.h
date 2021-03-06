//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBizCalendarInstance, NSArray, NSDate, NSSet;
@protocol DTDingConfServicePersistenceProtocol;

@protocol DTDingConferenceServiceProtocol <NSObject>
@property(retain, nonatomic) id <DTDingConfServicePersistenceProtocol> persistenceIMP;
- (NSSet *)existDingConferenceInstancesDayInMonth:(NSDate *)arg1;
- (NSArray *)loadDingsFromInstancesWithStartTime:(long long)arg1 endTime:(long long)arg2;
- (NSArray *)listInstancesWithStartTime:(long long)arg1 endTime:(long long)arg2;
- (void)deleteCalendarInstancesWithWrapperId:(long long)arg1;
- (void)saveInstanceList:(NSArray *)arg1;
- (_Bool)saveInstance:(DTBizCalendarInstance *)arg1;
@end

