//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTATBeaconCheckInModel : Marshal
{
    NSString *_uuid;
    NSNumber *_major;
    NSNumber *_minor;
    NSNumber *_lat;
    NSNumber *_lon;
    NSNumber *_accuracy;
    NSArray *_wifiList;
    NSString *_deviceId;
    NSString *_atContext;
}

@property(copy, nonatomic) NSString *atContext; // @synthesize atContext=_atContext;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSArray *wifiList; // @synthesize wifiList=_wifiList;
@property(retain, nonatomic) NSNumber *accuracy; // @synthesize accuracy=_accuracy;
@property(retain, nonatomic) NSNumber *lon; // @synthesize lon=_lon;
@property(retain, nonatomic) NSNumber *lat; // @synthesize lat=_lat;
@property(retain, nonatomic) NSNumber *minor; // @synthesize minor=_minor;
@property(retain, nonatomic) NSNumber *major; // @synthesize major=_major;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

