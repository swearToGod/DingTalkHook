//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface DTCircleLinkContentModel : NSObject
{
    NSString *_mediaId;
    NSString *_shareUrl;
    NSString *_title;
    NSString *_text;
    NSDictionary *_extension;
}

+ (id)linkContentModelWithShareLinkUserInfo:(id)arg1;
@property(copy, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (id)shareURL;
- (id)thumbnailURL;

@end

