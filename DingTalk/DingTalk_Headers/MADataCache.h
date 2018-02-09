//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MADataCache-Protocol.h"

@class MAMemoryCache, NSArray, NSMutableArray, NSString;
@protocol MADataSource, OS_dispatch_queue;

@interface MADataCache : NSObject <MADataCache>
{
    NSMutableArray *_dataCaches;
    MAMemoryCache *_memoryCache;
    MAMemoryCache *_trafficCache;
    double _expiryPeriod;
    NSObject<OS_dispatch_queue> *_dataCacheQueue;
    id <MADataSource> _activeDataSource;
}

+ (id)tileKey:(CDStruct_c8e85508)arg1 cacheKey:(id)arg2;
+ (id)tileHash:(CDStruct_c8e85508)arg1;
@property(readonly, nonatomic) NSArray *dataCaches; // @synthesize dataCaches=_dataCaches;
- (void).cxx_destruct;
- (void)removeAllCachedImagesForCacheKey:(id)arg1;
- (void)removeAllCachedImages;
- (void)didReceiveMemoryWarning;
- (void)addImage:(id)arg1 forTile:(CDStruct_c8e85508)arg2 withCacheKey:(id)arg3;
- (id)cachedImage:(CDStruct_c8e85508)arg1 withCacheKey:(id)arg2;
- (id)tileCaches;
- (void)insertCache:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addCache:(id)arg1;
- (id)init;
- (id)initWithExpiryPeriod:(double)arg1;
- (void)initDiskCache;
- (void)initMemoryCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

