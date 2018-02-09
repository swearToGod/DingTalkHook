//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "LAContainerHandler-Protocol.h"
#import "LAPluginInstanceCollectorDelegate-Protocol.h"
#import "LAWeexViewContainerDelegate-Protocol.h"

@class DTTitleView, LAActionQueue, LAWeexViewContainer, NSNumber, NSString, NSURL, UIColor, UIView;
@protocol LAContainerNavigationBarProtocol, LAWeexViewControllerDelegate;

@interface LAWeexViewController : DTViewController <LAWeexViewContainerDelegate, LAContainerHandler, LAPluginInstanceCollectorDelegate>
{
    _Bool _isFirstPage;
    _Bool _shouldNotKeepAlive;
    _Bool _weexViewDidAppear;
    NSString *_presetCorpId;
    NSNumber *_presetAppId;
    NSNumber *_presetAgentId;
    long long _containerStatus;
    long long _reactiveSource;
    LAWeexViewContainer *_weexViewContainer;
    id <LAWeexViewControllerDelegate> _delegate;
    NSURL *_originalURL;
    NSURL *_bundleURL;
    NSString *_bundleTitle;
    UIColor *_custNaviBarColor;
    UIView *_weexView;
    DTTitleView *_titleView;
    LAActionQueue *_viewLoadedActQueue;
    LAActionQueue *_viewAppearActQueue;
    id <LAContainerNavigationBarProtocol> _navigationIMP;
}

@property(retain, nonatomic) id <LAContainerNavigationBarProtocol> navigationIMP; // @synthesize navigationIMP=_navigationIMP;
@property(retain, nonatomic) LAActionQueue *viewAppearActQueue; // @synthesize viewAppearActQueue=_viewAppearActQueue;
@property(retain, nonatomic) LAActionQueue *viewLoadedActQueue; // @synthesize viewLoadedActQueue=_viewLoadedActQueue;
@property(retain, nonatomic) DTTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *weexView; // @synthesize weexView=_weexView;
@property(nonatomic) _Bool weexViewDidAppear; // @synthesize weexViewDidAppear=_weexViewDidAppear;
@property(retain, nonatomic) UIColor *custNaviBarColor; // @synthesize custNaviBarColor=_custNaviBarColor;
@property(copy, nonatomic) NSString *bundleTitle; // @synthesize bundleTitle=_bundleTitle;
@property(retain, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(retain, nonatomic) NSURL *originalURL; // @synthesize originalURL=_originalURL;
@property(nonatomic) __weak id <LAWeexViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) LAWeexViewContainer *weexViewContainer; // @synthesize weexViewContainer=_weexViewContainer;
@property(nonatomic) _Bool shouldNotKeepAlive; // @synthesize shouldNotKeepAlive=_shouldNotKeepAlive;
@property(nonatomic) long long reactiveSource; // @synthesize reactiveSource=_reactiveSource;
@property(nonatomic) long long containerStatus; // @synthesize containerStatus=_containerStatus;
@property(retain, nonatomic) NSNumber *presetAgentId; // @synthesize presetAgentId=_presetAgentId;
@property(retain, nonatomic) NSNumber *presetAppId; // @synthesize presetAppId=_presetAppId;
@property(copy, nonatomic) NSString *presetCorpId; // @synthesize presetCorpId=_presetCorpId;
@property(nonatomic) _Bool isFirstPage; // @synthesize isFirstPage=_isFirstPage;
- (void).cxx_destruct;
- (id)currentAgentId;
- (id)currentAppId;
- (id)currentCorpId;
- (void)containerWillBeDestroyed;
- (void)containerDidPrepareToReactive;
- (void)containerDidToKeepAlive;
- (void)containerDidEnterBackgroud;
- (void)containerDidBecomeActive;
- (id)containerContentCapture;
- (void)resetViewAndNavigationBar:(CDUnknownBlockType)arg1;
- (_Bool)rotateViewAndHideNavigationBar:(long long)arg1 showStatusBar:(_Bool)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setBackForwardNavigationGesturesEnable:(_Bool)arg1;
- (void)utCtrlClicked:(id)arg1 args:(id)arg2;
- (void)containerBizReady:(id)arg1 corpId:(id)arg2 agentId:(id)arg3;
- (void)enableContainerBizReadyCheck;
- (void)setContainerPullRefreshLoadingEnable:(_Bool)arg1;
- (void)setContainerPullRefreshEnable:(_Bool)arg1 refreshBlock:(CDUnknownBlockType)arg2;
- (id)containerAgentId;
- (_Bool)containerCerifyRequestParam:(id)arg1 value:(id)arg2;
- (void)containerCorpId:(id)arg1 agentId:(id)arg2 updatedWithJsApis:(id)arg3;
- (id)containerViewAppearActQueue;
- (id)containerViewLoadedActQueue;
- (void)containerBack;
- (void)containerQuit;
- (void)containerSetupTitleView:(id)arg1;
- (id)containerTitleView;
- (_Bool)containerShowRightNavigationItem;
- (id)containerNaviComponent;
- (unsigned long long)containerSupportedInterfaceOrientations;
- (id)containerScrollView;
- (id)containerDependViewController;
- (id)containerCurrentPageURL;
- (id)containerCurrentRequestURL;
- (void)weexViewContainer:(id)arg1 onRenderFailed:(id)arg2;
- (void)weexViewContainer:(id)arg1 onRenderFinish:(id)arg2;
- (void)weexViewContainer:(id)arg1 onViewCreate:(id)arg2;
- (struct CGRect)weexViewFrameForContainer:(id)arg1;
- (_Bool)pluginInstance:(id)arg1 jsapiShouldCall:(id)arg2;
- (void)resetNavigationBarColor;
- (void)setNavigationBarColor;
- (void)setTitle:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)initWeexContainer;
- (void)initPrivate;
- (void)dealloc;
- (id)initWithOriginalURL:(id)arg1 bundleURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

