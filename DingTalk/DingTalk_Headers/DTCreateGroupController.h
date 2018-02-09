//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTButton, DTGroupTypeDataProvider, DTTranslationTitleView, NSArray, NSNumber, NSString, UIView;

@interface DTCreateGroupController : DTTableViewController
{
    DTGroupTypeDataProvider *_provider;
    _Bool _showHistory;
    NSArray *_uids;
    NSString *_sourceCid;
    DTTranslationTitleView *_titleView;
    DTButton *_createGroupBtn;
    unsigned long long _type;
    NSString *_autoIconMediaId;
    NSNumber *_autoIconTag;
    NSString *_customIconMediaId;
    NSString *_conversationName;
    UIView *_refreshMaskView;
    struct CGSize _iPadLastLayoutSize;
}

@property(nonatomic) struct CGSize iPadLastLayoutSize; // @synthesize iPadLastLayoutSize=_iPadLastLayoutSize;
@property(retain, nonatomic) UIView *refreshMaskView; // @synthesize refreshMaskView=_refreshMaskView;
@property(nonatomic) _Bool showHistory; // @synthesize showHistory=_showHistory;
@property(copy, nonatomic) NSString *conversationName; // @synthesize conversationName=_conversationName;
@property(copy, nonatomic) NSString *customIconMediaId; // @synthesize customIconMediaId=_customIconMediaId;
@property(retain, nonatomic) NSNumber *autoIconTag; // @synthesize autoIconTag=_autoIconTag;
@property(copy, nonatomic) NSString *autoIconMediaId; // @synthesize autoIconMediaId=_autoIconMediaId;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) DTButton *createGroupBtn; // @synthesize createGroupBtn=_createGroupBtn;
@property(retain, nonatomic) DTTranslationTitleView *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) NSString *sourceCid; // @synthesize sourceCid=_sourceCid;
@property(copy, nonatomic) NSArray *uids; // @synthesize uids=_uids;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)notifyDidChangeOrganization:(id)arg1;
- (void)onCreateGroup:(id)arg1;
- (void)addOrDeleteMembersAction;
- (void)handleAvatar:(id)arg1;
- (id)iconMediaId;
- (id)pickedOrganization;
- (id)memberUids;
- (void)getRecommendGroupType;
- (void)loadMember;
- (void)generateAutoIcon;
- (id)generateGroupTypeFooterWithSummary:(id)arg1 link:(id)arg2;
- (void)showGroupKindPicker;
- (id)groupTypeSection;
- (void)loadDataSource;
- (id)tableViewHeadView;
- (void)setupCreateGroupBtn;
- (double)topNavigationHeight;
- (void)setupTitleView;
- (void)setupPlaceholderView;
- (void)reloadTable;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUids:(id)arg1 sourceCid:(id)arg2;

@end

