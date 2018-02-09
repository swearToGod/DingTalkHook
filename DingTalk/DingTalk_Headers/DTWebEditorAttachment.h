//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL, UIImage;

@interface DTWebEditorAttachment : NSObject
{
    long long _attachmentType;
    NSString *_spaceId;
    NSString *_spacePath;
    UIImage *_image;
    NSData *_imageData;
    NSString *_name;
    unsigned long long _size;
    NSString *_filePath;
    NSURL *_contentURL;
    NSString *_contentMediaId;
    NSString *_fileType;
    double _createDate;
}

@property(nonatomic) double createDate; // @synthesize createDate=_createDate;
@property(copy, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(retain, nonatomic) NSString *contentMediaId; // @synthesize contentMediaId=_contentMediaId;
@property(retain, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *spacePath; // @synthesize spacePath=_spacePath;
@property(copy, nonatomic) NSString *spaceId; // @synthesize spaceId=_spaceId;
@property(nonatomic) long long attachmentType; // @synthesize attachmentType=_attachmentType;
- (void).cxx_destruct;
- (id)tmpImageDirectory;
- (id)writeDataToTemp:(id)arg1 data:(id)arg2;
- (id)extractBLAttachmentVO;
- (id)initWithURL:(id)arg1 mediaId:(id)arg2 attachmentType:(id)arg3;
- (id)initWithCSpaceDentry:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)initWithImage:(id)arg1 name:(id)arg2;

@end

