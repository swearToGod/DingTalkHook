//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTCallRecordModel : Marshal
{
    NSNumber *_callerUid;
    NSNumber *_calleeUid;
    NSNumber *_beginTime;
    NSNumber *_duration;
    NSString *_calleeMobile;
}

@property(copy, nonatomic) NSString *calleeMobile; // @synthesize calleeMobile=_calleeMobile;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSNumber *beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) NSNumber *calleeUid; // @synthesize calleeUid=_calleeUid;
@property(retain, nonatomic) NSNumber *callerUid; // @synthesize callerUid=_callerUid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

