//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTXFlushContainerLoger : NSObject
{
}

+ (_Bool)commitContainerUsabilityFail:(id)arg1 url:(id)arg2;
+ (_Bool)commitSafeContainerFailByInterceptor:(id)arg1 appId:(id)arg2 requestURL:(id)arg3 refererURL:(id)arg4 errorCode:(id)arg5 errorMsg:(id)arg6;
+ (_Bool)uploadJsApiWarnningMessage:(id)arg1 errorDesc:(id)arg2;
+ (_Bool)uploadWhiteDomainWarnningMessage:(id)arg1 errorDesc:(id)arg2;
+ (_Bool)uploadMicroAppWarningMessageFromJsapi:(id)arg1;
+ (_Bool)logH5LongRender:(id)arg1 url:(id)arg2;
+ (_Bool)logH5BlankDetector:(id)arg1 url:(id)arg2;
+ (_Bool)logMicroOpenFail:(id)arg1 url:(id)arg2 errorCode:(id)arg3 errorMsg:(id)arg4;
+ (_Bool)logJsConfigFail:(id)arg1 url:(id)arg2 errorCode:(id)arg3 errorMsg:(id)arg4;
+ (_Bool)logOauthFail:(id)arg1 url:(id)arg2 errorCode:(id)arg3 errorMsg:(id)arg4;
+ (_Bool)logJsApiFail:(id)arg1 url:(id)arg2 corpId:(id)arg3 errorCode:(id)arg4 errorMsg:(id)arg5;
+ (_Bool)logBlankPageWithURL:(id)arg1 corpId:(id)arg2 errorCode:(id)arg3 errorMsg:(id)arg4;
+ (_Bool)logPageOpenUnClassifyFailed:(id)arg1 corpId:(id)arg2 errorCode:(id)arg3 errorMsg:(id)arg4;
+ (_Bool)logPageOpenFailed:(id)arg1 corpId:(id)arg2 errorCode:(id)arg3 errorMsg:(id)arg4;
+ (id)basicLogInfoWithURL:(id)arg1 corpId:(id)arg2;

@end

