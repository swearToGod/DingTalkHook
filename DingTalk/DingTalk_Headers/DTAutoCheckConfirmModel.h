//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTAutoCheckConfirmModel : Marshal
{
    NSString *_corpId;
    NSNumber *_recordId;
    NSNumber *_planId;
}

@property(retain, nonatomic) NSNumber *planId; // @synthesize planId=_planId;
@property(retain, nonatomic) NSNumber *recordId; // @synthesize recordId=_recordId;
@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

