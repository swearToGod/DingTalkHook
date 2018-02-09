//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_semaphore;

@interface BLFolderGlobalRefreshState : NSObject
{
    NSObject<OS_dispatch_semaphore> *_lock;
    NSMutableSet *_refreshingUUIDs;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableSet *refreshingUUIDs; // @synthesize refreshingUUIDs=_refreshingUUIDs;
- (void).cxx_destruct;
- (void)reset;
- (void)clearIsRefreshingForUUID:(id)arg1;
- (void)setIsRefreshingForUUID:(id)arg1;
- (_Bool)isRefreshingForUUID:(id)arg1;
- (id)init;

@end

