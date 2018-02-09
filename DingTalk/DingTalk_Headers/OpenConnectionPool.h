//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSRecursiveLock, OpenConnPriScheduler, OpenConnection;
@protocol OpenConnectionPoolDelegate;

@interface OpenConnectionPool : NSObject
{
    _Bool _multiConnAvailable;
    _Bool _closed;
    OpenConnection *_rwConnection;
    id <OpenConnectionPoolDelegate> _delegate;
    NSArray *_readConnections;
    NSRecursiveLock *_lock;
    OpenConnPriScheduler *_readScheduler;
    OpenConnPriScheduler *_writeScheduler;
}

@property(retain, nonatomic) OpenConnPriScheduler *writeScheduler; // @synthesize writeScheduler=_writeScheduler;
@property(retain, nonatomic) OpenConnPriScheduler *readScheduler; // @synthesize readScheduler=_readScheduler;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(copy, nonatomic) NSArray *readConnections; // @synthesize readConnections=_readConnections;
@property(readonly, nonatomic) _Bool multiConnAvailable; // @synthesize multiConnAvailable=_multiConnAvailable;
@property(readonly, nonatomic) __weak id <OpenConnectionPoolDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) OpenConnection *rwConnection; // @synthesize rwConnection=_rwConnection;
- (void).cxx_destruct;
- (void)closeReadConnections;
- (void)closeAll;
- (void)performWithPriority:(long long)arg1 isRead:(_Bool)arg2 processBlock:(CDUnknownBlockType)arg3;
- (id)idleReadConnection;
- (void)openAllReadConnectionsInTranscation;
- (_Bool)_judgeWalCheckpoint;
- (id)openReadWriteConnection:(_Bool)arg1 error:(id *)arg2;
- (id)initWithDelegate:(id)arg1 needMultiConn:(_Bool)arg2 optimizeWal:(_Bool)arg3 error:(id *)arg4;
- (id)initWithDelegate:(id)arg1 needMultiConn:(_Bool)arg2 optimizeWal:(_Bool)arg3;
- (id)init;

@end

