//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber;

@interface DTSmsModel : Marshal
{
    NSArray *_recvUidList;
    NSNumber *_smsType;
}

@property(retain, nonatomic) NSNumber *smsType; // @synthesize smsType=_smsType;
@property(copy, nonatomic) NSArray *recvUidList; // @synthesize recvUidList=_recvUidList;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

