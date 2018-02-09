//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOperation, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface DTDLDownloader : NSObject
{
    double _downloadTimeout;
    long long _executionOrder;
    CDUnknownBlockType _headersFilter;
    NSOperationQueue *_downloadQueue;
    NSOperation *_lastAddedOperation;
    Class _operationClass;
    NSMutableDictionary *_URLCallbacks;
    NSMutableDictionary *_HTTPHeaders;
    NSObject<OS_dispatch_queue> *_barrierQueue;
}

+ (id)sharedDownloader;
+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *barrierQueue; // @synthesize barrierQueue=_barrierQueue;
@property(retain, nonatomic) NSMutableDictionary *HTTPHeaders; // @synthesize HTTPHeaders=_HTTPHeaders;
@property(retain, nonatomic) NSMutableDictionary *URLCallbacks; // @synthesize URLCallbacks=_URLCallbacks;
@property(nonatomic) Class operationClass; // @synthesize operationClass=_operationClass;
@property(nonatomic) __weak NSOperation *lastAddedOperation; // @synthesize lastAddedOperation=_lastAddedOperation;
@property(retain, nonatomic) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(copy, nonatomic) CDUnknownBlockType headersFilter; // @synthesize headersFilter=_headersFilter;
@property(nonatomic) long long executionOrder; // @synthesize executionOrder=_executionOrder;
@property(nonatomic) double downloadTimeout; // @synthesize downloadTimeout=_downloadTimeout;
- (void).cxx_destruct;
- (void)removeCallbacksForURL:(id)arg1;
- (id)callbacksForURL:(id)arg1;
- (void)addProgressCallback:(CDUnknownBlockType)arg1 andCompletedBlock:(CDUnknownBlockType)arg2 forURL:(id)arg3 createCallback:(CDUnknownBlockType)arg4;
- (id)downloadDataWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
@property(nonatomic) long long maxConcurrentDownloads;
@property(readonly, nonatomic) unsigned long long currentDownloadCount;
- (id)valueForHTTPHeaderField:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)dealloc;
- (id)init;

@end

