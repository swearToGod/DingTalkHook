//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber;

@interface WKIDLCloudSettingPushModel : Marshal
{
    NSArray *_cloudSettings;
    NSNumber *_latestVersion;
}

@property(retain, nonatomic) NSNumber *latestVersion; // @synthesize latestVersion=_latestVersion;
@property(copy, nonatomic) NSArray *cloudSettings; // @synthesize cloudSettings=_cloudSettings;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

