//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LAWebViewDelegate-Protocol.h"

@class DTSlideWebViewController, NSString, UIButton, UIImageView, UIViewController, UIWindow;

@interface DTSlideViewManager : NSObject <LAWebViewDelegate>
{
    _Bool _isSlideShowing;
    unsigned long long _slideViewStyle;
    UIViewController *_parentViewController;
    DTSlideWebViewController *_webViewController;
    UIButton *_registButton;
    UIButton *_loginButton;
    UIButton *_startButton;
    UIWindow *_window;
    UIImageView *_webViewPlaceholder;
}

+ (id)sharedService;
@property(retain, nonatomic) UIImageView *webViewPlaceholder; // @synthesize webViewPlaceholder=_webViewPlaceholder;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIButton *startButton; // @synthesize startButton=_startButton;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) UIButton *registButton; // @synthesize registButton=_registButton;
@property(retain, nonatomic) DTSlideWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) unsigned long long slideViewStyle; // @synthesize slideViewStyle=_slideViewStyle;
@property(nonatomic) _Bool isSlideShowing; // @synthesize isSlideShowing=_isSlideShowing;
- (void).cxx_destruct;
- (void)showBottomButtons;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)clearSlideManager;
- (id)getSlideView;
- (_Bool)isShowSlidePlaceholderImage;
- (void)viewAlphaAnimate:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)dismissWebView;
- (void)registButtonClick:(id)arg1;
- (void)loginButtonClick:(id)arg1;
- (void)startButtonClick:(id)arg1;
- (void)showSlidePageWithView:(id)arg1;
- (void)showSlidePageIfNeedWithView:(id)arg1;
- (id)lastSlideVersion;
- (void)saveVersion:(id)arg1;
- (id)keyForVersion:(id)arg1;
- (_Bool)hasShownForTargetVersion;
- (void)setHasShownForTargetVersion;
- (_Bool)version:(id)arg1 lessThen:(id)arg2 containsEqual:(_Bool)arg3;
- (_Bool)isNeedShowSlidePage;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

