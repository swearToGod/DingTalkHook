//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol DTLocationManagerDelegate;

@protocol DTLocationManager <NSObject>
@property(nonatomic) double dt_targetAccuracy;
@property(nonatomic) _Bool dt_allowBackgroundLocationUpdates;
@property(nonatomic) _Bool dt_pausesLocationUpdatesAutomatically;
@property(nonatomic) double dt_desiredAccuracy;
@property(nonatomic) double dt_distanceFilter;
@property(nonatomic) __weak id <DTLocationManagerDelegate> dt_delegate;
- (void)dt_requestLocationWithReGeocode:(_Bool)arg1 completion:(void (^)(CLLocation *, DTLocationReGeoCode *, NSError *))arg2;
- (void)dt_stopUpdatingLocation;
- (void)dt_startUpdatingLocation;
@end

