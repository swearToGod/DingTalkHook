//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage;

@interface DTFaceVerifyResult : NSObject
{
    UIImage *_image;
    double _smileScore;
    long long _photoStatus;
}

@property(nonatomic) long long photoStatus; // @synthesize photoStatus=_photoStatus;
@property(nonatomic) double smileScore; // @synthesize smileScore=_smileScore;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end

