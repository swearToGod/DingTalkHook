//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTMediaDataAccessRule.h"

#import "DTAudioDataAccessRule-Protocol.h"

@class DTMediaAuthInfo, NSString;

@interface DTAudioDataAccessRule : DTMediaDataAccessRule <DTAudioDataAccessRule>
{
    NSString *_mediaId;
    NSString *_authMediaId;
    DTMediaAuthInfo *_authInfo;
    NSString *_downloadURL;
    NSString *_retryURL;
}

+ (id)audioDataWithMediaId:(id)arg1 authMediaId:(id)arg2;
+ (id)accessRuleWithMediaId:(id)arg1 authMediaId:(id)arg2 authInfo:(id)arg3;
@property(readonly, copy, nonatomic) NSString *retryURL; // @synthesize retryURL=_retryURL;
@property(readonly, copy, nonatomic) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(readonly, nonatomic) DTMediaAuthInfo *authInfo; // @synthesize authInfo=_authInfo;
@property(readonly, copy, nonatomic) NSString *authMediaId; // @synthesize authMediaId=_authMediaId;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (id)initWithDownloadURL:(id)arg1 retryURL:(id)arg2 mediaId:(id)arg3 authMediaId:(id)arg4 authInfo:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

