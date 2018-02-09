//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LAContainerInterceptorDelegate-Protocol.h"
#import "LAPluginAuthenticationCenterDelegate-Protocol.h"
#import "LAPluginInstanceCollectorDelegate-Protocol.h"
#import "LAWebViewDelegate-Protocol.h"

@class LAContainerRecorder, LAWVPluginInstanceCollector, LAWebView, LAWebViewJavascriptBridge, NSString, NSURL, NSURLRequest;
@protocol LAContainerHandler, LAContainerInterceptorProtocol, LAContainerURLCheckProtocol, LAPluginAuthenticationProtocol, LAPluginInstanceCollectorDelegate, LAWebViewAudioControlProtocol, LAWebViewContainerDelegate, LAWebViewDelegate;

@interface LAWebViewContainer : NSObject <LAWebViewDelegate, LAPluginInstanceCollectorDelegate, LAPluginAuthenticationCenterDelegate, LAContainerInterceptorDelegate>
{
    _Bool _isJsBridgeLoaded;
    _Bool _nativeJsInjectEnable;
    _Bool _airPlayForMediaPlayback;
    NSURL *_initialURL;
    NSString *_customUA;
    NSString *_originalUA;
    id <LAWebViewContainerDelegate> _delegate;
    LAWebView *_webView;
    LAWebViewJavascriptBridge *_jsBridge;
    id <LAWebViewDelegate> _webViewDelegate;
    id <LAPluginInstanceCollectorDelegate> _pluginCollectorDelegate;
    id <LAContainerHandler> _ctnHandler;
    NSURL *_curRequestMainDocURL;
    NSURLRequest *_curMainDocRequest;
    NSString *_corpId;
    NSString *_agentId;
    LAWVPluginInstanceCollector *_pluginCollector;
    id <LAContainerInterceptorProtocol> _cInterceptor;
    id <LAPluginAuthenticationProtocol> _pluginAuthenticationIMP;
    LAContainerRecorder *_statusRecorder;
    long long _initialWebViewType;
    NSURL *_curRequestURL;
    NSURLRequest *_curRequest;
    NSString *_realPageURL;
    long long _loadingNumber;
    id <LAContainerURLCheckProtocol> _cURLChecker;
    id <LAWebViewAudioControlProtocol> _webViewAudioControlIMP;
}

