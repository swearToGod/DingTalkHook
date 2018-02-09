//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class DTCircleFeedCellInfo, DTHighlightEffectView, MASConstraint, UIView;

@interface DTCircleFeedBaseCell : UITableViewCell
{
    _Bool _needsUpdateWrapperCorner;
    UIView *_timeline;
    UIView *_timelineIndicator;
    DTHighlightEffectView *_wrapper;
    UIView *_bottomSeparator;
    long long _wrapperStyle;
    DTCircleFeedCellInfo *_cellInfo;
    MASConstraint *_wrapperInsetsConstraint;
    struct UIEdgeInsets _wrapperInsets;
}

@property(nonatomic) _Bool needsUpdateWrapperCorner; // @synthesize needsUpdateWrapperCorner=_needsUpdateWrapperCorner;
@property(retain, nonatomic) MASConstraint *wrapperInsetsConstraint; // @synthesize wrapperInsetsConstraint=_wrapperInsetsConstraint;
@property(retain, nonatomic) DTCircleFeedCellInfo *cellInfo; // @synthesize cellInfo=_cellInfo;
@property(nonatomic) struct UIEdgeInsets wrapperInsets; // @synthesize wrapperInsets=_wrapperInsets;
@property(nonatomic) long long wrapperStyle; // @synthesize wrapperStyle=_wrapperStyle;
- (void).cxx_destruct;
- (id)maskLayerByRoundingCorners:(unsigned long long)arg1;
@property(readonly, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(readonly, nonatomic) DTHighlightEffectView *wrapper; // @synthesize wrapper=_wrapper;
@property(readonly, nonatomic) UIView *timelineIndicator; // @synthesize timelineIndicator=_timelineIndicator;
@property(readonly, nonatomic) UIView *timeline; // @synthesize timeline=_timeline;
- (void)updateWrapperCorner;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

