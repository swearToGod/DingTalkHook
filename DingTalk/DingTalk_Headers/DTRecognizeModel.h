//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSData, NSNumber, NSString;

@interface DTRecognizeModel : Marshal
{
    NSString *_corpId;
    NSString *_deviceUid;
    NSData *_image;
    NSNumber *_width;
    NSNumber *_height;
}

@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSData *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *deviceUid; // @synthesize deviceUid=_deviceUid;
@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

