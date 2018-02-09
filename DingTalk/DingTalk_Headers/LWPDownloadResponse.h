//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface LWPDownloadResponse : NSObject
{
    NSString *_sip;
    NSString *_downResp;
    long long _startPos;
    long long _endPos;
    long long _totalSize;
    NSString *_crc32;
}

+ (id)responseOfTransaction:(id)arg1;
@property(readonly, nonatomic) NSString *crc32; // @synthesize crc32=_crc32;
@property(readonly, nonatomic) long long totalSize; // @synthesize totalSize=_totalSize;
@property(readonly, nonatomic) long long endPos; // @synthesize endPos=_endPos;
@property(readonly, nonatomic) long long startPos; // @synthesize startPos=_startPos;
@property(copy, nonatomic) NSString *downResp; // @synthesize downResp=_downResp;
@property(copy, nonatomic) NSString *sip; // @synthesize sip=_sip;
- (void).cxx_destruct;
- (id)doParseOptionKey:(id)arg1;
- (void)doParseDownResp;
- (void)resetVal;

@end

