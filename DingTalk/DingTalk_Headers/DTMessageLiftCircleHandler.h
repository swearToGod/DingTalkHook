//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTMessageBaseHandler.h"

@class NSMutableDictionary;

@interface DTMessageLiftCircleHandler : DTMessageBaseHandler
{
    _Bool _willDisappear;
    _Bool _hasCalledDidAppear;
    _Bool _hasProceedLeave;
    _Bool _hasCalledViewDidLayoutSubviews;
    _Bool _hasCalledViewWillAppeared;
    _Bool _isFirstLoadIM;
    _Bool _isFirstCellRendered;
    NSMutableDictionary *_openChatAlarmDic;
}

@property(retain, nonatomic) NSMutableDictionary *openChatAlarmDic; // @synthesize openChatAlarmDic=_openChatAlarmDic;
@property(nonatomic) _Bool isFirstCellRendered; // @synthesize isFirstCellRendered=_isFirstCellRendered;
@property(nonatomic) _Bool isFirstLoadIM; // @synthesize isFirstLoadIM=_isFirstLoadIM;
@property(nonatomic) _Bool hasCalledViewWillAppeared; // @synthesize hasCalledViewWillAppeared=_hasCalledViewWillAppeared;
@property(nonatomic) _Bool hasCalledViewDidLayoutSubviews; // @synthesize hasCalledViewDidLayoutSubviews=_hasCalledViewDidLayoutSubviews;
@property(nonatomic) _Bool hasProceedLeave; // @synthesize hasProceedLeave=_hasProceedLeave;
@property(nonatomic) _Bool hasCalledDidAppear; // @synthesize hasCalledDidAppear=_hasCalledDidAppear;
@property(nonatomic) _Bool willDisappear; // @synthesize willDisappear=_willDisappear;
- (void).cxx_destruct;
- (void)endWatchPoint:(id)arg1;
- (void)startWatchPoint:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

