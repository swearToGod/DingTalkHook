//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSString;

@interface DTActivityReqModel : Marshal
{
    long long _type;
    NSString *_sessionId;
}

@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

