//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "POPAnimationDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AVAudioPlayer, NSString, POPSpringAnimation, UICollectionView, UICollectionViewFlowLayout, YYThreadSafeArray;
@protocol DTDialPadDataSource, DTDialPadDelegate;

@interface DTDialPad : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, POPAnimationDelegate, UIGestureRecognizerDelegate>
{
    _Bool _moveDialPadWithAnimation;
    _Bool _isDialPadMoving;
    _Bool _dialPadVisible;
    _Bool _dialPadHasInput;
    id <DTDialPadDelegate> _dialPadDelegate;
    id <DTDialPadDataSource> _dialPadDataSource;
    long long _dialPadBarHeight;
    UICollectionView *_dialCollectionView;
    UICollectionViewFlowLayout *_dialCollectionViewLayout;
    YYThreadSafeArray *_dialPadDatas;
    UICollectionView *_barCollectionView;
    UICollectionViewFlowLayout *_barCollectionViewLayout;
    YYThreadSafeArray *_dialPadBarDatas;
    POPSpringAnimation *_dialPadPopupAnimation;
    POPSpringAnimation *_dialPadHideDownAnimation;
    UIView *_topLineView;
    AVAudioPlayer *_audioPlayer;
}

@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) POPSpringAnimation *dialPadHideDownAnimation; // @synthesize dialPadHideDownAnimation=_dialPadHideDownAnimation;
@property(retain, nonatomic) POPSpringAnimation *dialPadPopupAnimation; // @synthesize dialPadPopupAnimation=_dialPadPopupAnimation;
@property(retain, nonatomic) YYThreadSafeArray *dialPadBarDatas; // @synthesize dialPadBarDatas=_dialPadBarDatas;
@property(retain, nonatomic) UICollectionViewFlowLayout *barCollectionViewLayout; // @synthesize barCollectionViewLayout=_barCollectionViewLayout;
@property(retain, nonatomic) UICollectionView *barCollectionView; // @synthesize barCollectionView=_barCollectionView;
@property(retain, nonatomic) YYThreadSafeArray *dialPadDatas; // @synthesize dialPadDatas=_dialPadDatas;
@property(retain, nonatomic) UICollectionViewFlowLayout *dialCollectionViewLayout; // @synthesize dialCollectionViewLayout=_dialCollectionViewLayout;
@property(retain, nonatomic) UICollectionView *dialCollectionView; // @synthesize dialCollectionView=_dialCollectionView;
@property(nonatomic) long long dialPadBarHeight; // @synthesize dialPadBarHeight=_dialPadBarHeight;
@property(nonatomic) _Bool dialPadHasInput; // @synthesize dialPadHasInput=_dialPadHasInput;
@property(nonatomic) _Bool dialPadVisible; // @synthesize dialPadVisible=_dialPadVisible;
@property(nonatomic) __weak id <DTDialPadDataSource> dialPadDataSource; // @synthesize dialPadDataSource=_dialPadDataSource;
@property(nonatomic) __weak id <DTDialPadDelegate> dialPadDelegate; // @synthesize dialPadDelegate=_dialPadDelegate;
- (void).cxx_destruct;
- (id)_generateBlurMaskView;
- (void)_clearSelections:(id)arg1;
- (void)_didSwipeDown:(id)arg1;
- (void)_resetDialPadAfterHideDown;
- (void)_resetDialPadAfterPopUp;
- (void)_updateDialPadUIWithPop:(_Bool)arg1;
- (void)_moveDialPad:(CDUnknownBlockType)arg1;
- (void)_setNeedLayoutWithAnimation:(_Bool)arg1;
- (id)_dialPadBarDataAtIndexInModel:(long long)arg1;
- (id)_dialPadDataAtIndexInModel:(long long)arg1;
- (void)_installMaskView:(id)arg1;
- (void)_loadComponents:(long long)arg1;
- (void)_loadResources;
- (void)reloadDialPadBarDatas:(id)arg1 hasInput:(_Bool)arg2;
- (void)pop_animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (id)initWithDialParBarHeight:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

