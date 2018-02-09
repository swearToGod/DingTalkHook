//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSData, NSDictionary, NSNumber, NSString, WKIDLAuthMediaParam;

@interface WKIDLPhotoContentModel : Marshal
{
    NSString *_mediaId;
    NSNumber *_picSize;
    NSNumber *_type;
    NSData *_picBytes;
    NSNumber *_fileType;
    NSNumber *_orientation;
    NSDictionary *_extension;
    NSString *_filename;
    WKIDLAuthMediaParam *_authMedia;
}

@property(retain, nonatomic) WKIDLAuthMediaParam *authMedia; // @synthesize authMedia=_authMedia;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSNumber *orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSNumber *fileType; // @synthesize fileType=_fileType;
@property(retain, nonatomic) NSData *picBytes; // @synthesize picBytes=_picBytes;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *picSize; // @synthesize picSize=_picSize;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

