//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@interface UICollectionView (DTTransitioning)
- (struct CGPoint)toContentOffsetForLayout:(id)arg1 indexPath:(id)arg2 toSize:(struct CGSize)arg3 toContentInset:(struct UIEdgeInsets)arg4;
- (void)finishTransition:(id)arg1;
- (void)updateProgress:(id)arg1;
- (id)transitionToCollectionViewLayout:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dt_setTransitionData:(id)arg1;
- (id)dt_transitionData;
@property(readonly, nonatomic) _Bool isTransitionInProgress;
@end

