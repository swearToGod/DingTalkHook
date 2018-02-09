//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBoxedMapView, NSError, NSObject, UIView;

@protocol DTBoxedMapViewDelegate <NSObject>
- (UIView *)boxedMapView:(DTBoxedMapView *)arg1 viewForAnnotation:(id)arg2;
- (void)boxedMapView:(DTBoxedMapView *)arg1 didFailToLocateUserWithError:(NSError *)arg2;
- (void)boxedMapView:(DTBoxedMapView *)arg1 didUpdateUserLocation:(NSObject *)arg2 updatingLocation:(_Bool)arg3;
- (void)boxedMapView:(DTBoxedMapView *)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)boxedMapView:(DTBoxedMapView *)arg1 mapDidMoveByUser:(_Bool)arg2;
@end

