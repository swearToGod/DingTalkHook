//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface NINetDetectResult : NSObject
{
    _Bool _connectable;
    double _cost;
    NSString *_host;
    NSError *_error;
}

+ (id)resultWithHost:(id)arg1 connectable:(_Bool)arg2 cost:(double)arg3 error:(id)arg4;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) _Bool connectable; // @synthesize connectable=_connectable;
@property(nonatomic) double cost; // @synthesize cost=_cost;
- (void).cxx_destruct;

@end

