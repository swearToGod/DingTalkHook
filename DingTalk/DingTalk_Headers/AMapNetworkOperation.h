//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLConnectionDelegate-Protocol.h"

@class NSData, NSError, NSHTTPURLResponse, NSObject, NSOutputStream, NSRecursiveLock, NSSet, NSString, NSURLConnection, NSURLRequest;
@protocol OS_dispatch_queue;

@interface AMapNetworkOperation : NSOperation <NSURLConnectionDelegate>
{
    _Bool _finished;
    _Bool _executing;
    NSOutputStream *_outputStream;
    NSURLRequest *_request;
    NSHTTPURLResponse *_response;
    NSError *_error;
    NSData *_responseData;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSRecursiveLock *_lock;
    NSSet *_runLoopModes;
    CDUnknownBlockType _downloadProgress;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _backgroundTaskCleanup;
    NSURLConnection *_connection;
    long long _expectedSize;
    long long _totalBytesRead;
}

+ (id)networkRequestThread;
+ (void)networkRequestThreadEntryPoint:(id)arg1;
@property(nonatomic) long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(nonatomic) long long expectedSize; // @synthesize expectedSize=_expectedSize;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) CDUnknownBlockType backgroundTaskCleanup; // @synthesize backgroundTaskCleanup=_backgroundTaskCleanup;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(retain, nonatomic) NSSet *runLoopModes; // @synthesize runLoopModes=_runLoopModes;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)setShouldExecuteAsBackgroundTaskWithExpirationHandler:(CDUnknownBlockType)arg1;
- (void)setDownloadProgressBlock:(CDUnknownBlockType)arg1;
- (void)setCompletionHandlerBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
- (_Bool)isAsynchronous;
- (_Bool)isConcurrent;
- (void)cancel;
- (void)start;
- (void)done;
- (void)reset;
- (void)invokeCompletionBlock;
- (void)startConnection;
- (void)cancelConnection;
- (void)deallocOperation;
- (void)dealloc;
- (id)init;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

