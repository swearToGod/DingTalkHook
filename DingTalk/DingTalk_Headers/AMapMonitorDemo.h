//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AMapLocationManagerDelegate-Protocol.h"

@class AMapLocationManager, NSString, UILabel;

@interface AMapMonitorDemo : NSObject <AMapLocationManagerDelegate>
{
    AMapLocationManager *_locationManager;
    UILabel *_tipsLabel;
}

+ (id)shareInstance;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) AMapLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)amapLocationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)amapLocationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)amapLocationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)amapLocationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)amapLocationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)amapLocationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
- (void)amapLocationManager:(id)arg1 didUpdateLocation:(id)arg2;
- (void)updateLabelWithText:(id)arg1;
- (void)testMonitor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

