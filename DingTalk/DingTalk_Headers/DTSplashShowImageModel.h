//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface DTSplashShowImageModel : NSObject
{
    _Bool _isOperational;
    UIImage *_showImage;
    NSString *_detailURL;
    unsigned long long _showTime;
}

@property(nonatomic) unsigned long long showTime; // @synthesize showTime=_showTime;
@property(copy, nonatomic) NSString *detailURL; // @synthesize detailURL=_detailURL;
@property(retain, nonatomic) UIImage *showImage; // @synthesize showImage=_showImage;
@property(nonatomic) _Bool isOperational; // @synthesize isOperational=_isOperational;
- (void).cxx_destruct;

@end

