//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTMediaIdV2Coding : NSObject
{
    NSString *_mediaUrlV2;
}

+ (void)setDefaultMediaUrl:(id)arg1 privateMediaUrl:(id)arg2;
@property(copy, nonatomic) NSString *mediaUrlV2; // @synthesize mediaUrlV2=_mediaUrlV2;
- (void).cxx_destruct;
- (id)urlWithMediaIdV2:(id)arg1 authInfo:(id)arg2 isWebp:(_Bool)arg3;
- (id)decodeMediaIdV2:(id)arg1;
- (id)encodeMediaIdExt:(id)arg1;
- (id)initWithMediaUrlV2:(id)arg1;
- (id)init;

@end

