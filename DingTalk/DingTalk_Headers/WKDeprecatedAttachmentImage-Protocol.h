//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKDeprecatedAttachment-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol WKDeprecatedAttachmentImage <WKDeprecatedAttachment>
@property(retain, nonatomic) NSDictionary *extension;
@property(copy, nonatomic) NSString *authCode;
@property(copy, nonatomic) NSString *authMediaId;
@property(nonatomic) long long orientation;
@property(nonatomic) long long picType;
@property(copy, nonatomic) NSData *data;
@property(readonly, copy, nonatomic) NSString *imageUrl;
@property(nonatomic) long long imageSize;
@property(copy, nonatomic) NSString *filename;
@property(copy, nonatomic) NSString *mediaId;
@end
