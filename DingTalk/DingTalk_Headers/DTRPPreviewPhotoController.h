//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class UIImage;
@protocol DTRPPreviewPhotoControllerDelegate;

@interface DTRPPreviewPhotoController : DTViewController
{
    _Bool _isEnd;
    _Bool _needRotate;
    UIImage *_previewImage;
    id <DTRPPreviewPhotoControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <DTRPPreviewPhotoControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool needRotate; // @synthesize needRotate=_needRotate;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
- (void).cxx_destruct;
- (void)showAlertView;
- (void)exitController:(int)arg1;
- (void)onOkButtonPressed:(id)arg1;
- (void)onAgainButtonPressed:(id)arg1;
- (void)setupView;
- (void)viewDidLoad;

@end

