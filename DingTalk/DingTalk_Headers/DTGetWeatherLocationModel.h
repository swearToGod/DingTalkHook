//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTGetWeatherLocationModel : Marshal
{
    NSNumber *_userLocationType;
    NSString *_userLocation;
}

@property(copy, nonatomic) NSString *userLocation; // @synthesize userLocation=_userLocation;
@property(retain, nonatomic) NSNumber *userLocationType; // @synthesize userLocationType=_userLocationType;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

