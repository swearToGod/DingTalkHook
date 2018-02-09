//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTAttributedLabel, DTButton, NSString;

@interface DTDingListAttachTextView : UIView
{
    NSString *_text;
    DTAttributedLabel *_textLabel;
    long long _maxLineCount;
    DTButton *_lookMoreButton;
}

+ (double)textHeightWithText:(id)arg1 constraintWidth:(double)arg2 maxLineCount:(long long)arg3;
+ (double)heightWithText:(id)arg1 constraintWidth:(double)arg2 maxLineCount:(long long)arg3;
+ (id)textColor;
+ (id)textFont;
@property(retain, nonatomic) DTButton *lookMoreButton; // @synthesize lookMoreButton=_lookMoreButton;
@property(nonatomic) long long maxLineCount; // @synthesize maxLineCount=_maxLineCount;
@property(retain, nonatomic) DTAttributedLabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *text;
- (void)setText:(id)arg1 adjustHeight:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 maxLineCount:(long long)arg2 needShowLink:(_Bool)arg3;

@end
