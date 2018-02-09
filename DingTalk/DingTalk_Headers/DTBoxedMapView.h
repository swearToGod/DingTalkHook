//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLLocation, NSArray, UIView;

@interface DTBoxedMapView : NSObject
{
    UIView *_mapView;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak UIView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)takeSnapshotInRect:(struct CGRect)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (void)addPointAnnotation:(struct CLLocationCoordinate2D)arg1 title:(id)arg2;
@property(readonly, nonatomic) struct CLLocationCoordinate2D regionCenter;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate;
@property(readonly, nonatomic) NSArray *annotations;
@property(readonly, nonatomic) CLLocation *userLocationSimple;
@property(nonatomic) _Bool showsUserLocation;
- (id)initWithType:(unsigned long long)arg1 mapView:(id)arg2;

@end

