//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MAMapView;
@protocol MADataSource;

@interface MAMapTiledLayerView : UIView
{
    id <MADataSource> _dataSource;
    _Bool _useSnapshotRenderer;
    MAMapView *_mapView;
}

+ (Class)layerClass;
@property(readonly, nonatomic) id <MADataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak MAMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) _Bool useSnapshotRenderer; // @synthesize useSnapshotRenderer=_useSnapshotRenderer;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)deallocOperation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 mapView:(id)arg2 withDataSource:(id)arg3;
- (id)tiledLayer;

@end

