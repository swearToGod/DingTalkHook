//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor;

@interface DTGraffitiDrawLine : NSObject
{
    double _width;
    UIColor *_color;
    struct CGPoint _mid1;
    struct CGPoint _previous;
    struct CGPoint _mid2;
    struct CGPoint _cur;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) struct CGPoint cur; // @synthesize cur=_cur;
@property(nonatomic) struct CGPoint mid2; // @synthesize mid2=_mid2;
@property(nonatomic) struct CGPoint previous; // @synthesize previous=_previous;
@property(nonatomic) struct CGPoint mid1; // @synthesize mid1=_mid1;
- (void).cxx_destruct;
- (id)init;

@end
