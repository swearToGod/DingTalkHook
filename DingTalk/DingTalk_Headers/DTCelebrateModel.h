//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber;

@interface DTCelebrateModel : Marshal
{
    NSArray *_keyWords;
    NSArray *_fallImages;
    NSNumber *_type;
    NSArray *_quickLikes;
}

@property(copy, nonatomic) NSArray *quickLikes; // @synthesize quickLikes=_quickLikes;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(copy, nonatomic) NSArray *fallImages; // @synthesize fallImages=_fallImages;
@property(copy, nonatomic) NSArray *keyWords; // @synthesize keyWords=_keyWords;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

