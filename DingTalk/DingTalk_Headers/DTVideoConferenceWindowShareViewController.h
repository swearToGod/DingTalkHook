//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class DTVideoConferenceMemberModel, NSString, UIButton, UICollectionView, UICollectionViewFlowLayout, YYThreadSafeArray;
@protocol DTVideoConferenceWindowShareDelegate;

@interface DTVideoConferenceWindowShareViewController : DTViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>
{
    double _scale;
    _Bool _animatedZoooming;
    unsigned long long hor_direction;
    unsigned long long ver_direction;
    _Bool panHorAnimationing;
    _Bool panVerAnimationing;
    _Bool presenting;
    id <DTVideoConferenceWindowShareDelegate> _delegate;
    DTVideoConferenceMemberModel *_windowShareMember;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    UIButton *_exitButton;
    YYThreadSafeArray *_windowShareMemberArray;
}

@property(retain, nonatomic) YYThreadSafeArray *windowShareMemberArray; // @synthesize windowShareMemberArray=_windowShareMemberArray;
@property(retain, nonatomic) UIButton *exitButton; // @synthesize exitButton=_exitButton;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) DTVideoConferenceMemberModel *windowShareMember; // @synthesize windowShareMember=_windowShareMember;
@property(nonatomic) __weak id <DTVideoConferenceWindowShareDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_composeAttributeString;
- (void)_resetZoom;
- (void)_updateZoom:(double)arg1;
- (void)_stopWindowShare;
- (void)_minWindowShare;
- (void)_setupNavigationBar;
- (void)_setupCollectionView;
- (void)_loadData:(id)arg1;
- (void)_loadComponents;
- (id)windowShareCell;
- (void)dismiss;
- (void)popup:(id)arg1 member:(id)arg2 firstLaunch:(_Bool)arg3;
- (_Bool)isPopuped;
- (void)updateTitleView:(id)arg1;
- (void)stopProcess;
- (void)displayProcess:(struct _MSPicture)arg1 filp:(_Bool)arg2 isSpeaker:(_Bool)arg3 full:(_Bool)arg4 key:(id)arg5;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)_panGesture:(id)arg1;
- (void)_pinchGesture:(id)arg1;
- (void)_tapGesture:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

