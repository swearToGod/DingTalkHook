//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol DTMessageBubbleAttachmentProtocol, DTMessageBubbleItemProtocol;

@protocol DTMessageBubbleAttachmentEvent <NSObject>
@property(nonatomic) __weak id <DTMessageBubbleAttachmentProtocol> view;
@property(nonatomic) __weak id <DTMessageBubbleItemProtocol> item;
@property(nonatomic) long long eventType;
@end
