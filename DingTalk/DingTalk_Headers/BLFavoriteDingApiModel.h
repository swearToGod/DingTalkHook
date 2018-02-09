//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPIModel.h"

@class NSArray, NSString;

@interface BLFavoriteDingApiModel : BLBaseAPIModel
{
    NSString *_dingTitle;
    NSString *_dingUrl;
    NSArray *_dingVolumns;
    long long _dingDuration;
    NSString *_authMediaId;
    NSString *_authCode;
}

@property(copy, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(copy, nonatomic) NSString *authMediaId; // @synthesize authMediaId=_authMediaId;
@property(nonatomic) long long dingDuration; // @synthesize dingDuration=_dingDuration;
@property(copy, nonatomic) NSArray *dingVolumns; // @synthesize dingVolumns=_dingVolumns;
@property(copy, nonatomic) NSString *dingUrl; // @synthesize dingUrl=_dingUrl;
@property(copy, nonatomic) NSString *dingTitle; // @synthesize dingTitle=_dingTitle;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end

