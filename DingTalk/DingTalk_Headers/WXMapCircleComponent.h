//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXMapPolygonComponent.h"

@class NSArray;

@interface WXMapCircleComponent : WXMapPolygonComponent
{
    NSArray *_center;
    double _radius;
}

@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(retain, nonatomic) NSArray *center; // @synthesize center=_center;
- (void).cxx_destruct;
- (void)updateAttributes:(id)arg1;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

@end

