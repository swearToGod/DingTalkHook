//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTConversationMemberCell.h"

@class DTDingTableViewCellActionView, UIImageView;

@interface DTDingMemberCell : DTConversationMemberCell
{
    DTDingTableViewCellActionView *_bottomActionView;
    UIImageView *_separatorLine;
}

@property(retain, nonatomic) UIImageView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) DTDingTableViewCellActionView *bottomActionView; // @synthesize bottomActionView=_bottomActionView;
- (void).cxx_destruct;
- (void)configCellWithItem:(id)arg1;
- (void)layoutCustomCell;
- (void)addSubViewForCustomCell;

@end

