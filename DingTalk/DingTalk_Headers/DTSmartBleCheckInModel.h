//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTSmartBleCheckInModel : NSObject
{
    _Bool _intraRegional;
    long long _enterExitVerion;
    long long _checkInResult;
    double _checkInTime;
    double _startCheckInTime;
}

@property(nonatomic) _Bool intraRegional; // @synthesize intraRegional=_intraRegional;
@property(nonatomic) double startCheckInTime; // @synthesize startCheckInTime=_startCheckInTime;
@property(nonatomic) double checkInTime; // @synthesize checkInTime=_checkInTime;
@property(nonatomic) long long checkInResult; // @synthesize checkInResult=_checkInResult;
@property(nonatomic) long long enterExitVerion; // @synthesize enterExitVerion=_enterExitVerion;

@end

