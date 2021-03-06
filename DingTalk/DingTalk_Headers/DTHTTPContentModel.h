//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTHTTPAudioContentModel, DTHTTPFileContentModel, DTHTTPGeoContentModel, DTHTTPPhotoContentModel, DTHTTPTextContentModel, DTHTTPVideoContentModel, NSArray, NSDictionary, NSNumber;

@interface DTHTTPContentModel : Marshal
{
    NSNumber *_contentType;
    DTHTTPTextContentModel *_textContent;
    DTHTTPPhotoContentModel *_photoContent;
    DTHTTPAudioContentModel *_audioContent;
    DTHTTPFileContentModel *_fileContent;
    NSDictionary *_extension;
    NSArray *_attachments;
    NSDictionary *_atOpenIds;
    DTHTTPVideoContentModel *_videoContent;
    DTHTTPGeoContentModel *_geoContent;
    NSArray *_atOpenIdExList;
}

@property(copy, nonatomic) NSArray *atOpenIdExList; // @synthesize atOpenIdExList=_atOpenIdExList;
@property(retain, nonatomic) DTHTTPGeoContentModel *geoContent; // @synthesize geoContent=_geoContent;
@property(retain, nonatomic) DTHTTPVideoContentModel *videoContent; // @synthesize videoContent=_videoContent;
@property(copy, nonatomic) NSDictionary *atOpenIds; // @synthesize atOpenIds=_atOpenIds;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(copy, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) DTHTTPFileContentModel *fileContent; // @synthesize fileContent=_fileContent;
@property(retain, nonatomic) DTHTTPAudioContentModel *audioContent; // @synthesize audioContent=_audioContent;
@property(retain, nonatomic) DTHTTPPhotoContentModel *photoContent; // @synthesize photoContent=_photoContent;
@property(retain, nonatomic) DTHTTPTextContentModel *textContent; // @synthesize textContent=_textContent;
@property(retain, nonatomic) NSNumber *contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

