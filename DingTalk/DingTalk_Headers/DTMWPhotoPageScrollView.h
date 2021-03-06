//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer;
@protocol DTMWPhotoPageScrollViewDelegate;

@interface DTMWPhotoPageScrollView : UIScrollView <UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer *_verticalPan;
    id <DTMWPhotoPageScrollViewDelegate> _panDelegate;
}

@property(nonatomic) __weak id <DTMWPhotoPageScrollViewDelegate> panDelegate; // @synthesize panDelegate=_panDelegate;
- (void).cxx_destruct;
- (void)handleVerticalPan:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

