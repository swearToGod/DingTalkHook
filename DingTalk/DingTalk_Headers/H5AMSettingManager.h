//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface H5AMSettingManager : NSObject
{
    _Bool _isNeed2VerifyApp;
    _Bool _enableLwpDownload;
    _Bool _downloadOperationRollback;
    unsigned long long _serviceEnvironment;
    NSString *_documentDirectoryPath;
    NSString *_unzipRootPath;
    NSString *_downloadRootPath;
    NSString *_offlinePackageAppStorageFilePath;
    NSString *_offlinePackageAMRPath;
    NSString *_offlineAutoAppendId;
    NSString *_serverURLString4UpdateApps;
    NSString *_client;
    NSString *_platform;
    NSString *_sdkVersion;
    NSString *_clientVersion;
    NSString *_systemVersion;
    double _gcInterval;
}

+ (id)allocPrivate;
+ (id)defaultSetting;
@property _Bool downloadOperationRollback; // @synthesize downloadOperationRollback=_downloadOperationRollback;
@property _Bool enableLwpDownload; // @synthesize enableLwpDownload=_enableLwpDownload;
@property(nonatomic) _Bool isNeed2VerifyApp; // @synthesize isNeed2VerifyApp=_isNeed2VerifyApp;
@property(nonatomic) double gcInterval; // @synthesize gcInterval=_gcInterval;
@property(readonly, copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(readonly, copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(readonly, copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *client; // @synthesize client=_client;
@property(copy, nonatomic) NSString *serverURLString4UpdateApps; // @synthesize serverURLString4UpdateApps=_serverURLString4UpdateApps;
@property(copy, nonatomic) NSString *offlineAutoAppendId; // @synthesize offlineAutoAppendId=_offlineAutoAppendId;
@property(copy, nonatomic) NSString *offlinePackageAMRPath; // @synthesize offlinePackageAMRPath=_offlinePackageAMRPath;
@property(copy, nonatomic) NSString *offlinePackageAppStorageFilePath; // @synthesize offlinePackageAppStorageFilePath=_offlinePackageAppStorageFilePath;
@property(copy, nonatomic) NSString *downloadRootPath; // @synthesize downloadRootPath=_downloadRootPath;
@property(copy, nonatomic) NSString *unzipRootPath; // @synthesize unzipRootPath=_unzipRootPath;
@property(copy, nonatomic) NSString *documentDirectoryPath; // @synthesize documentDirectoryPath=_documentDirectoryPath;
@property(nonatomic) unsigned long long serviceEnvironment; // @synthesize serviceEnvironment=_serviceEnvironment;
- (void).cxx_destruct;
- (id)initPrivate;

@end

