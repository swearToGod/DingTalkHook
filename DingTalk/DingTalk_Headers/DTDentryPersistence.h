//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class OpenDatabase, OpenMDHandler;

@interface DTDentryPersistence : NSObject
{
    OpenDatabase *_dbConnection;
    OpenMDHandler *_dentryOpHandler;
    OpenMDHandler *_dentryCategoryHandler;
}

@property(retain, nonatomic) OpenMDHandler *dentryCategoryHandler; // @synthesize dentryCategoryHandler=_dentryCategoryHandler;
@property(retain, nonatomic) OpenMDHandler *dentryOpHandler; // @synthesize dentryOpHandler=_dentryOpHandler;
@property(retain, nonatomic) OpenDatabase *dbConnection; // @synthesize dbConnection=_dbConnection;
- (void).cxx_destruct;
- (long long)findOperationCountByCategoryId:(long long)arg1;
- (id)findDentryOperationsWithCategoryId:(long long)arg1;
- (long long)numberOfCategory;
- (id)findOldestCategory;
- (id)findLatestCategories:(long long)arg1;
- (id)findCategoriesBefore:(long long)arg1 pageSize:(long long)arg2;
- (void)deleteAllCategories;
- (void)deleteDentryCategoriesBefore:(long long)arg1;
- (void)deleteDentryOperationsByCategoryID:(long long)arg1;
- (void)deleteDentryCategory:(long long)arg1;
- (void)saveDentryCategories:(id)arg1;
- (id)initWithDbConnection:(id)arg1;

@end

