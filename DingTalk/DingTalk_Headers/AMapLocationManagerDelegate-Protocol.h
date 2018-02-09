//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AMapLocationManager, AMapLocationReGeocode, AMapLocationRegion, CLLocation, NSError;

@protocol AMapLocationManagerDelegate <NSObject>

@optional
- (void)amapLocationManager:(AMapLocationManager *)arg1 monitoringDidFailForRegion:(AMapLocationRegion *)arg2 withError:(NSError *)arg3;
- (void)amapLocationManager:(AMapLocationManager *)arg1 didDetermineState:(long long)arg2 forRegion:(AMapLocationRegion *)arg3;
- (void)amapLocationManager:(AMapLocationManager *)arg1 didExitRegion:(AMapLocationRegion *)arg2;
- (void)amapLocationManager:(AMapLocationManager *)arg1 didEnterRegion:(AMapLocationRegion *)arg2;
- (void)amapLocationManager:(AMapLocationManager *)arg1 didStartMonitoringForRegion:(AMapLocationRegion *)arg2;
- (void)amapLocationManager:(AMapLocationManager *)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)amapLocationManager:(AMapLocationManager *)arg1 didUpdateLocation:(CLLocation *)arg2 reGeocode:(AMapLocationReGeocode *)arg3;
- (void)amapLocationManager:(AMapLocationManager *)arg1 didUpdateLocation:(CLLocation *)arg2;
- (void)amapLocationManager:(AMapLocationManager *)arg1 didFailWithError:(NSError *)arg2;
@end

