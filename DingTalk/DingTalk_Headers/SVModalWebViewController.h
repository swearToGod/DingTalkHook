//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class SVWebViewController, UIColor;

@interface SVModalWebViewController : UINavigationController
{
    UIColor *_barsTintColor;
    SVWebViewController *_webViewController;
}

@property(retain, nonatomic) SVWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) UIColor *barsTintColor; // @synthesize barsTintColor=_barsTintColor;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithAddress:(id)arg1;

@end

