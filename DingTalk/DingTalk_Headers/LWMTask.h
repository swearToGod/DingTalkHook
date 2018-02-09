//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LWPRequest, RequestHandler;

@interface LWMTask : NSObject
{
    LWPRequest *_request;
    RequestHandler *_handler;
    _Bool _isMainThread;
    _Bool _cancelTask;
}

- (void).cxx_destruct;
- (void)executeInQueue:(id)arg1 specificKey:(void *)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)handle:(id)arg1 response:(id)arg2 error:(id)arg3 handler:(id)arg4;
- (void)configRequest:(id)arg1;
- (void)sendMessage;
- (void)cancel;
- (id)initWithRequest:(id)arg1 handler:(id)arg2 isMainThread:(_Bool)arg3;

@end

