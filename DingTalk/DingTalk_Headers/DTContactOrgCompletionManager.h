//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTContactOrgCompletionManager : NSObject
{
}

+ (id)sharedInstance;
- (id)orgComplettionCacheKey:(long long)arg1;
- (void)fetchOrgCompletionModel:(id)arg1 success:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

@end

