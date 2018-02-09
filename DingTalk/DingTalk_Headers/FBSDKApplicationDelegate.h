//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSDKContainerViewControllerDelegate-Protocol.h"

@class FBSDKBridgeAPIRequest, NSString, UIViewController;
@protocol FBSDKURLOpening;

@interface FBSDKApplicationDelegate : NSObject <FBSDKContainerViewControllerDelegate>
{
    FBSDKBridgeAPIRequest *_pendingRequest;
    CDUnknownBlockType _pendingRequestCompletionBlock;
    id <FBSDKURLOpening> _pendingURLOpen;
    _Bool _expectingBackground;
    UIViewController *_safariViewController;
    _Bool _isDismissingSafariViewController;
    _Bool _active;
}

+ (id)sharedInstance;
+ (void)initializeWithLaunchData:(id)arg1;
+ (void)load;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)_cancelBridgeRequest;
- (_Bool)_handleBridgeAPIResponseURL:(id)arg1 sourceApplication:(id)arg2;
- (void)_logIfAppLinkEvent:(id)arg1;
- (void)viewControllerDidDisappear:(id)arg1 animated:(_Bool)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)openURLWithSafariViewController:(id)arg1 sender:(id)arg2 fromViewController:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)openBridgeAPIRequest:(id)arg1 useSafariViewController:(_Bool)arg2 fromViewController:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)openURL:(id)arg1 sender:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

