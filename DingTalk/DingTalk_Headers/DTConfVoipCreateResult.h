//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSDictionary, NSNumber;

@interface DTConfVoipCreateResult : Marshal
{
    NSNumber *_conferenceId;
    NSArray *_passedUids;
    NSDictionary *_hangupUidMap;
}

@property(copy, nonatomic) NSDictionary *hangupUidMap; // @synthesize hangupUidMap=_hangupUidMap;
@property(copy, nonatomic) NSArray *passedUids; // @synthesize passedUids=_passedUids;
@property(retain, nonatomic) NSNumber *conferenceId; // @synthesize conferenceId=_conferenceId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

