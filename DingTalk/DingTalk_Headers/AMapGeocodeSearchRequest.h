//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSString;

@interface AMapGeocodeSearchRequest : AMapSearchObject
{
    _Bool _isBatch;
    NSString *_address;
    NSString *_city;
}

@property(nonatomic) _Bool isBatch; // @synthesize isBatch=_isBatch;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (id)init;

@end
