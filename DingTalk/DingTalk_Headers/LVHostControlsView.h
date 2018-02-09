//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LVBaseControlsView.h"

@class UIButton;

@interface LVHostControlsView : LVBaseControlsView
{
    UIButton *_cameraBtn;
    UIButton *_multiGroupsBtn;
}

@property(retain, nonatomic) UIButton *multiGroupsBtn; // @synthesize multiGroupsBtn=_multiGroupsBtn;
@property(retain, nonatomic) UIButton *cameraBtn; // @synthesize cameraBtn=_cameraBtn;
- (void).cxx_destruct;
- (void)multiGroupsLive:(id)arg1;
- (void)switchCurrentCaptureDevices;
- (void)hideCornerControlsContainer;
- (void)showCornerControlsContainer;
- (void)setUpConstraints;
- (void)setUpView;
- (id)init;

@end

