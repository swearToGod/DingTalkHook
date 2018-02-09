//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTSfTunnelSocket;

@interface DTSfMiniSdk : NSObject
{
    DTSfTunnelSocket *_dtSfTunnelSocket;
    CDUnknownBlockType _resultBlock;
}

+ (id)getInstance;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) DTSfTunnelSocket *dtSfTunnelSocket; // @synthesize dtSfTunnelSocket=_dtSfTunnelSocket;
- (void).cxx_destruct;
- (id)buildScheme:(id)arg1 code:(id)arg2;
- (void)doStartVpnComplete:(long long)arg1;
- (void)doGetStartVpnResult:(id)arg1;
- (void)stopVPN:(id)arg1;
- (void)isVpnOnline:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)startVPN:(id)arg1 code:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (id)init;

@end

