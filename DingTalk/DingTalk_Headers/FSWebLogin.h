//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIWebView;
@protocol FSWebLoginDelegate;

@interface FSWebLogin : UIViewController <UIWebViewDelegate>
{
    NSString *_url;
    UIWebView *_webView;
    id <FSWebLoginDelegate> _delegate;
}

@property(nonatomic) __weak id <FSWebLoginDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)removeCookiesFromPreviousLogin;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)cancelButtonTapped;
- (void)viewDidLoad;
- (id)initWithUrl:(id)arg1 andDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

