//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LWPHostResolver;

@interface LWPNetworkDiagnoser : NSObject
{
    LWPHostResolver *_hostResolver;
}

+ (id)sharedInstance;
@property(retain, nonatomic) LWPHostResolver *hostResolver; // @synthesize hostResolver=_hostResolver;
- (void).cxx_destruct;
- (unsigned char)resolveHost:(id)arg1 completeCallback:(CDUnknownBlockType)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)detectHTTPURL:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)detectHTTPConnectable:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (void)detectWtlsocketConnectable:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)detectRawSocketsConnectable:(id)arg1 timeout:(double)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)detectRawSocketConnectable:(id)arg1 timeout:(double)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)detectRawSocketConnectable:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;

@end

