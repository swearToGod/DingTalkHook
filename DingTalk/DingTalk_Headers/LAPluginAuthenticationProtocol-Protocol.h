//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL;
@protocol LAPluginAuthenticationCenterDelegate;

@protocol LAPluginAuthenticationProtocol <NSObject>
@property(nonatomic) __weak id <LAPluginAuthenticationCenterDelegate> delegate;
- (_Bool)wxApiShouldBeCall:(NSURL *)arg1 wxModule:(NSString *)arg2 wxApi:(NSString *)arg3;
- (_Bool)isInternalJsApi:(NSString *)arg1;
- (_Bool)jsapiShouldBeResponsed:(NSString *)arg1;
- (void)setAuthedJsApis:(NSDictionary *)arg1;
@end

