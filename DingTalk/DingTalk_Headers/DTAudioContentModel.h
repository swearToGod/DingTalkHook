//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTAuthMediaParam, NSArray, NSData, NSNumber, NSString;

@interface DTAudioContentModel : Marshal
{
    NSString *_mediaId;
    NSNumber *_duration;
    NSArray *_audioVolumns;
    NSData *_audioContentByte;
    NSData *_opusAudioBytes;
    DTAuthMediaParam *_authMedia;
}

@property(retain, nonatomic) DTAuthMediaParam *authMedia; // @synthesize authMedia=_authMedia;
@property(retain, nonatomic) NSData *opusAudioBytes; // @synthesize opusAudioBytes=_opusAudioBytes;
@property(retain, nonatomic) NSData *audioContentByte; // @synthesize audioContentByte=_audioContentByte;
@property(copy, nonatomic) NSArray *audioVolumns; // @synthesize audioVolumns=_audioVolumns;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

