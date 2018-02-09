//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTBeaconServicePersistenceProtocol-Protocol.h"

@class DTWorkPersistence, NSString, OpenDatabase;

@interface DTBeaconServicePersistenceIMP : NSObject <DTBeaconServicePersistenceProtocol>
{
    OpenDatabase *_dbConnection;
    DTWorkPersistence *_workPersistence;
}

@property(retain, nonatomic) DTWorkPersistence *workPersistence; // @synthesize workPersistence=_workPersistence;
@property(retain, nonatomic) OpenDatabase *dbConnection; // @synthesize dbConnection=_dbConnection;
- (void).cxx_destruct;
- (void)asyncMonitorBeaconWithUUID:(id)arg1 major:(long long)arg2 minor:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchMonitorBeacons:(CDUnknownBlockType)arg1;
- (void)asyncSaveAtMonitorBeacons:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)localStorageKeyForBeaconKeys;
- (id)localStorageKey:(id)arg1 major:(long long)arg2 minor:(long long)arg3;
- (id)initWithDbConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

