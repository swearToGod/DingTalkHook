//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UINavigationControllerDelegate-Protocol.h"

@class ELCImagePickerController, NSArray, UIImage;

@protocol ELCImagePickerControllerDelegate <UINavigationControllerDelegate>
- (void)elcImagePickerControllerDidCancel:(ELCImagePickerController *)arg1;
- (void)elcImagePickerController:(ELCImagePickerController *)arg1 didFinishPickingMediaWithInfo:(NSArray *)arg2;

@optional
- (void)elcImagePickerController:(ELCImagePickerController *)arg1 didFinishPickingAssets:(NSArray *)arg2;
- (void)elcImagePickerControllerDidCancelGraffiti:(ELCImagePickerController *)arg1;
- (void)elcImagePickerControllerDidEnterGraffiti:(ELCImagePickerController *)arg1;
- (void)elcImagePickerController:(ELCImagePickerController *)arg1 didFinishGraffitiImage:(UIImage *)arg2;
@end

