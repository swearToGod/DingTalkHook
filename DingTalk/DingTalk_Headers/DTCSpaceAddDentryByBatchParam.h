//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTCSpaceDentryEncryptDetail, NSNumber, NSString;

@interface DTCSpaceAddDentryByBatchParam : Marshal
{
    NSNumber *_spaceId;
    NSString *_fileId;
    NSNumber *_targetSpaceId;
    NSString *_targetFolderId;
    NSString *_downloadUrl;
    NSNumber *_storeType;
    DTCSpaceDentryEncryptDetail *_encryptDetail;
    NSString *_cid;
    NSString *_targetFolderPath;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *targetFolderPath; // @synthesize targetFolderPath=_targetFolderPath;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) DTCSpaceDentryEncryptDetail *encryptDetail; // @synthesize encryptDetail=_encryptDetail;
@property(retain, nonatomic) NSNumber *storeType; // @synthesize storeType=_storeType;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(copy, nonatomic) NSString *targetFolderId; // @synthesize targetFolderId=_targetFolderId;
@property(retain, nonatomic) NSNumber *targetSpaceId; // @synthesize targetSpaceId=_targetSpaceId;
@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(retain, nonatomic) NSNumber *spaceId; // @synthesize spaceId=_spaceId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

