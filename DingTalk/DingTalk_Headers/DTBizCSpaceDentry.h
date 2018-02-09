//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "DTSpaceDentry-Protocol.h"
#import "OpenModelProtocol-Protocol.h"

@class NSData, NSNumber, NSString;

@interface DTBizCSpaceDentry : OpenModel <OpenModelProtocol, DTSpaceDentry>
{
    _Bool _autoRename;
    _Bool _isEncrypt;
    _Bool _priority;
    _Bool _waitingForEdit;
    unsigned long long _primaryKey;
    NSString *_itemId;
    long long _size;
    NSString *_path;
    NSString *_name;
    NSString *_type;
    NSString *_contentType;
    NSString *_extension;
    double _createTime;
    NSString *_creatorUid;
    long long _creatorSite;
    NSString *_modifierUid;
    long long _modifierSite;
    double _modifiedTime;
    NSString *_version;
    double _expireTime;
    NSString *_thumbnailUrl;
    NSString *_parentPath;
    NSString *_parentId;
    long long _spaceId;
    long long _uploadedSize;
    NSString *_uploadId;
    long long _uploadStatus;
    NSString *_uploadStoreUrl;
    NSString *_extendInfo;
    long long _downloadedSize;
    long long _downloadStatus;
    NSString *_sortKey;
    long long _dirty;
    NSString *_uuid;
    NSString *_extDictStr;
    NSNumber *_downloadCount;
    NSNumber *_previewCount;
    NSNumber *_transferCount;
    long long _appId;
    long long _orgId;
    NSString *_storeId;
    unsigned long long _actions;
    NSString *_mediaId;
    NSString *_authMediaId;
    NSString *_authCode;
    long long _rotation;
    NSNumber *_sourceDuration;
    NSNumber *_sourceWidth;
    NSNumber *_sourceHeight;
    NSNumber *_sourceDataSize;
    NSNumber *_editorCount;
    NSNumber *_noEditorCount;
    NSString *_convId;
    NSNumber *_mid;
}

