//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface DTMailImageView : UIView
{
    NSString *_imageName;
    NSString *_alertStr;
    UIImageView *_imageView;
    UILabel *_alertLabel;
}

@property(retain, nonatomic) UILabel *alertLabel; // @synthesize alertLabel=_alertLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSString *alertStr; // @synthesize alertStr=_alertStr;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

