//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class DTBleClient, NSString;

@interface DTBleServiceProxy : NSProxy
{
    Class _targetClass;
    NSString *_className;
    NSString *_channelUUID;
    NSString *_name;
    NSString *_serviceUUID;
    DTBleClient *_bleClient;
}

+ (void)handle:(id)arg1 response:(id)arg2 error:(id)arg3 handler:(id)arg4;
@property(retain, nonatomic) DTBleClient *bleClient; // @synthesize bleClient=_bleClient;
@property(copy, nonatomic) NSString *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *channelUUID; // @synthesize channelUUID=_channelUUID;
- (void).cxx_destruct;
- (void)handleInvocation:(id)arg1 isMainThread:(_Bool)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)reconnect;
- (void)dealloc;
- (id)initWithClass:(Class)arg1 channelUUID:(id)arg2 name:(id)arg3 serviceUUID:(id)arg4 timeout:(double)arg5 autoReconnect:(_Bool)arg6;
- (id)initWithClass:(Class)arg1 channelUUID:(id)arg2 name:(id)arg3 serviceUUID:(id)arg4;

@end
