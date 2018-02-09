//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSData, NSDate, NSString, NSURL;

@interface DTRocketCacheModel : NSObject <NSCoding, NSCopying>
{
    NSURL *_URL;
    NSData *_data;
    long long _statusCode;
    NSString *_eTag;
    long long _dataLength;
    long long _maxAge;
    long long _checkAge;
    NSDate *_cachedDate;
    NSDate *_lasCheckDate;
}

+ (id)cacheKeyForURL:(id)arg1;
+ (id)cacheModelWithIDLModel:(id)arg1 request:(id)arg2;
@property(retain, nonatomic) NSDate *lasCheckDate; // @synthesize lasCheckDate=_lasCheckDate;
@property(retain, nonatomic) NSDate *cachedDate; // @synthesize cachedDate=_cachedDate;
@property(nonatomic) long long checkAge; // @synthesize checkAge=_checkAge;
@property(nonatomic) long long maxAge; // @synthesize maxAge=_maxAge;
@property(nonatomic) long long dataLength; // @synthesize dataLength=_dataLength;
@property(copy, nonatomic) NSString *eTag; // @synthesize eTag=_eTag;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)realTimeCacheStatus;
- (void)updateCacheDateAfterCheck:(long long)arg1 checkAge:(long long)arg2 eTag:(id)arg3;
- (void)updateCacheDateAfterCheck;

@end

