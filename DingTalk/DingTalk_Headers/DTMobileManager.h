//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTAppLaunchDelegate-Protocol.h"

@class NSString;

@interface DTMobileManager : NSObject <DTAppLaunchDelegate>
{
}

+ (id)sharedInstance;
- (void)saveName:(id)arg1 phones:(id)arg2 needCheck:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;
- (void)saveDingPhoneCloudSettingV2:(id)arg1 needCheck:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)saveDingPhoneCloudSetting:(id)arg1 needCheck:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)asyncDingMobileDidUpdate:(id)arg1;
- (void)asyncUpdateDingMobileIfNeeded;
- (void)applicationWillAuth;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

