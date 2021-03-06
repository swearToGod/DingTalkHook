//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTH5RocketConnectionProtocol-Protocol.h"

@class NSString, NSURLRequest;
@protocol DTH5RocketCacheProtocol, DTH5RocketConnectionDelegate;

@interface DTH5RocketConnectionIMP : NSObject <DTH5RocketConnectionProtocol>
{
    _Bool _refreshMode;
    id <DTH5RocketConnectionDelegate> _delegate;
    NSURLRequest *_request;
    double _timeout;
    id <DTH5RocketCacheProtocol> _cacheIMP;
}

@property(retain, nonatomic) id <DTH5RocketCacheProtocol> cacheIMP; // @synthesize cacheIMP=_cacheIMP;
@property(nonatomic) _Bool refreshMode; // @synthesize refreshMode=_refreshMode;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <DTH5RocketConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)callBackError:(id)arg1;
- (void)callBackSucess:(long long)arg1 data:(id)arg2;
- (id)responseWithIDLModel:(long long)arg1 data:(id)arg2;
- (void)cancelConnection;
- (void)stopConnection;
- (void)queryRemoteData;
- (void)startConnection;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

