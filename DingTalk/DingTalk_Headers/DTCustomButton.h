//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface DTCustomButton : UIButton
{
    unsigned long long _customStyle;
}

+ (struct CGRect)customButtonRectWithTitle:(id)arg1 style:(unsigned long long)arg2;
+ (id)buttonWithStyle:(unsigned long long)arg1;
@property(nonatomic) unsigned long long customStyle; // @synthesize customStyle=_customStyle;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;

@end

