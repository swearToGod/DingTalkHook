//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber;

@interface DTDefaultGroupIconsModel : Marshal
{
    NSArray *_avatars;
    NSArray *_stickers;
    NSNumber *_latestVersion;
    NSNumber *_validTime;
}

@property(retain, nonatomic) NSNumber *validTime; // @synthesize validTime=_validTime;
@property(retain, nonatomic) NSNumber *latestVersion; // @synthesize latestVersion=_latestVersion;
@property(copy, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
@property(copy, nonatomic) NSArray *avatars; // @synthesize avatars=_avatars;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

