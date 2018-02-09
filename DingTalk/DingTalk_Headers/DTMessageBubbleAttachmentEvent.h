//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTMessageBubbleAttachmentEvent-Protocol.h"

@class NSString;
@protocol DTMessageBubbleAttachmentProtocol, DTMessageBubbleItemProtocol;

@interface DTMessageBubbleAttachmentEvent : NSObject <DTMessageBubbleAttachmentEvent>
{
    long long _eventType;
    id <DTMessageBubbleItemProtocol> _item;
    id <DTMessageBubbleAttachmentProtocol> _view;
}

+ (id)buildWithType:(long long)arg1 item:(id)arg2 view:(id)arg3;
@property(nonatomic) __weak id <DTMessageBubbleAttachmentProtocol> view; // @synthesize view=_view;
@property(nonatomic) __weak id <DTMessageBubbleItemProtocol> item; // @synthesize item=_item;
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

