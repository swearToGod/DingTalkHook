//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CacheService : NSObject
{
}

+ (id)getInstance;
- (id)getCacheKey:(id)arg1;
- (void)clearCacheWithRequest:(id)arg1;
- (void)cacheWithResponse:(id)arg1;
- (id)getWithRequest:(id)arg1;
- (id)getThresholdResponseWithRequest:(id)arg1;
- (id)getResponseWithRequest:(id)arg1;
- (id)init;

@end

