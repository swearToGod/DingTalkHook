//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTPushDingCallSMSChangedModel : Marshal
{
    NSNumber *_mid;
    NSNumber *_uid;
    NSString *_extInfo;
}

@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSNumber *mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

