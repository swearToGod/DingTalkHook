//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTCircleAttachmentJournalContentModel, DTCircleAttachmentJournalModel, DTCircleCommentModel, DTCirclePostModel, NSString;
@protocol NSCopying;

@interface DTCircleFeedCellInfo : NSObject
{
    _Bool _isCalculating;
    Class _cellClass;
    NSString *_cellIdentifier;
    DTCirclePostModel *_postModel;
    DTCircleCommentModel *_postCommentModel;
    long long _wrapperStyle;
    long long _noticeUnreadCount;
    double _calculatedCellHeight;
    long long _noticeUid;
    DTCircleAttachmentJournalModel *_journalModel;
    DTCircleAttachmentJournalContentModel *_journalContentModel;
    id <NSCopying> _cacheByKey;
    double _layoutWidth;
    struct UIEdgeInsets _wrapperInsets;
}

@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(nonatomic) _Bool isCalculating; // @synthesize isCalculating=_isCalculating;
@property(retain, nonatomic) id <NSCopying> cacheByKey; // @synthesize cacheByKey=_cacheByKey;
@property(retain, nonatomic) DTCircleAttachmentJournalContentModel *journalContentModel; // @synthesize journalContentModel=_journalContentModel;
@property(retain, nonatomic) DTCircleAttachmentJournalModel *journalModel; // @synthesize journalModel=_journalModel;
@property(nonatomic) long long noticeUid; // @synthesize noticeUid=_noticeUid;
@property(nonatomic) double calculatedCellHeight; // @synthesize calculatedCellHeight=_calculatedCellHeight;
@property(nonatomic) long long noticeUnreadCount; // @synthesize noticeUnreadCount=_noticeUnreadCount;
@property(nonatomic) struct UIEdgeInsets wrapperInsets; // @synthesize wrapperInsets=_wrapperInsets;
@property(nonatomic) long long wrapperStyle; // @synthesize wrapperStyle=_wrapperStyle;
@property(retain, nonatomic) DTCircleCommentModel *postCommentModel; // @synthesize postCommentModel=_postCommentModel;
@property(retain, nonatomic) DTCirclePostModel *postModel; // @synthesize postModel=_postModel;
@property(readonly, nonatomic) NSString *cellIdentifier; // @synthesize cellIdentifier=_cellIdentifier;
@property(readonly, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCellClass:(Class)arg1;

@end

