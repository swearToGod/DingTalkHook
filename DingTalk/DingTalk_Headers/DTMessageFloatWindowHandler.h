//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTMessageBaseHandler.h"

@class DTFloatWindowModel;

@interface DTMessageFloatWindowHandler : DTMessageBaseHandler
{
    _Bool _hasInitLoadInfo;
    _Bool _needsUpdateView;
    _Bool _isAppear;
    _Bool _isOpened;
    DTFloatWindowModel *_floatWindow;
}

@property(nonatomic) _Bool isOpened; // @synthesize isOpened=_isOpened;
@property(retain, nonatomic) DTFloatWindowModel *floatWindow; // @synthesize floatWindow=_floatWindow;
- (void).cxx_destruct;
- (void)onLiveControllerClose:(id)arg1;
- (void)refreshFloatWindowForceLy:(_Bool)arg1;
- (void)refreshFloatWindow;
- (void)updateWithFloatWindow:(id)arg1 force:(_Bool)arg2;
- (void)updateWithFloatWindow:(id)arg1;
- (void)themeDidChanged;
- (void)updateTheme;
- (void)updateNavBar;
- (id)navSubTitle;
- (void)loadMoreData;
- (void)dismissGuideView;
- (void)showGuideViewIfNeed;
- (void)beginDrop;
- (void)onPageBack;
- (void)cleanFloatWindowIfNeeded;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)dropboxDidClose;
- (void)dropboxDidOpen;
- (id)floatWindowCell;
- (void)updateFloatWindowView;
- (void)updateViewIfNeeded;
- (void)dropboxIsOpened;
- (void)saveFloatWindowStatus;
- (_Bool)shouldAutoOpenFloatWindow;
- (void)loadDropBox;
- (void)setDropBoxHeight;
- (_Bool)needsLoadDropBox;
- (void)fetchFloatingWindowModelCompletion:(CDUnknownBlockType)arg1;
- (_Bool)hasFloatWindow;
- (void)loadFloatWindowInfo;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

