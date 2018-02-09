//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerItem, DTMoviePlayerFooterView, NSURL, UIActivityIndicatorView, UILabel;

@interface DTVideoPlayerView : UIView
{
    _Bool _isSeeking;
    _Bool _didCallbackWatchPointOnce;
    _Bool _isPlaying;
    _Bool _seekingEnabled;
    _Bool _autoLoopEnabled;
    _Bool _loadingActivityEnabled;
    _Bool _showProgressBar;
    NSURL *_contentURL;
    double _watchPointTime;
    CDUnknownBlockType _didPlayToEndTime;
    CDUnknownBlockType _didReachToWatchPoint;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    DTMoviePlayerFooterView *_footerView;
    UIActivityIndicatorView *_activityView;
    UILabel *_infoLabel;
    id _timeObserver;
}

+ (Class)layerClass;
@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) DTMoviePlayerFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic) CDUnknownBlockType didReachToWatchPoint; // @synthesize didReachToWatchPoint=_didReachToWatchPoint;
@property(copy, nonatomic) CDUnknownBlockType didPlayToEndTime; // @synthesize didPlayToEndTime=_didPlayToEndTime;
@property(nonatomic) double watchPointTime; // @synthesize watchPointTime=_watchPointTime;
@property(nonatomic) _Bool showProgressBar; // @synthesize showProgressBar=_showProgressBar;
@property(nonatomic) _Bool loadingActivityEnabled; // @synthesize loadingActivityEnabled=_loadingActivityEnabled;
@property(nonatomic) _Bool autoLoopEnabled; // @synthesize autoLoopEnabled=_autoLoopEnabled;
@property(nonatomic) _Bool seekingEnabled; // @synthesize seekingEnabled=_seekingEnabled;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (unsigned long long)centerResizingMask;
- (void)changeInfoLabelVisible:(_Bool)arg1 text:(id)arg2 animated:(_Bool)arg3;
- (void)changeLoadingActivityVisible:(_Bool)arg1;
- (void)applySeekToPosition:(double)arg1;
- (void)pause;
- (void)play;
- (void)setIsSeeking:(_Bool)arg1;
- (void)updatePosition:(_Bool)arg1 forceZero:(_Bool)arg2;
- (void)playWithContentURL:(id)arg1;
- (void)playToEndTimeNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)addApplicationStateObservers;
- (void)addPlayerObservers;
- (void)applyPlayURL:(id)arg1;
- (void)executeWatchPointCallbackIfNeeds:(CDStruct_1b6d18a9)arg1;
- (void)dealloc;
- (void)cleanupPlayerObserver;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)setupVideoPlayerView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)playerLayer;

@end

