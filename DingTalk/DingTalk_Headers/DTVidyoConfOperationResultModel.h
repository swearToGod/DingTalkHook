//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTVidyoConfOperationResultModel : Marshal
{
    NSNumber *_code;
    NSString *_cause;
    NSString *_userLinkLocationTag;
    NSNumber *_confCameraStatus;
    NSNumber *_confMicStatus;
}

@property(retain, nonatomic) NSNumber *confMicStatus; // @synthesize confMicStatus=_confMicStatus;
@property(retain, nonatomic) NSNumber *confCameraStatus; // @synthesize confCameraStatus=_confCameraStatus;
@property(copy, nonatomic) NSString *userLinkLocationTag; // @synthesize userLinkLocationTag=_userLinkLocationTag;
@property(copy, nonatomic) NSString *cause; // @synthesize cause=_cause;
@property(retain, nonatomic) NSNumber *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

