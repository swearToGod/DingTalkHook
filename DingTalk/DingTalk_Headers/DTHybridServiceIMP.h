//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTHybridServiceProtocol-Protocol.h"

@class NSString;

@interface DTHybridServiceIMP : NSObject <DTHybridServiceProtocol>
{
}

+ (id)transferFromResultError:(id)arg1 LwpError:(id)arg2;
- (void)getLatestPage:(id)arg1 eTag:(id)arg2 corpId:(id)arg3 cookie:(id)arg4 ua:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
