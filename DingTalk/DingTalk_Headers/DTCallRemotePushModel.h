//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTCallRemotePushModel : Marshal
{
    NSNumber *_operatorUid;
    NSNumber *_safeRank;
    NSString *_action;
    NSString *_jsonData;
}

@property(copy, nonatomic) NSString *jsonData; // @synthesize jsonData=_jsonData;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSNumber *safeRank; // @synthesize safeRank=_safeRank;
@property(retain, nonatomic) NSNumber *operatorUid; // @synthesize operatorUid=_operatorUid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

