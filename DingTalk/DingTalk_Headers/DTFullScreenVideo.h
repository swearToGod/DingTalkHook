//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIWindow;

@interface DTFullScreenVideo : NSObject
{
    UIWindow *_window;
    unsigned long long _showType;
    struct CGRect _fromRect;
}

+ (id)sharedInstance;
@property(nonatomic) struct CGRect fromRect; // @synthesize fromRect=_fromRect;
@property(nonatomic) unsigned long long showType; // @synthesize showType=_showType;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showVC:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)pushVC:(id)arg1;
- (void)presentVC:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentVC:(id)arg1;
- (void)dismissMoviePlayerWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissMoviePlayer;
- (void)showMoviePlayerVC:(id)arg1 fromRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;

@end

