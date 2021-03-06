//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTCircleAttachmentModel, DTCircleGeoContentModel, DTCircleLinkContentModel, DTCirclePhotoContentModel, DTCircleVideoContentModel, NSString;

@interface DTCircleContentModel : NSObject
{
    unsigned long long _contentType;
    NSString *_text;
    DTCirclePhotoContentModel *_photoContent;
    DTCircleVideoContentModel *_videoContent;
    DTCircleLinkContentModel *_linkContent;
    DTCircleGeoContentModel *_geoContent;
    DTCircleAttachmentModel *_attachment;
}

@property(retain, nonatomic) DTCircleAttachmentModel *attachment; // @synthesize attachment=_attachment;
@property(retain, nonatomic) DTCircleGeoContentModel *geoContent; // @synthesize geoContent=_geoContent;
@property(retain, nonatomic) DTCircleLinkContentModel *linkContent; // @synthesize linkContent=_linkContent;
@property(retain, nonatomic) DTCircleVideoContentModel *videoContent; // @synthesize videoContent=_videoContent;
@property(retain, nonatomic) DTCirclePhotoContentModel *photoContent; // @synthesize photoContent=_photoContent;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;

@end

