//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTTabBarDelegate-Protocol.h"
#import "LAWebViewDelegate-Protocol.h"

@class DTEmptyResultView, DTFloatWindowItem, DTFloatWindowModel, DTFloatWindowTabBar, DTLiveVideoView, LAWebView, NSString;

@interface DTFloatWindowView : UIView <DTTabBarDelegate, LAWebViewDelegate>
{
    _Bool _isDisplaying;
    _Bool _savedLivePlaying;
    DTFloatWindowModel *_model;
    DTFloatWindowTabBar *_topBar;
    DTEmptyResultView *_errView;
    LAWebView *_contentView;
    DTLiveVideoView *_liveVideoView;
    DTFloatWindowItem *_selectedItem;
}

@property(nonatomic) _Bool savedLivePlaying; // @synthesize savedLivePlaying=_savedLivePlaying;
@property(retain, nonatomic) DTFloatWindowItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) DTLiveVideoView *liveVideoView; // @synthesize liveVideoView=_liveVideoView;
@property(retain, nonatomic) LAWebView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) DTEmptyResultView *errView; // @synthesize errView=_errView;
@property(retain, nonatomic) DTFloatWindowTabBar *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) DTFloatWindowModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool isDisplaying; // @synthesize isDisplaying=_isDisplaying;
- (void).cxx_destruct;
- (void)onAppActive:(id)arg1;
- (void)onAppEnterBg:(id)arg1;
- (void)resumeWebView;
- (void)pauseWebView;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)resumeLiveView;
- (void)pauseLiveView;
- (void)willDestory;
- (void)resumeDisplay;
- (void)pauseDisplay;
- (void)layoutSubviews;
- (void)tabBar:(id)arg1 didSelectAtIndex:(int)arg2;
- (void)showErrorView:(id)arg1;
- (void)hideErrorView;
- (void)showNormalItem:(id)arg1;
- (void)showLiveItem:(id)arg1;
- (void)showItem:(id)arg1;
- (void)selectIndex:(int)arg1;
- (void)updateWithModel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

