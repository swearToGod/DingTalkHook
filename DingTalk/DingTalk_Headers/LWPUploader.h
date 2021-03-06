//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LWPUploaderProtocol-Protocol.h"

@class NSString;

@interface LWPUploader : NSObject <LWPUploaderProtocol>
{
}

+ (id)commitUploadFileWithUri:(id)arg1 timeout:(int)arg2 additional:(id)arg3 uploadInfo:(id)arg4 filePart:(id)arg5 fileData:(id)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
+ (id)performUploadFileWithUri:(id)arg1 timeout:(int)arg2 additional:(id)arg3 uploadInfo:(id)arg4 filePart:(id)arg5 fileData:(id)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
+ (void)tryModifyUpFrag:(id)arg1;
+ (id)convertResultError:(id)arg1;
+ (id)prepareUploadFileWithUri:(id)arg1 timeout:(int)arg2 additional:(id)arg3 uploadInfo:(id)arg4 fileData:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
+ (id)buildHeaderWithUploadInfo:(id)arg1 filePart:(id)arg2 uploadOp:(int)arg3;
+ (long long)upVerForMediaVer:(long long)arg1;
+ (id)buildUpReq:(id)arg1 upIdx:(id)arg2 fileAttr:(id)arg3 crc32:(id)arg4 md5:(id)arg5;
+ (id)buildUpFlag:(id)arg1;
+ (int)fileTypeValueForMimeType:(id)arg1;
+ (id)uploadFileWithUri:(id)arg1 additional:(id)arg2 uploadInfo:(id)arg3 filePart:(id)arg4 fileData:(id)arg5 uploadOp:(int)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
+ (id)buildDataIfNeed:(id)arg1 uploadInfo:(id)arg2 uploadOp:(int)arg3;
+ (id)builBodyForPerCmd:(id)arg1;
+ (unsigned long long)chooseMessageMode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

