//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTCellItem.h"

@class DTLiveVideoInfoItem, NSString;
@protocol DTBizConversation;

@interface DTLVInfoCellItem : DTCellItem
{
    NSString *_cid;
    id <DTBizConversation> _conv;
    DTLiveVideoInfoItem *_model;
}

+ (id)cellItemWithModel:(id)arg1 viewWidth:(double)arg2;
@property(retain, nonatomic) DTLiveVideoInfoItem *model; // @synthesize model=_model;
@property(retain, nonatomic) id <DTBizConversation> conv; // @synthesize conv=_conv;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (id)cellForItem;
- (id)reuseIdentifier;

@end

