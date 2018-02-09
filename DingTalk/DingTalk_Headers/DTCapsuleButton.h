//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class DTCapsuleButtonItem, UIImageView, UILabel;

@interface DTCapsuleButton : UIButton
{
    DTCapsuleButtonItem *_capsuleItem;
    UIImageView *_iconView;
    UILabel *_capsuleTitleLabel;
    CDUnknownBlockType _clickBlock;
    CDUnknownBlockType _longPressBlock;
}

+ (id)capsuleButtonWithItem:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType longPressBlock; // @synthesize longPressBlock=_longPressBlock;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) UILabel *capsuleTitleLabel; // @synthesize capsuleTitleLabel=_capsuleTitleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) DTCapsuleButtonItem *capsuleItem; // @synthesize capsuleItem=_capsuleItem;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)buttonDidLongPress:(id)arg1;
- (void)buttonDidClick;

@end
