//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LWSBJson4StreamWriterDelegate-Protocol.h"

@class NSMutableData, NSString;

@interface LJSWriter : NSObject <LWSBJson4StreamWriterDelegate>
{
    NSString *_error;
    NSMutableData *_acc;
}

@property(retain, nonatomic) NSMutableData *acc; // @synthesize acc=_acc;
@property(copy, nonatomic) NSString *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)writer:(id)arg1 appendBytes:(const void *)arg2 length:(unsigned long long)arg3;
- (id)jsonStr;
- (id)dataWithObject:(id)arg1;
- (id)init;

@end

