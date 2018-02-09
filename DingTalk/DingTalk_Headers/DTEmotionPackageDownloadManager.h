//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSRecursiveLock;

@interface DTEmotionPackageDownloadManager : NSObject
{
    NSRecursiveLock *_lock;
    NSMutableDictionary *_tasksTable;
    NSHashTable *_listeners;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)notifyDidFinishDownload:(id)arg1 succeed:(_Bool)arg2;
- (void)notifyDownloadingProgressChanged:(id)arg1;
- (void)notifyWillStartDownload:(id)arg1;
- (id)findDownloadTaskWithPackageId:(long long)arg1;
- (_Bool)isDownloading:(long long)arg1;
- (void)cancelAll;
- (void)cancel:(long long)arg1;
- (void)startDownloadTask:(id)arg1;
- (void)purchaseEmotionPackage:(id)arg1;
- (void)downloadWithPackage:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dequeue:(id)arg1;
- (void)enqueue:(id)arg1;
- (void)setup;
- (id)init;

@end

