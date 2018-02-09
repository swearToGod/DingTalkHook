//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTMessageAlbumScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTMessageAlbumScrollView, DTMessagePopupInputMenuView, DTPopupTableCellItem, NSArray, NSDictionary, NSString, UIButton, UIColor, UITableView;
@protocol DTMessagePopupAlbumMenuViewDelegate;

@interface DTMessagePopupAlbumMenuView : UIView <UITableViewDataSource, UITableViewDelegate, DTMessageAlbumScrollViewDelegate>
{
    _Bool _supportOriginalSelected;
    _Bool _supportMarkSelected;
    _Bool _enableDragUpSend;
    _Bool _dingSpaceEnabled;
    _Bool _isSelectedPhotos;
    float _height;
    UIButton *_backgroundButton;
    UITableView *_menuTableView;
    id <DTMessagePopupAlbumMenuViewDelegate> _delegate;
    UIColor *_mainBackgroundColor;
    UIColor *_defaultMenuItemColor;
    NSDictionary *_cellConfiguration;
    unsigned long long _maximumImagesCount;
    NSArray *_customActionItems;
    long long _style;
    CDUnknownBlockType _dingSpaceAction;
    UIView *_containerView;
    UIView *_backgroundColorView;
    UIButton *_setionMaskButton;
    DTMessageAlbumScrollView *_albumScrollView;
    DTMessagePopupInputMenuView *_inputMenuView;
    NSArray *_viewModels;
    unsigned long long _pickImagesTotalSize;
    DTPopupTableCellItem *_markItem;
    NSArray *_normalTableItems;
    NSArray *_selectedTableItems;
    NSArray *_embededActionItems;
    NSArray *_selectedIndexPathArray;
    struct CGPoint _dismissRightBottomPoint;
}

+ (void)accessGroupWithTypes:(unsigned long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)accessGroupSavedPhotosWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
+ (_Bool)hasAuthorizationForAlbum;
@property(copy, nonatomic) NSArray *selectedIndexPathArray; // @synthesize selectedIndexPathArray=_selectedIndexPathArray;
@property(copy, nonatomic) NSArray *embededActionItems; // @synthesize embededActionItems=_embededActionItems;
@property(retain, nonatomic) NSArray *selectedTableItems; // @synthesize selectedTableItems=_selectedTableItems;
@property(retain, nonatomic) NSArray *normalTableItems; // @synthesize normalTableItems=_normalTableItems;
@property(retain, nonatomic) DTPopupTableCellItem *markItem; // @synthesize markItem=_markItem;
@property(nonatomic) unsigned long long pickImagesTotalSize; // @synthesize pickImagesTotalSize=_pickImagesTotalSize;
@property(retain, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
@property(nonatomic) _Bool isSelectedPhotos; // @synthesize isSelectedPhotos=_isSelectedPhotos;
@property(nonatomic) float height; // @synthesize height=_height;
@property(retain, nonatomic) DTMessagePopupInputMenuView *inputMenuView; // @synthesize inputMenuView=_inputMenuView;
@property(retain, nonatomic) DTMessageAlbumScrollView *albumScrollView; // @synthesize albumScrollView=_albumScrollView;
@property(retain, nonatomic) UIButton *setionMaskButton; // @synthesize setionMaskButton=_setionMaskButton;
@property(retain, nonatomic) UIView *backgroundColorView; // @synthesize backgroundColorView=_backgroundColorView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType dingSpaceAction; // @synthesize dingSpaceAction=_dingSpaceAction;
@property(nonatomic) _Bool dingSpaceEnabled; // @synthesize dingSpaceEnabled=_dingSpaceEnabled;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSArray *customActionItems; // @synthesize customActionItems=_customActionItems;
@property(nonatomic) unsigned long long maximumImagesCount; // @synthesize maximumImagesCount=_maximumImagesCount;
@property(nonatomic) struct CGPoint dismissRightBottomPoint; // @synthesize dismissRightBottomPoint=_dismissRightBottomPoint;
@property(nonatomic) _Bool enableDragUpSend; // @synthesize enableDragUpSend=_enableDragUpSend;
@property(retain, nonatomic) NSDictionary *cellConfiguration; // @synthesize cellConfiguration=_cellConfiguration;
@property(retain, nonatomic) UIColor *defaultMenuItemColor; // @synthesize defaultMenuItemColor=_defaultMenuItemColor;
@property(retain, nonatomic) UIColor *mainBackgroundColor; // @synthesize mainBackgroundColor=_mainBackgroundColor;
@property(nonatomic) __weak id <DTMessagePopupAlbumMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool supportMarkSelected; // @synthesize supportMarkSelected=_supportMarkSelected;
@property(nonatomic) _Bool supportOriginalSelected; // @synthesize supportOriginalSelected=_supportOriginalSelected;
@property(retain, nonatomic) UITableView *menuTableView; // @synthesize menuTableView=_menuTableView;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
- (void).cxx_destruct;
- (void)didDragToSendPhotoDirectly:(id)arg1;
- (void)didSelectedPhotosInAlbumWithIndexPathArray:(id)arg1;
- (void)didSelectedPhotoModel:(id)arg1 isSelected:(_Bool)arg2;
- (void)didSelectedPhotosInAlbumWithViewModels:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableMenuItems;
- (void)backgroundButtonPressed:(id)arg1;
- (void)applyDismissPopupView;
- (void)_autoDismissIfNeededWhenSendPhotos;
- (void)doSendOriginalPhotos:(id)arg1;
- (void)doSendPhotos:(id)arg1;
- (void)doOpenSpaceAction:(id)arg1;
- (void)doCancelAction:(id)arg1;
- (void)goCameraAction:(id)arg1;
- (void)goAlbumAction:(id)arg1;
- (void)didSelectedMenuItem:(id)arg1;
- (void)didTapMaskAction:(id)arg1;
- (_Bool)isExpandToDownward;
- (double)heightForInputMenuView;
- (void)layoutMaskActionButton;
- (void)layoutContentViews;
- (void)setupInputMenuView;
- (void)generateEmbededActionItems;
- (void)configurePopupAlbumMenuView;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)showInView:(id)arg1 animation:(_Bool)arg2;
- (void)setupViewComponentsWithPhotoModels:(id)arg1;
- (void)setupDefaultTableActionItems;
- (void)updateMarkSelectItem:(_Bool)arg1;
- (void)setupIconStyleTableActionItems;
- (id)defaultTableCellTitleColor;
- (id)defaultTableCellTitleFont;
- (void)applyUpdateBackgroundColor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

