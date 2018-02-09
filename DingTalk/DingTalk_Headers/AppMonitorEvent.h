//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface AppMonitorEvent : NSObject
{
    NSString *_module;
    NSString *_monitorPoint;
    NSString *_eventId;
    NSDictionary *_extraInfo;
    long long _begin;
    long long _end;
    long long _commitTime;
    NSString *_access;
    NSString *_subAccess;
}

@property(copy, nonatomic) NSString *subAccess; // @synthesize subAccess=_subAccess;
@property(copy, nonatomic) NSString *access; // @synthesize access=_access;
@property(nonatomic) long long commitTime; // @synthesize commitTime=_commitTime;
@property(nonatomic) long long end; // @synthesize end=_end;
@property(nonatomic) long long begin; // @synthesize begin=_begin;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSString *monitorPoint; // @synthesize monitorPoint=_monitorPoint;
@property(retain, nonatomic) NSString *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (id)jsonDict;
- (void)setBeginEndWithCommitTime:(long long)arg1;
- (void)setCommitTime:(long long)arg1 access:(id)arg2 subAccess:(id)arg3;
- (id)initWithEventId:(id)arg1 module:(id)arg2 monitorPoint:(id)arg3 extraInfo:(id)arg4;
- (id)initWithEventId:(id)arg1 module:(id)arg2 monitorPoint:(id)arg3;

@end

