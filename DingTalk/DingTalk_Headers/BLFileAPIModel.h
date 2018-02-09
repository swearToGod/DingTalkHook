//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPIModel.h"

@class NSString;

@interface BLFileAPIModel : BLBaseAPIModel
{
    NSString *_fileId;
    NSString *_linkId;
    NSString *_versionType;
    NSString *_fileName;
    NSString *_fileType;
    NSString *_folderId;
    NSString *_contentId;
    NSString *_creatorId;
    NSString *_creatorNick;
    NSString *_creatorEmail;
    unsigned long long _size;
    double _createTime;
    double _modifiedTime;
}

@property(nonatomic) double modifiedTime; // @synthesize modifiedTime=_modifiedTime;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *creatorEmail; // @synthesize creatorEmail=_creatorEmail;
@property(copy, nonatomic) NSString *creatorNick; // @synthesize creatorNick=_creatorNick;
@property(copy, nonatomic) NSString *creatorId; // @synthesize creatorId=_creatorId;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(copy, nonatomic) NSString *folderId; // @synthesize folderId=_folderId;
@property(copy, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *versionType; // @synthesize versionType=_versionType;
@property(copy, nonatomic) NSString *linkId; // @synthesize linkId=_linkId;
@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end

