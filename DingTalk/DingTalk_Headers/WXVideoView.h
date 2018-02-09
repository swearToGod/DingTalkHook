//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayerItem, UIViewController, WXSDKInstance;

@interface WXVideoView : UIView
{
    CDUnknownBlockType _playbackStateChanged;
    UIViewController *_playerViewController;
    AVPlayerItem *_playerItem;
    WXSDKInstance *_weexSDKInstance;
}

@property(retain, nonatomic) WXSDKInstance *weexSDKInstance; // @synthesize weexSDKInstance=_weexSDKInstance;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) UIViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(copy, nonatomic) CDUnknownBlockType playbackStateChanged; // @synthesize playbackStateChanged=_playbackStateChanged;
- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)playFinish;
- (void)setURL:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)greater8SysVer;
- (void)dealloc;
- (id)init;

@end

