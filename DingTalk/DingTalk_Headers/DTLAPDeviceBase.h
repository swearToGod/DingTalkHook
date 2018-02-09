//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

@class DTBlueToothChecker, DTLocationAuthorizer;

@interface DTLAPDeviceBase : LAPluginBase
{
    DTBlueToothChecker *_btChecker;
    DTLocationAuthorizer *_locationAuthorizer;
}

+ (id)pluginExactName;
@property(retain, nonatomic) DTLocationAuthorizer *locationAuthorizer; // @synthesize locationAuthorizer=_locationAuthorizer;
@property(retain, nonatomic) DTBlueToothChecker *btChecker; // @synthesize btChecker=_btChecker;
- (void).cxx_destruct;
- (void)getPhoneInfo:(id)arg1 to:(id)arg2;
- (void)__exported__getPhoneInfo:(id)arg1 to:(id)arg2;
- (_Bool)gotoDeviceUnbindPage:(id)arg1 deviceType:(id)arg2 sn:(id)arg3 corpId:(id)arg4;
- (void)unBindDevice:(id)arg1 to:(id)arg2;
- (void)__exported__unBindDevice:(id)arg1 to:(id)arg2;
- (void)startBindDevice:(id)arg1 to:(id)arg2;
- (void)__exported__startBindDevice:(id)arg1 to:(id)arg2;
- (_Bool)openBluetoothSettingView;
- (void)enableBluetooth:(id)arg1 to:(id)arg2;
- (void)__exported__enableBluetooth:(id)arg1 to:(id)arg2;
- (_Bool)openLocationSettingView;
- (void)enableLocation:(id)arg1 to:(id)arg2;
- (void)__exported__enableLocation:(id)arg1 to:(id)arg2;
- (void)checkBluetoothState:(CDUnknownBlockType)arg1;
- (void)locatonAuthState:(CDUnknownBlockType)arg1;
- (void)getSettings:(id)arg1 to:(id)arg2;
- (void)__exported__getSettings:(id)arg1 to:(id)arg2;
- (void)getUUID:(id)arg1 to:(id)arg2;
- (void)__exported__getUUID:(id)arg1 to:(id)arg2;
- (void)dealloc;

@end

