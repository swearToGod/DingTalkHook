//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UIImageView;

@interface DTAlertUserListContentView : UIView
{
    NSArray *_members;
    NSArray *_avatarViews;
    UIImageView *_indicatorView;
    UIButton *_maskButton;
    double _previousContentWidth;
    CDUnknownBlockType _didTapContentBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didTapContentBlock; // @synthesize didTapContentBlock=_didTapContentBlock;
- (void).cxx_destruct;
- (void)didTapMaskButton:(id)arg1;
- (void)setupMembersView;
- (void)setupAvatarViews;
- (void)reset;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 members:(id)arg2;

@end

