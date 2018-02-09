//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, YYThreadSafeDictionary;

@interface DTUserConfigurationManager : NSObject
{
    NSDictionary *_orgSettingDic;
    NSDictionary *_userSettingDic;
    YYThreadSafeDictionary *_enhancedSwitchDic;
}

+ (id)shareInstance;
+ (_Bool)enhancedBetaFunctionEnable:(id)arg1 forOrgId:(long long)arg2;
+ (_Bool)enhancedBetaFunctionEnable:(id)arg1 withDefaultValue:(_Bool)arg2;
+ (void)betaFunctionAfterLoginEnable:(id)arg1 orgId:(long long)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (_Bool)betaFunctionEnable:(id)arg1 withDefaultValue:(_Bool)arg2;
+ (_Bool)betaFunctionEnable:(id)arg1 forOrgId:(long long)arg2;
+ (_Bool)betaFunctionEnable:(id)arg1;
@property(retain) YYThreadSafeDictionary *enhancedSwitchDic; // @synthesize enhancedSwitchDic=_enhancedSwitchDic;
@property(copy) NSDictionary *userSettingDic; // @synthesize userSettingDic=_userSettingDic;
@property(copy) NSDictionary *orgSettingDic; // @synthesize orgSettingDic=_orgSettingDic;
- (void).cxx_destruct;
- (id)stringValueWithData:(id)arg1;
- (id)dataWithStringValue:(id)arg1;
- (id)fileNameWithKey:(id)arg1;
- (id)userFileModuleWithKey:(id)arg1 data:(id)arg2;
- (id)userValueForKey:(id)arg1;
- (void)setUserValue:(id)arg1 forKey:(id)arg2;
- (id)dicWithJsonString:(id)arg1;
- (id)jsonStringWithDictionary:(id)arg1;
- (id)parseEnhancedSwitchSettings;
- (id)enhancedSettingForSwitchKey:(id)arg1;
- (void)asyncSaveEnhancedSettingsV2;
- (void)clearEnhancedDictionarysV2;
- (void)initEnhancedDictionarysV2;
- (id)userSettingValueForKey:(id)arg1;
- (id)orgSettingValueForOrg:(long long)arg1 withKey:(id)arg2;
- (id)orgSettingForOrg:(long long)arg1;
- (id)orgSettingForKey:(id)arg1;
- (id)userSetting;
- (id)allOrgSettings;
- (void)reloadOrgSetting;
- (void)onAccountLogoutNotification;
- (void)cSConfigInfoUpdatedNotification;
- (void)addObserver;
- (id)init;

@end

