//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTripleLineUserCell.h"

@class DTMessageBubbleAttachmentTextViewV2;

@interface DTChatAtMeMessageCell : DTTripleLineUserCell
{
    DTMessageBubbleAttachmentTextViewV2 *_messageTextView;
}

- (void).cxx_destruct;
- (id)messageTextView;
- (void)reloadConversationName;
- (void)layoutSubViewsForCell;
- (void)configCellWithItem:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

