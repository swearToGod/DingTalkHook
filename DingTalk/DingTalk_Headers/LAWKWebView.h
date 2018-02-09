//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

@class LAMessageHandler, NSMutableArray, WKWebViewConfiguration;

@interface LAWKWebView : WKWebView
{
    LAMessageHandler *_messageHandler;
    NSMutableArray *_messageHandlerNames;
    WKWebViewConfiguration *_theConfiguration;
}

+ (id)javascriptStringWithCookie:(id)arg1;
+ (void)addCookieOutScriptWithController:(id)arg1 handler:(id)arg2;
+ (void)addCookieInScriptWithController:(id)arg1;
@property(retain, nonatomic) WKWebViewConfiguration *theConfiguration; // @synthesize theConfiguration=_theConfiguration;
@property(retain, nonatomic) NSMutableArray *messageHandlerNames; // @synthesize messageHandlerNames=_messageHandlerNames;
@property(retain, nonatomic) LAMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
- (void).cxx_destruct;
- (id)loadRequest:(id)arg1;
- (void)addScriptMessageHandlerNameForCleanup:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (id)init;

@end

