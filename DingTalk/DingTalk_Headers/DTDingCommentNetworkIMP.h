//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTDingCommentNetworkProtocol-Protocol.h"

@class NSString;

@interface DTDingCommentNetworkIMP : NSObject <DTDingCommentNetworkProtocol>
{
}

- (id)contentModelConvert:(id)arg1;
- (void)listDingCommentByType:(long long)arg1 type:(unsigned long long)arg2 latest:(_Bool)arg3 cursor:(long long)arg4 size:(long long)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)listDingComment:(long long)arg1 latest:(_Bool)arg2 cursor:(long long)arg3 size:(int)arg4 success:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)removeDingComment:(long long)arg1 commentId:(long long)arg2 success:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)sendDingComment:(id)arg1 atOpenIds:(id)arg2 success:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

