//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface DTAttendSegmentedControl : UIView
{
    long long _selectedSegmentIndex;
    NSArray *_imgs;
    NSArray *_selectImgs;
    NSMutableArray *_imgViews;
    CDUnknownBlockType _segmentSelectedBlock;
}

+ (id)segmentedControlWithFrame:(struct CGRect)arg1 imgNames:(id)arg2 selectedSegmentIndex:(long long)arg3 selectedBlock:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType segmentSelectedBlock; // @synthesize segmentSelectedBlock=_segmentSelectedBlock;
@property(retain, nonatomic) NSMutableArray *imgViews; // @synthesize imgViews=_imgViews;
@property(copy, nonatomic) NSArray *selectImgs; // @synthesize selectImgs=_selectImgs;
@property(copy, nonatomic) NSArray *imgs; // @synthesize imgs=_imgs;
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
- (void).cxx_destruct;
- (void)segmentClicked:(id)arg1;
- (void)updateViewsWihtSelectedIndex:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 imgs:(id)arg2 selectedImgs:(id)arg3 selectedSegmentIndex:(long long)arg4;

@end

