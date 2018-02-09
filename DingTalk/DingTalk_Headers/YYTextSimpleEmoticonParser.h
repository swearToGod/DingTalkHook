//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "YYTextParser-Protocol.h"

@class NSDictionary, NSRegularExpression, NSString;
@protocol OS_dispatch_semaphore;

@interface YYTextSimpleEmoticonParser : NSObject <YYTextParser>
{
    NSRegularExpression *_regex;
    NSDictionary *_mapper;
    NSObject<OS_dispatch_semaphore> *_lock;
}

- (void).cxx_destruct;
- (_Bool)parseText:(id)arg1 selectedRange:(struct _NSRange *)arg2;
- (struct _NSRange)_replaceTextInRange:(struct _NSRange)arg1 withLength:(unsigned long long)arg2 selectedRange:(struct _NSRange)arg3;
@property(copy) NSDictionary *emoticonMapper;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

