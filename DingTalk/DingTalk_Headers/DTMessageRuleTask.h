//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTMessageRuleTaskProtocol-Protocol.h"

@class DTMessageRuleTaskContext, NSString;

@interface DTMessageRuleTask : NSObject <DTMessageRuleTaskProtocol>
{
    DTMessageRuleTaskContext *_context;
}

+ (void)storeSystemMessageToDatabase:(id)arg1 shouldUpdateConversation:(_Bool)arg2;
+ (_Bool)isValidWithContext:(id)arg1;
@property(readonly, nonatomic) __weak DTMessageRuleTaskContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)fakeSystemMessageWithText:(id)arg1 buildingBlock:(CDUnknownBlockType)arg2;
- (void)execute;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

