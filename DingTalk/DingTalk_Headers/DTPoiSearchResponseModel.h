//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber;

@interface DTPoiSearchResponseModel : Marshal
{
    NSNumber *_count;
    NSArray *_pois;
}

@property(copy, nonatomic) NSArray *pois; // @synthesize pois=_pois;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

