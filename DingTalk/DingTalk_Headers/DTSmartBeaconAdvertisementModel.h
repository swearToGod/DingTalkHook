//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CBUUID, NSDictionary;

@interface DTSmartBeaconAdvertisementModel : NSObject
{
    unsigned short _major;
    unsigned short _minor;
    CBUUID *_uuid;
    NSDictionary *_adData;
}

@property(copy, nonatomic) NSDictionary *adData; // @synthesize adData=_adData;
@property(nonatomic) unsigned short minor; // @synthesize minor=_minor;
@property(nonatomic) unsigned short major; // @synthesize major=_major;
@property(copy, nonatomic) CBUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)advertisementKey;

@end
