//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber;

@interface DTCSpaceListShareParam : Marshal
{
    NSNumber *_orgId;
    NSNumber *_shareType;
    NSNumber *_sortType;
    NSNumber *_offset;
    NSNumber *_length;
}

@property(retain, nonatomic) NSNumber *length; // @synthesize length=_length;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSNumber *sortType; // @synthesize sortType=_sortType;
@property(retain, nonatomic) NSNumber *shareType; // @synthesize shareType=_shareType;
@property(retain, nonatomic) NSNumber *orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
