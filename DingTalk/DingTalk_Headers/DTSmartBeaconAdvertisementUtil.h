//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTSmartBeaconAdvertisementUtil : NSObject
{
}

+ (id)signatureWithMajor:(unsigned short)arg1 minor:(unsigned short)arg2 signKey:(id)arg3;
+ (id)smartSignatureWithMajor:(unsigned short)arg1 minor:(unsigned short)arg2 signKey:(id)arg3;
+ (id)calcAdData:(id)arg1 keyIdx:(long long)arg2 signKey:(id)arg3;
+ (id)calcAdDataForLocalName:(id)arg1 keyIdx:(long long)arg2 signKey:(id)arg3;
+ (id)bleModelWithEntityModel:(id)arg1 keyIdx:(long long)arg2 signKey:(id)arg3;
+ (id)beaconModelWithEntityModel:(id)arg1 keyIdx:(long long)arg2 signKey:(id)arg3;

@end
