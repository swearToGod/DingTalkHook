//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTEmptyResultView, DTPaginationListView, DTTipsView, NSTimer, UIToolbar;
@protocol DTDingReceiverSectionDataModelDelegate;

@interface DTDingReceiverSectionDataModel : NSObject
{
    DTEmptyResultView *_emptyView;
    _Bool _isAllowedLoadData;
    _Bool _shouldReloadOnce;
    _Bool _showMoreBtn;
    _Bool _showQRViewBtn;
    long long _responseKind;
    long long _status;
    long long _totalCount;
    DTPaginationListView *_listView;
    long long _dingId;
    NSTimer *_remindCountdownTimer;
    UIToolbar *_remindToolbar;
    double _nextRemindTime;
    DTTipsView *_remindToolbarTipsView;
    id <DTDingReceiverSectionDataModelDelegate> _delegate;
}

@property(nonatomic) __weak id <DTDingReceiverSectionDataModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DTTipsView *remindToolbarTipsView; // @synthesize remindToolbarTipsView=_remindToolbarTipsView;
@property(nonatomic) double nextRemindTime; // @synthesize nextRemindTime=_nextRemindTime;
@property(retain, nonatomic) UIToolbar *remindToolbar; // @synthesize remindToolbar=_remindToolbar;
@property(retain, nonatomic) NSTimer *remindCountdownTimer; // @synthesize remindCountdownTimer=_remindCountdownTimer;
@property(nonatomic) long long dingId; // @synthesize dingId=_dingId;
@property(retain, nonatomic) DTEmptyResultView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) _Bool showQRViewBtn; // @synthesize showQRViewBtn=_showQRViewBtn;
@property(nonatomic) _Bool showMoreBtn; // @synthesize showMoreBtn=_showMoreBtn;
@property(nonatomic) _Bool shouldReloadOnce; // @synthesize shouldReloadOnce=_shouldReloadOnce;
@property(retain, nonatomic) DTPaginationListView *listView; // @synthesize listView=_listView;
@property(readonly, nonatomic) _Bool isAllowedLoadData; // @synthesize isAllowedLoadData=_isAllowedLoadData;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) long long responseKind; // @synthesize responseKind=_responseKind;
- (void).cxx_destruct;
- (void)dealloc;
- (id)barButtonItemFactoryWithType:(unsigned long long)arg1 title:(id)arg2 enable:(_Bool)arg3;
- (void)configRemindToolbar:(id)arg1 selectable:(_Bool)arg2 selectedCount:(unsigned long long)arg3 totalCount:(unsigned long long)arg4;
- (id)buildEmptyViewWithResponseKind:(long long)arg1 status:(long long)arg2;
- (void)updateWithResponseModel:(id)arg1;
- (void)reloadOnceIfNeeds;
- (_Bool)isEmpty;
- (id)initWithResponseKind:(long long)arg1 status:(long long)arg2;

@end

