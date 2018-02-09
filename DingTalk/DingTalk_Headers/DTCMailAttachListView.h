//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, NSTimer, UICollectionView, UICollectionViewFlowLayout;
@protocol DTCMailAttachListViewDelegate;

@interface DTCMailAttachListView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _isEditable;
    _Bool _showTopSeperatorLine;
    _Bool _layoutInitialized;
    id <DTCMailAttachListViewDelegate> _delegate;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    UIView *_lineView;
    NSArray *_attachmentDataSource;
    NSTimer *_updateTimer;
    struct UIEdgeInsets _edgeInsets;
    struct UIEdgeInsets _lineEdgeInsets;
}

@property(nonatomic) _Bool layoutInitialized; // @synthesize layoutInitialized=_layoutInitialized;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(copy, nonatomic) NSArray *attachmentDataSource; // @synthesize attachmentDataSource=_attachmentDataSource;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <DTCMailAttachListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showTopSeperatorLine; // @synthesize showTopSeperatorLine=_showTopSeperatorLine;
@property(nonatomic) _Bool isEditable; // @synthesize isEditable=_isEditable;
@property(nonatomic) struct UIEdgeInsets lineEdgeInsets; // @synthesize lineEdgeInsets=_lineEdgeInsets;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onTapAttachmentView:(id)arg1;
- (void)onDeleteClick:(id)arg1;
- (void)updateAttachmentDownloadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 status:(long long)arg3 atIndex:(unsigned long long)arg4;
- (void)updateAttachment:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)createDeleteButtonInAttachmentView:(id)arg1;
- (void)onUpdateTimer:(id)arg1;
- (void)reloadAttachment:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
