//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol LAContainerInterceptorDelegate, LAMicroAppContextProtocol;

@protocol LAContainerInterceptorProtocol <NSObject>
@property(nonatomic) __weak id <LAMicroAppContextProtocol> microAppContext;
@property(nonatomic) __weak id <LAContainerInterceptorDelegate> delegate;
- (_Bool)hasHPMPakageMounted;
- (void)resetContainerInterceptors;
- (void)setupContainerInterceptors;
- (id)initWithURL:(NSURL *)arg1 delegate:(id <LAContainerInterceptorDelegate>)arg2 microAppContext:(id <LAMicroAppContextProtocol>)arg3;
- (id)initWithURL:(NSURL *)arg1 delegate:(id <LAContainerInterceptorDelegate>)arg2;
@end

