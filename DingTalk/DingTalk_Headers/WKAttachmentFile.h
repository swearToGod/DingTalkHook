//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKAttachment.h"

@class NSString;

@interface WKAttachmentFile : WKAttachment
{
    NSString *_mediaId;
    NSString *_fileName;
    NSString *_fileType;
    long long _fileSize;
    NSString *_fileUrl;
}

@property(copy, nonatomic) NSString *fileUrl; // @synthesize fileUrl=_fileUrl;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

