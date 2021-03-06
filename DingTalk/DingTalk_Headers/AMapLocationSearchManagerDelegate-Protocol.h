//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AMapLocationDistrictRequest, AMapLocationPOIAroundRequest, AMapLocationPOIKeywordsRequest, AMapLocationSearchBaseRequest, NSArray, NSError;

@protocol AMapLocationSearchManagerDelegate <NSObject>
- (void)onPOIAroundSearchDone:(AMapLocationPOIAroundRequest *)arg1 result:(NSArray *)arg2;
- (void)onPOIKeywordsSearchDone:(AMapLocationPOIKeywordsRequest *)arg1 result:(NSArray *)arg2;
- (void)onDistrictSearchDone:(AMapLocationDistrictRequest *)arg1 result:(NSArray *)arg2;
- (void)locationSearchRequest:(AMapLocationSearchBaseRequest *)arg1 didFailWithError:(NSError *)arg2;
@end

