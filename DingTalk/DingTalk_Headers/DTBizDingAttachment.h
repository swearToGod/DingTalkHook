//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTBizDingAttachment-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface DTBizDingAttachment : NSObject <DTBizDingAttachment>
{
    long long _attachmentType;
    NSArray *_attachmentExtras;
    NSDictionary *_atOpenIds;
}

@property(copy, nonatomic) NSDictionary *atOpenIds; // @synthesize atOpenIds=_atOpenIds;
@property(copy, nonatomic) NSArray *attachmentExtras; // @synthesize attachmentExtras=_attachmentExtras;
@property(nonatomic) long long attachmentType; // @synthesize attachmentType=_attachmentType;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
