//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, UIColor, UIImage;

@interface MAUserLocationRepresentation : NSObject
{
    _Bool _showsAccuracyRing;
    _Bool _showsHeadingIndicator;
    UIImage *_image;
    double _lineWidth;
    UIColor *_fillColor;
    UIColor *_strokeColor;
    NSArray *_lineDashPattern;
}

@property(copy, nonatomic) NSArray *lineDashPattern; // @synthesize lineDashPattern=_lineDashPattern;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) _Bool showsHeadingIndicator; // @synthesize showsHeadingIndicator=_showsHeadingIndicator;
@property(nonatomic) _Bool showsAccuracyRing; // @synthesize showsAccuracyRing=_showsAccuracyRing;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)init;

@end

