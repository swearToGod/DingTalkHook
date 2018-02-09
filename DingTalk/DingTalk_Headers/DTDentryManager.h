//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTDentryPersistence;

@interface DTDentryManager : NSObject
{
    DTDentryPersistence *_persistence;
}

@property(retain, nonatomic) DTDentryPersistence *persistence; // @synthesize persistence=_persistence;
- (void).cxx_destruct;
- (id)dentryIndexEnd;
- (id)dentryIndexBegin;
- (void)clearDentrySyncKeyIfNeeded;
- (long long)numberOfCategories;
- (id)findDentryOperationsWithCategoryId:(long long)arg1;
- (void)findOdestOperation:(CDUnknownBlockType)arg1;
- (void)findCategoriesBefore:(long long)arg1 pageSize:(long long)arg2 success:(CDUnknownBlockType)arg3;
- (void)listRecentOperationWithOffSet:(id)arg1 length:(long long)arg2 direction:(long long)arg3 success:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)init;

@end

