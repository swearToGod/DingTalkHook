//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSString;

@interface DTCorpSsidsModel : Marshal
{
    NSString *_corpId;
    NSArray *_ssids;
    NSArray *_ouiList;
    NSString *_psk;
}

@property(copy, nonatomic) NSString *psk; // @synthesize psk=_psk;
@property(copy, nonatomic) NSArray *ouiList; // @synthesize ouiList=_ouiList;
@property(copy, nonatomic) NSArray *ssids; // @synthesize ssids=_ssids;
@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;
- (id)description;

@end

