//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTDingAtmInfoModel : Marshal
{
    _Bool _isAtmAdmin;
    NSString *_corpId;
    NSNumber *_deviceUid;
    NSNumber *_devId;
    NSNumber *_devServId;
    NSString *_deviceName;
    NSNumber *_distance;
}

@property(retain, nonatomic) NSNumber *distance; // @synthesize distance=_distance;
@property(nonatomic) _Bool isAtmAdmin; // @synthesize isAtmAdmin=_isAtmAdmin;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) NSNumber *devServId; // @synthesize devServId=_devServId;
@property(retain, nonatomic) NSNumber *devId; // @synthesize devId=_devId;
@property(retain, nonatomic) NSNumber *deviceUid; // @synthesize deviceUid=_deviceUid;
@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

