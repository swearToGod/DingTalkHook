//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTCSpaceDentryFullSyncParam : Marshal
{
    NSNumber *_spaceId;
    NSString *_cursor;
}

@property(copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSNumber *spaceId; // @synthesize spaceId=_spaceId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

