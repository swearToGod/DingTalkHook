//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LAContainerNavigationBarProtocol-Protocol.h"

@class DTTitleView, NSDictionary, NSString, UIColor, UIImage, UIScrollView, UIView, UIViewController;
@protocol LAContainerNavigationBarDelegate, UIScrollViewDelegate;

@interface LAContainerNavigationBarIMP : NSObject <LAContainerNavigationBarProtocol>
{
    _Bool _extendedLayoutIncludesOpaqueBars;
    _Bool _usingCustomColor;
    UIViewController *_viewController;
    DTTitleView *_titleView;
    UIView *_progressBarView;
    id <UIScrollViewDelegate> _originalScrollDelegate;
    id <LAContainerNavigationBarDelegate> _delegate;
    UIScrollView *_scrollView;
    long long _defStatusBarStyle;
    UIImage *_defBackgroudImage;
    UIColor *_defTintColor;
    UIImage *_defShadowImage;
    NSDictionary *_defTextAttributes;
    unsigned long long _edgesForExtendedLayout;
    long long _initTranslucentStyle;
}

@property(nonatomic) long long initTranslucentStyle; // @synthesize initTranslucentStyle=_initTranslucentStyle;
@property(nonatomic) _Bool usingCustomColor; // @synthesize usingCustomColor=_usingCustomColor;
@property(nonatomic) _Bool extendedLayoutIncludesOpaqueBars; // @synthesize extendedLayoutIncludesOpaqueBars=_extendedLayoutIncludesOpaqueBars;
@property(nonatomic) unsigned long long edgesForExtendedLayout; // @synthesize edgesForExtendedLayout=_edgesForExtendedLayout;
@property(copy, nonatomic) NSDictionary *defTextAttributes; // @synthesize defTextAttributes=_defTextAttributes;
@property(retain, nonatomic) UIImage *defShadowImage; // @synthesize defShadowImage=_defShadowImage;
@property(retain, nonatomic) UIColor *defTintColor; // @synthesize defTintColor=_defTintColor;
@property(retain, nonatomic) UIImage *defBackgroudImage; // @synthesize defBackgroudImage=_defBackgroudImage;
@property(nonatomic) long long defStatusBarStyle; // @synthesize defStatusBarStyle=_defStatusBarStyle;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <LAContainerNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <UIScrollViewDelegate> originalScrollDelegate; // @synthesize originalScrollDelegate=_originalScrollDelegate;
@property(nonatomic) __weak UIView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(nonatomic) __weak DTTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setupDefaultNavigationBarWithAlpha:(double)arg1;
- (void)setupCustomNavigationBarWithAlpha:(double)arg1;
- (void)setupNavigationBarWithScrollViewDidScroll:(id)arg1;
- (void)configNavigationBarStyle:(long long)arg1 backgroudImage:(id)arg2 tintColor:(id)arg3 shadowImage:(id)arg4 textAttributes:(id)arg5 progressBarColor:(id)arg6;
- (void)privateSetupNavigationBarStyle:(id)arg1 edgesForExtendedLayout:(unsigned long long)arg2 extendedLayoutIncludesOpaqueBars:(_Bool)arg3;
- (void)resetNavigationStyle;
- (void)setupNavigationBarStyle:(id)arg1;
- (void)backupNavigationBarStyle;
- (_Bool)shouldModifyViewControllerDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

