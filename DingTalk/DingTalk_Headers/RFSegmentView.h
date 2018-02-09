//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor;
@protocol RFSegmentViewDelegate;

@interface RFSegmentView : UIView
{
    UIColor *_tintColor;
    NSMutableArray *_itemsArray;
    id <RFSegmentViewDelegate> _delegate;
    UIView *_bgView;
    NSMutableArray *_titlesArray;
    NSMutableArray *_linesArray;
}

@property(retain, nonatomic) NSMutableArray *linesArray; // @synthesize linesArray=_linesArray;
@property(retain, nonatomic) NSMutableArray *titlesArray; // @synthesize titlesArray=_titlesArray;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <RFSegmentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @synthesize itemsArray=_itemsArray;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)ItemStateChanged:(id)arg1 index:(long long)arg2 isSelected:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 items:(id)arg2 bgColor:(id)arg3 norColor:(id)arg4 selColor:(id)arg5 selectIndex:(long long)arg6 lineColor:(id)arg7;

@end

