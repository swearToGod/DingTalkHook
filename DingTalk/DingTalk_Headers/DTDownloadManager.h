//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface DTDownloadManager : NSObject
{
    NSMutableArray *_runningHandlers;
}

+ (_Bool)usingAllLWPDownload:(id)arg1;
+ (_Bool)usingLWPDownload:(id)arg1;
+ (_Bool)isMatchLWPHost:(id)arg1 forHostType:(long long)arg2;
+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *runningHandlers; // @synthesize runningHandlers=_runningHandlers;
- (void).cxx_destruct;
- (id)loadImageFromPath:(id)arg1 fileData:(id)arg2 url:(id)arg3 error:(id)arg4;
- (id)scaledImageForKey:(id)arg1 image:(id)arg2;
- (id)downloadBigImageWithSpaceId:(id)arg1 itemId:(id)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (id)downloadBigImageWithURL:(id)arg1 progress:(CDUnknownBlockType)arg2 completed:(CDUnknownBlockType)arg3;
- (id)init;

@end

