//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTOrgRightsInfo : Marshal
{
    NSNumber *_orgId;
    NSNumber *_type;
    NSString *_deptIds;
    NSString *_uids;
    NSNumber *_capacity;
    NSNumber *_status;
    NSNumber *_oldTime;
    NSNumber *_count;
    NSNumber *_endTime;
}

@property(retain, nonatomic) NSNumber *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSNumber *oldTime; // @synthesize oldTime=_oldTime;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *capacity; // @synthesize capacity=_capacity;
@property(copy, nonatomic) NSString *uids; // @synthesize uids=_uids;
@property(copy, nonatomic) NSString *deptIds; // @synthesize deptIds=_deptIds;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

