//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WKReceiveMessageMergeQueue;

@interface WKReceiveMessageMerge : NSObject
{
    WKReceiveMessageMergeQueue *_queue;
    CDUnknownBlockType _finishMerge;
}

+ (id)mergeDispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType finishMerge; // @synthesize finishMerge=_finishMerge;
- (void).cxx_destruct;
- (void)deQueue;
- (void)enQueue:(id)arg1;
- (id)init;
- (void)dealloc;

@end

