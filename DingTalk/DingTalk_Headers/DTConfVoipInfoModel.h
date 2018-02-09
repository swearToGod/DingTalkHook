//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSNumber;

@interface DTConfVoipInfoModel : NSObject <NSCopying>
{
    NSNumber *_conferenceId;
    NSNumber *_hostUid;
    NSArray *_calleeUids;
    NSNumber *_calleeCount;
}

@property(retain, nonatomic) NSNumber *calleeCount; // @synthesize calleeCount=_calleeCount;
@property(copy, nonatomic) NSArray *calleeUids; // @synthesize calleeUids=_calleeUids;
@property(retain, nonatomic) NSNumber *hostUid; // @synthesize hostUid=_hostUid;
@property(retain, nonatomic) NSNumber *conferenceId; // @synthesize conferenceId=_conferenceId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

