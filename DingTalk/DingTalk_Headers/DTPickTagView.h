//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UILabel;

@interface DTPickTagView : UIImageView
{
    UILabel *_textLabel;
    UIImageView *_closeIcon;
}

+ (double)widthWithTag:(id)arg1;
+ (id)titleFont;
@property(retain, nonatomic) UIImageView *closeIcon; // @synthesize closeIcon=_closeIcon;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)setTag:(id)arg1;
- (id)init;

@end

