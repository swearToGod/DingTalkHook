//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"

@class CBCentralManager, CLBeaconRegion, CLLocationManager, NSMutableArray, NSString;

@interface LAIBeaconDetector : NSObject <CLLocationManagerDelegate, CBCentralManagerDelegate>
{
    _Bool _isRequestingAuthority;
    _Bool _started;
    _Bool _watchDogStarted;
    CLBeaconRegion *_beaconRegion;
    CLLocationManager *_locationManager;
    CBCentralManager *_centralManager;
    double _detectTimeout;
    NSMutableArray *_detectedBeacons;
    NSMutableArray *_validBeacons;
    double _expectDistance;
    CDUnknownBlockType _completeBlock;
}

+ (double)dt_estimateAccuracy_V1:(long long)arg1 rssi:(double)arg2;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) _Bool watchDogStarted; // @synthesize watchDogStarted=_watchDogStarted;
@property(nonatomic) double expectDistance; // @synthesize expectDistance=_expectDistance;
@property(retain, nonatomic) NSMutableArray *validBeacons; // @synthesize validBeacons=_validBeacons;
@property(retain, nonatomic) NSMutableArray *detectedBeacons; // @synthesize detectedBeacons=_detectedBeacons;
@property(nonatomic) double detectTimeout; // @synthesize detectTimeout=_detectTimeout;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(nonatomic) _Bool isRequestingAuthority; // @synthesize isRequestingAuthority=_isRequestingAuthority;
@property(retain, nonatomic) CLBeaconRegion *beaconRegion; // @synthesize beaconRegion=_beaconRegion;
- (void).cxx_destruct;
- (void)watchDogTimeOut;
- (void)stopWatchDog;
- (void)startWatchDog;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)callBackWithError:(id)arg1 timeOut:(_Bool)arg2;
- (void)callBackSuccess:(_Bool)arg1;
- (void)stopDetectOrdered;
- (void)startDetectOrdered;
- (void)checkAndStart;
- (void)detectRegions:(double)arg1 expectDistance:(double)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)detectRegions:(double)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)setDetectRegion:(id)arg1;
- (void)resetCentral;
- (_Bool)isStarted;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

