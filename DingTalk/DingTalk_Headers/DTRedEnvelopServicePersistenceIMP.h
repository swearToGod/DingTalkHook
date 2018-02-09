//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTRedEnvelopServicePersistenceProtocol-Protocol.h"

@class NSString, OpenDatabase, OpenMDHandler;

@interface DTRedEnvelopServicePersistenceIMP : NSObject <DTRedEnvelopServicePersistenceProtocol>
{
    OpenDatabase *_dbConnection;
    OpenMDHandler *_redEnvelopHandler;
}

@property(retain, nonatomic) OpenMDHandler *redEnvelopHandler; // @synthesize redEnvelopHandler=_redEnvelopHandler;
@property(retain, nonatomic) OpenDatabase *dbConnection; // @synthesize dbConnection=_dbConnection;
- (void).cxx_destruct;
- (unsigned long long)unsendRedEnvelopRecordCount;
- (void)updateRedEnvelopRecordConfirmedBefore:(long long)arg1;
- (id)redEnvelopRecordWithBusinessId:(id)arg1;
- (_Bool)saveRedEnvelopRecord:(id)arg1;
- (id)initWithDbConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

