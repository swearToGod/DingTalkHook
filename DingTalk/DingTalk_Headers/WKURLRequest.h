//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURLRequest, WVPResponse;

@interface WKURLRequest : NSObject
{
    WVPResponse *_response;
    NSURLRequest *_request;
}

+ (void)saveCookies:(id)arg1 forURL:(id)arg2;
+ (id)decode:(id)arg1 url:(id)arg2;
+ (id)encode:(id)arg1;
+ (id)allHTTPHeaderFieldsWithCookies:(id)arg1;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
@property(retain) WVPResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (void)sendRequest;

@end

