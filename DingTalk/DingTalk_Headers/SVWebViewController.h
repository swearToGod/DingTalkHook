//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSString, NSURL, UIBarButtonItem, UIWebView;

@interface SVWebViewController : UIViewController <UIWebViewDelegate>
{
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_forwardBarButtonItem;
    UIBarButtonItem *_refreshBarButtonItem;
    UIBarButtonItem *_stopBarButtonItem;
    UIBarButtonItem *_actionBarButtonItem;
    UIWebView *_webView;
    NSURL *_URL;
}

@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIBarButtonItem *actionBarButtonItem; // @synthesize actionBarButtonItem=_actionBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *stopBarButtonItem; // @synthesize stopBarButtonItem=_stopBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *refreshBarButtonItem; // @synthesize refreshBarButtonItem=_refreshBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *forwardBarButtonItem; // @synthesize forwardBarButtonItem=_forwardBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
- (void).cxx_destruct;
- (void)doneButtonClicked:(id)arg1;
- (void)actionButtonClicked:(id)arg1;
- (void)stopClicked:(id)arg1;
- (void)reloadClicked:(id)arg1;
- (void)goForwardClicked:(id)arg1;
- (void)goBackClicked:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)updateToolbarItems;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (void)loadURL:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithAddress:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

