//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIScrollView, WXIndicatorView;
@protocol WXSliderViewDelegate;

@interface WXSliderView : UIView <UIScrollViewDelegate>
{
    WXIndicatorView *_indicator;
    id <WXSliderViewDelegate> _delegate;
    UIScrollView *_scrollView;
    NSMutableArray *_itemViews;
    long long _currentIndex;
}

@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <WXSliderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WXIndicatorView *indicator; // @synthesize indicator=_indicator;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)_isItemViewVisiable:(id)arg1;
- (_Bool)_validateCurrentIndex;
- (void)_resetItemCountLessThanOrEqualToTwo;
- (void)_scroll2Center;
- (long long)_centerItemIndex;
- (void)_resetItemFrames;
- (void)_resortItemViews;
- (void)_configSubViews;
- (void)loadData;
- (void)layoutItemViews;
- (void)scroll2ItemView:(long long)arg1 animated:(_Bool)arg2;
- (void)removeItemView:(id)arg1;
- (void)insertItemView:(id)arg1 atIndex:(long long)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

