//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BFAppLink, NSDictionary, NSURL;

@interface BFURL : NSObject
{
    NSURL *_targetURL;
    NSDictionary *_targetQueryParameters;
    NSDictionary *_appLinkData;
    NSDictionary *_appLinkExtras;
    BFAppLink *_appLinkReferer;
    NSURL *_inputURL;
    NSDictionary *_inputQueryParameters;
}

+ (id)queryParametersForURL:(id)arg1;
+ (id)decodeURLString:(id)arg1;
+ (id)URLForRenderBackToReferrerBarURL:(id)arg1;
+ (id)URLWithInboundURL:(id)arg1 sourceApplication:(id)arg2;
+ (id)URLWithURL:(id)arg1;
@property(readonly, nonatomic) NSDictionary *inputQueryParameters; // @synthesize inputQueryParameters=_inputQueryParameters;
@property(readonly, nonatomic) NSURL *inputURL; // @synthesize inputURL=_inputURL;
@property(readonly, nonatomic) BFAppLink *appLinkReferer; // @synthesize appLinkReferer=_appLinkReferer;
@property(readonly, nonatomic) NSDictionary *appLinkExtras; // @synthesize appLinkExtras=_appLinkExtras;
@property(readonly, nonatomic) NSDictionary *appLinkData; // @synthesize appLinkData=_appLinkData;
@property(readonly, nonatomic) NSDictionary *targetQueryParameters; // @synthesize targetQueryParameters=_targetQueryParameters;
@property(readonly, nonatomic) NSURL *targetURL; // @synthesize targetURL=_targetURL;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 forOpenInboundURL:(_Bool)arg2 sourceApplication:(id)arg3 forRenderBackToReferrerBar:(_Bool)arg4;

@end

