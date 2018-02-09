//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol DTSearchEngineIndexDatabase <NSObject>
- (struct sqlite3 *)sqliteForScanReadForSearch;
- (struct sqlite3 *)sqliteForReadForSearch;
- (struct sqlite3 *)sqliteForHookForSearch;
- (void)removeSearchUpdateHookDatabase:(CDUnknownFunctionPointerType)arg1;
- (void)updateSearchHookDatabase:(CDUnknownFunctionPointerType)arg1 userInfo:(void *)arg2;
- (NSArray *)allTableNamesForSearch;
- (NSString *)databaseNameForSearch;
@end

