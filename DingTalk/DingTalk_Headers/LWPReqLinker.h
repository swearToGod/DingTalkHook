//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface LWPReqLinker : NSObject
{
    NSMutableArray *_reqLinks;
    id _currentReq;
}

@property(nonatomic) __weak id currentReq; // @synthesize currentReq=_currentReq;
@property(retain, nonatomic) NSMutableArray *reqLinks; // @synthesize reqLinks=_reqLinks;
- (void).cxx_destruct;
- (void)enumerateRequestUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeRequest:(id)arg1;
- (_Bool)isExistRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)dealloc;
- (id)init;

@end

