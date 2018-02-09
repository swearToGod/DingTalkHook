//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface H5AMDownloadManager : NSObject
{
    NSOperationQueue *_gOperationQueue;
}

+ (id)sharedDownloadMgr;
@property(retain, nonatomic) NSOperationQueue *gOperationQueue; // @synthesize gOperationQueue=_gOperationQueue;
- (void).cxx_destruct;
- (_Bool)removeDownloadFilesForURL:(id)arg1;
- (void)clearExpiredFile;
- (_Bool)isFileExistedForURL:(id)arg1;
- (void)cancelTaskForTag:(id)arg1;
- (id)downloadFileWithReq:(id)arg1;
- (id)init;

@end

