//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class H5AMApp, H5AMAppManager, NSError;

@protocol H5AMAppManagerDelegate <NSObject>

@optional
- (void)h5AMAppManager:(H5AMAppManager *)arg1 unzipFail:(H5AMApp *)arg2 downloadMode:(unsigned long long)arg3 withError:(NSError *)arg4;
- (void)h5AMAppManager:(H5AMAppManager *)arg1 didUnzipApp:(H5AMApp *)arg2 downloadMode:(unsigned long long)arg3;
- (void)h5AMAppManager:(H5AMAppManager *)arg1 downloadFail:(H5AMApp *)arg2 mode:(unsigned long long)arg3 withError:(NSError *)arg4;
- (void)h5AMAppManager:(H5AMAppManager *)arg1 didDownloadApp:(H5AMApp *)arg2 mode:(unsigned long long)arg3;
- (_Bool)h5AMAppManager:(H5AMAppManager *)arg1 shouldDownloadApp:(H5AMApp *)arg2;
- (void)h5AMAppManager:(H5AMAppManager *)arg1 didSyncApp:(long long)arg2 success:(_Bool)arg3;
- (void)h5AMAppManager:(H5AMAppManager *)arg1 didUpdateApp:(long long)arg2 success:(_Bool)arg3;
@end

