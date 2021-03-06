//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;

@interface DTSmartDeviceNetworkIMP : NSObject
{
    NSDate *_lastOpenRequestTimestamp;
}

+ (id)errorWithResultError:(id)arg1 cause:(id)arg2;
- (void).cxx_destruct;
- (void)getDeviceEndorsement:(id)arg1 devTypeCode:(id)arg2 devId:(id)arg3 major:(id)arg4 minor:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)getDeviceSecret:(id)arg1 devId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)getDeviceLiteAppUrl:(id)arg1 deviceId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)syncDeviceInfos:(CDUnknownBlockType)arg1;
- (void)unbind:(id)arg1 deviceType:(id)arg2 sn:(id)arg3 deviceUid:(id)arg4 finishBlock:(CDUnknownBlockType)arg5;
- (void)bindWithCorpId:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)getDeviceInfo:(id)arg1 deviceId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)getApTerminalInfo:(long long)arg1 uid:(long long)arg2 callback:(CDUnknownBlockType)arg3;
- (void)callRemote:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)openLock:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;

@end

