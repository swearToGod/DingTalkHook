//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface BLAssetCell : UICollectionViewCell
{
    _Bool _picked;
    UIImageView *_imageView;
    UIImageView *_overlayView;
}

@property(retain, nonatomic) UIImageView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) _Bool picked; // @synthesize picked=_picked;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