@property(retain, nonatomic) id <LAWebViewAudioControlProtocol> webViewAudioControlIMP; // @synthesize webViewAudioControlIMP=_webViewAudioControlIMP;
@property(retain, nonatomic) id <LAContainerURLCheckProtocol> cURLChecker; // @synthesize cURLChecker=_cURLChecker;
@property long long loadingNumber; // @synthesize loadingNumber=_loadingNumber;
@property(retain, nonatomic) NSString *realPageURL; // @synthesize realPageURL=_realPageURL;
@property(retain, nonatomic) NSURLRequest *curRequest; // @synthesize curRequest=_curRequest;
@property(retain, nonatomic) NSURL *curRequestURL; // @synthesize curRequestURL=_curRequestURL;
@property(nonatomic) long long initialWebViewType; // @synthesize initialWebViewType=_initialWebViewType;
@property(nonatomic) _Bool airPlayForMediaPlayback; // @synthesize airPlayForMediaPlayback=_airPlayForMediaPlayback;
@property(nonatomic) _Bool nativeJsInjectEnable; // @synthesize nativeJsInjectEnable=_nativeJsInjectEnable;
@property(retain, nonatomic) LAContainerRecorder *statusRecorder; // @synthesize statusRecorder=_statusRecorder;
@property(retain, nonatomic) id <LAPluginAuthenticationProtocol> pluginAuthenticationIMP; // @synthesize pluginAuthenticationIMP=_pluginAuthenticationIMP;
@property(retain, nonatomic) id <LAContainerInterceptorProtocol> cInterceptor; // @synthesize cInterceptor=_cInterceptor;
@property(retain, nonatomic) LAWVPluginInstanceCollector *pluginCollector; // @synthesize pluginCollector=_pluginCollector;
@property(copy, nonatomic) NSString *agentId; // @synthesize agentId=_agentId;
@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
@property(nonatomic) _Bool isJsBridgeLoaded; // @synthesize isJsBridgeLoaded=_isJsBridgeLoaded;
@property(retain, nonatomic) NSURLRequest *curMainDocRequest; // @synthesize curMainDocRequest=_curMainDocRequest;
@property(retain, nonatomic) NSURL *curRequestMainDocURL; // @synthesize curRequestMainDocURL=_curRequestMainDocURL;
@property(nonatomic) __weak id <LAContainerHandler> ctnHandler; // @synthesize ctnHandler=_ctnHandler;
@property(nonatomic) __weak id <LAPluginInstanceCollectorDelegate> pluginCollectorDelegate; // @synthesize pluginCollectorDelegate=_pluginCollectorDelegate;
@property(nonatomic) __weak id <LAWebViewDelegate> webViewDelegate; // @synthesize webViewDelegate=_webViewDelegate;
@property(retain, nonatomic) LAWebViewJavascriptBridge *jsBridge; // @synthesize jsBridge=_jsBridge;
@property(retain, nonatomic) LAWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <LAWebViewContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *originalUA; // @synthesize originalUA=_originalUA;
@property(copy, nonatomic) NSString *customUA; // @synthesize customUA=_customUA;
@property(retain, nonatomic) NSURL *initialURL; // @synthesize initialURL=_initialURL;
- (void).cxx_destruct;
- (void)callBack:(CDUnknownBlockType)arg1 arr:(id)arg2;
- (void)callBack:(CDUnknownBlockType)arg1 str:(id)arg2;
- (void)callBack:(CDUnknownBlockType)arg1 rect:(struct CGRect)arg2;
- (void)callBack:(CDUnknownBlockType)arg1 point:(struct CGPoint)arg2;
- (void)imgElementSRCsInDocument:(CDUnknownBlockType)arg1;
- (id)imgElementSRCsInDocument;
- (void)linkElementHREFAtPointInViewport:(struct CGPoint)arg1 complete:(CDUnknownBlockType)arg2;
- (id)linkElementHREFAtPointInViewport:(struct CGPoint)arg1;
- (void)imgElementSRCAtPointInViewPort:(struct CGPoint)arg1 complete:(CDUnknownBlockType)arg2;
- (id)imgElementSRCAtPointInViewPort:(struct CGPoint)arg1;
- (void)htmlElementTagsAtPointInViewport:(struct CGPoint)arg1 complete:(CDUnknownBlockType)arg2;
- (id)htmlElementTagsAtPointInViewport:(struct CGPoint)arg1;
- (void)imgElementFrameInWebViewAtPointInViewport:(struct CGPoint)arg1 complete:(CDUnknownBlockType)arg2;
- (struct CGRect)imgElementFrameInWebViewAtPointInViewport:(struct CGPoint)arg1;
- (void)pointInWebViewFromPointInViewport:(struct CGPoint)arg1 complete:(CDUnknownBlockType)arg2;
- (struct CGPoint)pointInWebViewFromPointInViewport:(struct CGPoint)arg1;
- (void)pointInViewportFromPointInWebView:(struct CGPoint)arg1 complete:(CDUnknownBlockType)arg2;
- (struct CGPoint)pointInViewportFromPointInWebView:(struct CGPoint)arg1;
- (void)pointInWebViewFromPointInHTML:(struct CGPoint)arg1 complete:(CDUnknownBlockType)arg2;
- (struct CGPoint)pointInWebViewFromPointInHTML:(struct CGPoint)arg1;
- (void)pointInHTMLFromPointInWebView:(struct CGPoint)arg1 complete:(CDUnknownBlockType)arg2;
- (struct CGPoint)pointInHTMLFromPointInWebView:(struct CGPoint)arg1;
- (id)webViewTypeText;
- (id)containerCorpId:(id)arg1;
- (id)containerAgentId:(id)arg1;
- (unsigned long long)containerType:(id)arg1;
- (id)containerPageURL:(id)arg1;
- (id)mainDocURLForAuthenticationCenter:(id)arg1;
- (long long)containerTypeForAuthenticationCenter:(id)arg1;
- (id)returnAudioSessionCode:(long long)arg1;
- (id)setAudioSessionPlayAndRecordWithSpeaker:(_Bool)arg1;
- (void)activeAudioSession:(_Bool)arg1 notifyOtherApp:(_Bool)arg2 speak:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resetUIWebViewAudioSession;
- (void)activeUIWebViewAudioSession;
- (void)resetAudioSessionByScence;
- (void)activeAudioSessionByScence;
- (void)outVedioFullScreenView;
- (void)enterVedioFullScreenView;
- (void)showOnlineCosoleLogWithWebViewLoadError:(id)arg1;
- (id)parseURLWithWebViewError:(id)arg1;
- (_Bool)unsupportMimeTypeError:(id)arg1;
- (_Bool)shouldIgnoreWebViewError:(id)arg1;
- (void)webView:(id)arg1 progress:(double)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)pluginInstance:(id)arg1 jsapiDidCall:(id)arg2;
- (void)pluginInstance:(id)arg1 jsapiWillCall:(id)arg2;
- (void)pluginInstance:(id)arg1 jsapiWasReject:(id)arg2;
- (_Bool)pluginInstance:(id)arg1 jsapiShouldCall:(id)arg2;
- (void)clearCorpIdAndAgentId;
- (void)updateCorpId:(id)arg1 agentId:(id)arg2;
@property(readonly, nonatomic) NSURL *pageURL;
- (id)documentTtile;
- (void)setWebViewFrame:(struct CGRect)arg1;
- (_Bool)isLoadingMainDocumentURL;
- (void)reloadCurrentRequest;
- (void)startLoadInitialRequest;
- (void)checkURLAndLoadInitialRequest;
- (void)loadInitialRequest;
- (void)setupProtocolIMPs;
- (void)resetUserAgentIfNeed;
- (void)configWKWebViewUserAgentIfNeed;
- (void)configUserAgentIfNeed;
- (void)initWebViewComponets;
- (void)initWebJsBridge;
- (void)shutdownWebViewContainer;
- (void)setupBeforeRequest;
- (void)setupWebViewContainer;
- (void)dealloc;
- (id)initWithInitialURL:(id)arg1 webViewType:(long long)arg2 delegate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

