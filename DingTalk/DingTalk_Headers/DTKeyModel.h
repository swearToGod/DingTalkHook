//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTKeyModel : Marshal
{
    NSNumber *_version;
    NSString *_key;
    NSString *_algorithm;
}

@property(copy, nonatomic) NSString *algorithm; // @synthesize algorithm=_algorithm;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

