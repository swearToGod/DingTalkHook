//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface DTAlphaSettingJumpViews : UIView
{
    CDUnknownBlockType _jumpBlock;
    NSArray *_jumpViewArray;
}

@property(retain, nonatomic) NSArray *jumpViewArray; // @synthesize jumpViewArray=_jumpViewArray;
@property(copy, nonatomic) CDUnknownBlockType jumpBlock; // @synthesize jumpBlock=_jumpBlock;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refreshJumpViews:(id)arg1;
- (void)loadCompoment;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

