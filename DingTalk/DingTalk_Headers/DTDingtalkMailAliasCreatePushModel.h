//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTDingtalkMailAliasCreatePushModel : Marshal
{
    NSNumber *_uid;
    NSString *_currentAlias;
    NSNumber *_pushType;
}

@property(retain, nonatomic) NSNumber *pushType; // @synthesize pushType=_pushType;
@property(copy, nonatomic) NSString *currentAlias; // @synthesize currentAlias=_currentAlias;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

