//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTCSpaceListInfoPersistenceProtocol-Protocol.h"

@class NSCache, NSString, OpenDatabase, OpenMDHandler;

@interface DTCSpaceListInfoPersistenceIMP : NSObject <DTCSpaceListInfoPersistenceProtocol>
{
    OpenDatabase *_dbConnection;
    OpenMDHandler *_listInfoHandler;
    NSCache *_listInfoCache;
}

@property(retain, nonatomic) NSCache *listInfoCache; // @synthesize listInfoCache=_listInfoCache;
@property(retain, nonatomic) OpenMDHandler *listInfoHandler; // @synthesize listInfoHandler=_listInfoHandler;
@property(retain, nonatomic) OpenDatabase *dbConnection; // @synthesize dbConnection=_dbConnection;
- (void).cxx_destruct;
- (id)dentryListInfoWithSpaceId:(id)arg1 withFolderId:(id)arg2;
- (void)saveListInfo:(id)arg1;
- (id)initWithDbConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

