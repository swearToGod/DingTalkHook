//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSString;

@interface DTCSpaceDownloadShareParam : Marshal
{
    NSString *_shortLink;
    NSString *_password;
    NSArray *_ids;
}

@property(copy, nonatomic) NSArray *ids; // @synthesize ids=_ids;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *shortLink; // @synthesize shortLink=_shortLink;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

