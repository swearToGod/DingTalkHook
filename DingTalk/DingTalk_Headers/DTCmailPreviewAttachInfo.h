//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTCmailPreviewAttachInfo : Marshal
{
    NSString *_downloadUrl;
    NSString *_cookie;
    NSString *_fileName;
    NSNumber *_fileSize;
    NSString *_previewType;
    NSString *_previewUrl;
}

@property(copy, nonatomic) NSString *previewUrl; // @synthesize previewUrl=_previewUrl;
@property(copy, nonatomic) NSString *previewType; // @synthesize previewType=_previewType;
@property(retain, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *cookie; // @synthesize cookie=_cookie;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