+ (unsigned long long)currentNewestVersion;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
+ (id)cacheKeyWithKey:(id)arg1;
+ (id)hashKeyWithKey:(id)arg1;
+ (id)fileIcons;
+ (void)setIsAlreadyDeleted:(id)arg1;
+ (_Bool)isAlreadyDeleted:(id)arg1;
+ (id)isDeleteDictionary;
+ (id)modelFromBizDentry:(id)arg1 token:(id)arg2;
@property(retain, nonatomic) NSNumber *mid; // @synthesize mid=_mid;
@property(copy, nonatomic) NSString *convId; // @synthesize convId=_convId;
@property(nonatomic) _Bool waitingForEdit; // @synthesize waitingForEdit=_waitingForEdit;
@property(retain, nonatomic) NSNumber *noEditorCount; // @synthesize noEditorCount=_noEditorCount;
@property(retain, nonatomic) NSNumber *editorCount; // @synthesize editorCount=_editorCount;
@property(retain, nonatomic) NSNumber *sourceDataSize; // @synthesize sourceDataSize=_sourceDataSize;
@property(retain, nonatomic) NSNumber *sourceHeight; // @synthesize sourceHeight=_sourceHeight;
@property(retain, nonatomic) NSNumber *sourceWidth; // @synthesize sourceWidth=_sourceWidth;
@property(retain, nonatomic) NSNumber *sourceDuration; // @synthesize sourceDuration=_sourceDuration;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
@property(copy, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(copy, nonatomic) NSString *authMediaId; // @synthesize authMediaId=_authMediaId;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(nonatomic) unsigned long long actions; // @synthesize actions=_actions;
@property(copy, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(nonatomic) _Bool priority; // @synthesize priority=_priority;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(nonatomic) long long appId; // @synthesize appId=_appId;
@property(nonatomic) _Bool isEncrypt; // @synthesize isEncrypt=_isEncrypt;
@property(retain, nonatomic) NSNumber *transferCount; // @synthesize transferCount=_transferCount;
@property(retain, nonatomic) NSNumber *previewCount; // @synthesize previewCount=_previewCount;
@property(retain, nonatomic) NSNumber *downloadCount; // @synthesize downloadCount=_downloadCount;
@property(copy, nonatomic) NSString *extDictStr; // @synthesize extDictStr=_extDictStr;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) long long dirty; // @synthesize dirty=_dirty;
@property(copy, nonatomic) NSString *sortKey; // @synthesize sortKey=_sortKey;
@property(nonatomic) long long downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(nonatomic) long long downloadedSize; // @synthesize downloadedSize=_downloadedSize;
@property(copy, nonatomic) NSString *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(copy, nonatomic) NSString *uploadStoreUrl; // @synthesize uploadStoreUrl=_uploadStoreUrl;
@property(nonatomic) long long uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(copy, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(nonatomic) long long uploadedSize; // @synthesize uploadedSize=_uploadedSize;
@property(nonatomic) _Bool autoRename; // @synthesize autoRename=_autoRename;
@property(nonatomic) long long spaceId; // @synthesize spaceId=_spaceId;
@property(copy, nonatomic) NSString *parentId; // @synthesize parentId=_parentId;
@property(copy, nonatomic) NSString *parentPath; // @synthesize parentPath=_parentPath;
@property(copy, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(nonatomic) double expireTime; // @synthesize expireTime=_expireTime;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) double modifiedTime; // @synthesize modifiedTime=_modifiedTime;
@property(nonatomic) long long modifierSite; // @synthesize modifierSite=_modifierSite;
@property(copy, nonatomic) NSString *modifierUid; // @synthesize modifierUid=_modifierUid;
@property(nonatomic) long long creatorSite; // @synthesize creatorSite=_creatorSite;
@property(copy, nonatomic) NSString *creatorUid; // @synthesize creatorUid=_creatorUid;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) unsigned long long primaryKey; // @synthesize primaryKey=_primaryKey;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)dateValueDescription;
- (long long)manyMonthsAgoFromDate:(id)arg1 modifiedComponents:(id)arg2;
@property(readonly, nonatomic) NSNumber *dateValue;
- (void)setDateValue:(id)arg1;
- (id)dentryCacheCenterWithName:(id)arg1 usePermanentCache:(_Bool)arg2;
- (id)saveThumbnail:(id)arg1 toCacheCenter:(id)arg2;
- (void)readDentryUsePermanentCache:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)readDataFromCache:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)writeDentryUsePermanentCache:(_Bool)arg1 withData:(id)arg2;
- (void)writeData:(id)arg1 toCacheCenter:(id)arg2;
- (_Bool)isDirectory;
- (_Bool)isLocalExist;
@property(readonly, copy, nonatomic) NSString *decryptFilePath; // @dynamic decryptFilePath;
@property(readonly, copy, nonatomic) NSString *filePath; // @dynamic filePath;
- (id)cacheKey;
@property(retain, nonatomic) NSData *rawData;
@property(nonatomic) _Bool selected;
- (_Bool)isShowWaitForEdit;
- (_Bool)isShowNoEditorCount;
- (_Bool)isAllowedOnlineEdit:(id)arg1;
- (_Bool)isImageCanPreview;
- (_Bool)isPreviewable;
- (double)uploadingProgress;
- (unsigned long long)actionType;
- (id)detailString;
- (id)formatDateString;
- (id)formatSizeString;
- (id)iconImage;
- (id)previewURLForSize:(struct CGSize)arg1;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(copy, nonatomic) NSString *remarkName; // @dynamic remarkName;
@property(copy, nonatomic) NSString *stoken; // @dynamic stoken;
@property(copy, nonatomic) NSString *token; // @dynamic token;
@property(nonatomic) unsigned long long spaceType;
@property(nonatomic) long long cid;
@property(nonatomic) long long belongToOrgId;
@property(nonatomic) _Bool isDelete;
- (void)setIsReadOnly:(_Bool)arg1;
- (_Bool)isReadOnly;
- (id)initWithSpaceMode:(id)arg1;
- (id)initWithRecentFileModel:(id)arg1;
- (id)initWithSpaceDentryModel:(id)arg1 spaceId:(long long)arg2 parentId:(id)arg3;
- (id)iconImageForDingding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

