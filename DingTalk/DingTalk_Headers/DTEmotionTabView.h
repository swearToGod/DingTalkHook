//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView;
@protocol DTEmotionTabViewDelegate;

@interface DTEmotionTabView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <DTEmotionTabViewDelegate> _delegate;
    NSArray *_items;
    UICollectionView *_tabCollectionView;
}

@property(retain, nonatomic) UICollectionView *tabCollectionView; // @synthesize tabCollectionView=_tabCollectionView;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <DTEmotionTabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)send:(id)arg1;
- (void)reloadWithItems:(id)arg1;
- (void)setItemSelectedWithPackageId:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

