//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSString;

@interface AMapLocalWeatherLive : AMapSearchObject
{
    NSString *_adcode;
    NSString *_province;
    NSString *_city;
    NSString *_weather;
    NSString *_temperature;
    NSString *_windDirection;
    NSString *_windPower;
    NSString *_humidity;
    NSString *_reportTime;
}

+ (id)ajo_mapping;
@property(copy, nonatomic) NSString *reportTime; // @synthesize reportTime=_reportTime;
@property(copy, nonatomic) NSString *humidity; // @synthesize humidity=_humidity;
@property(copy, nonatomic) NSString *windPower; // @synthesize windPower=_windPower;
@property(copy, nonatomic) NSString *windDirection; // @synthesize windDirection=_windDirection;
@property(copy, nonatomic) NSString *temperature; // @synthesize temperature=_temperature;
@property(copy, nonatomic) NSString *weather; // @synthesize weather=_weather;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *adcode; // @synthesize adcode=_adcode;
- (void).cxx_destruct;
- (id)init;

@end

