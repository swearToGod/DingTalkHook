//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface DTBizRedEnvelopReceivedList : NSObject
{
    int _year;
    int _totalRedEnvelop;
    int _totalLuck;
    NSString *_totalAmount;
    NSArray *_redEnvelops;
}

@property(copy, nonatomic) NSArray *redEnvelops; // @synthesize redEnvelops=_redEnvelops;
@property(nonatomic) int totalLuck; // @synthesize totalLuck=_totalLuck;
@property(copy, nonatomic) NSString *totalAmount; // @synthesize totalAmount=_totalAmount;
@property(nonatomic) int totalRedEnvelop; // @synthesize totalRedEnvelop=_totalRedEnvelop;
@property(nonatomic) int year; // @synthesize year=_year;
- (void).cxx_destruct;

@end

