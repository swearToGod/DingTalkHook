//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTScaleCenter : NSObject
{
    _Bool _enableScale;
    NSString *_fontScale;
    double _scale;
}

+ (double)getCurrentScale:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool enableScale; // @synthesize enableScale=_enableScale;
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fontScale; // @synthesize fontScale=_fontScale;
- (void)dealloc;
- (id)init;

@end

