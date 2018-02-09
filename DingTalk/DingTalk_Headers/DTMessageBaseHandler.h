//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTMessageHandlerProtocol-Protocol.h"

@class DTMessageHandlerContext, NSString;

@interface DTMessageBaseHandler : NSObject <DTMessageHandlerProtocol>
{
    DTMessageHandlerContext *context;
}

@property(retain, nonatomic) DTMessageHandlerContext *context; // @synthesize context;
- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (id)baseConv;
- (id)baseVC;
- (void)removeObserver;
- (void)addObserver;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

