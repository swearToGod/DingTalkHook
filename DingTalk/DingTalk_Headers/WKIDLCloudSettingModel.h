//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface WKIDLCloudSettingModel : Marshal
{
    NSString *_domainId;
    NSNumber *_openId;
    NSString *_moduleName;
    NSString *_key;
    NSString *_settingValue;
    NSNumber *_effectScope;
    NSNumber *_version;
}

@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(retain, nonatomic) NSNumber *effectScope; // @synthesize effectScope=_effectScope;
@property(copy, nonatomic) NSString *settingValue; // @synthesize settingValue=_settingValue;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(retain, nonatomic) NSNumber *openId; // @synthesize openId=_openId;
@property(copy, nonatomic) NSString *domainId; // @synthesize domainId=_domainId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

