//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber;

@interface DTCalendarNewestModel : Marshal
{
    NSArray *_repeatCalendars;
    NSNumber *_repeatHasMore;
    NSArray *_nonRepeatCalendars;
    NSNumber *_nonRepeatHasMore;
    NSNumber *_maxVersion;
    NSNumber *_nonRepeatMinStartTime;
}

@property(retain, nonatomic) NSNumber *nonRepeatMinStartTime; // @synthesize nonRepeatMinStartTime=_nonRepeatMinStartTime;
@property(retain, nonatomic) NSNumber *maxVersion; // @synthesize maxVersion=_maxVersion;
@property(retain, nonatomic) NSNumber *nonRepeatHasMore; // @synthesize nonRepeatHasMore=_nonRepeatHasMore;
@property(copy, nonatomic) NSArray *nonRepeatCalendars; // @synthesize nonRepeatCalendars=_nonRepeatCalendars;
@property(retain, nonatomic) NSNumber *repeatHasMore; // @synthesize repeatHasMore=_repeatHasMore;
@property(copy, nonatomic) NSArray *repeatCalendars; // @synthesize repeatCalendars=_repeatCalendars;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

