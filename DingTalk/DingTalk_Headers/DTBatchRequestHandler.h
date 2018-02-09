//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface DTBatchRequestHandler : NSObject
{
    int _spinLock;
    NSMutableArray *_reqItems;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    CDUnknownBlockType _processBlock;
    CDUnknownBlockType _argHashBlock;
    CDUnknownBlockType _valueHashBlock;
}

+ (id)handlerWithProcessBlock:(CDUnknownBlockType)arg1 argHashBlock:(CDUnknownBlockType)arg2 valueHashBlock:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType valueHashBlock; // @synthesize valueHashBlock=_valueHashBlock;
@property(copy, nonatomic) CDUnknownBlockType argHashBlock; // @synthesize argHashBlock=_argHashBlock;
@property(copy, nonatomic) CDUnknownBlockType processBlock; // @synthesize processBlock=_processBlock;
- (void).cxx_destruct;
- (void)processBatchRequests;
- (void)addRequestItem:(id)arg1;
- (id)init;

@end

