//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class DTCardView;

@interface DTMailSubscribeViewController : DTViewController
{
    int _state;
    DTCardView *_cardView;
}

@property(retain, nonatomic) DTCardView *cardView; // @synthesize cardView=_cardView;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)onRightItemPressed:(id)arg1;
- (void)subscribeCaiNiao;
- (void)unsubscribeCaiNiao;
- (void)isSubscribedCaiNiao;
- (void)refreshCardView;
- (void)loadComponents;
- (id)initWithSubscribeState:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end
