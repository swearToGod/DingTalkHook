//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTSearcherBaseViewController.h"

@class UILabel;

@interface DTSearcherDemoViewController : DTSearcherBaseViewController
{
    UILabel *_homeView;
    UILabel *_emptyView;
}

@property(retain, nonatomic) UILabel *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UILabel *homeView; // @synthesize homeView=_homeView;
- (void).cxx_destruct;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

