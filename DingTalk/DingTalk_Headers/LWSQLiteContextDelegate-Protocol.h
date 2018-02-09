//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol LWSQLiteContextDelegate <NSObject>
- (NSArray *)sqliteFetchObjectsWithSql:(NSString *)arg1 parameters:(NSArray *)arg2 database:(id)arg3 entityClazz:(Class)arg4 shardingId:(NSString *)arg5 onlyHookConn:(_Bool)arg6;
- (long long)sqliteGetRowIdWithEntity:(id)arg1;
- (NSString *)sqliteGetTableNameWithDatabase:(id)arg1 entityClazz:(Class)arg2 shardingId:(NSString *)arg3;
@end

