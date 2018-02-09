//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, UIColor;

@interface DTRadarChartSample : NSObject
{
    _Bool _isShowLine;
    NSArray *_values;
    UIColor *_color;
    double _opacity;
    double _lineWidth;
}

+ (id)sampleWithColor:(id)arg1 opacity:(double)arg2 isShowLine:(_Bool)arg3;
@property(nonatomic) _Bool isShowLine; // @synthesize isShowLine=_isShowLine;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (id)init;

@end

