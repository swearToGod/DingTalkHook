//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLAPIBaseResponse.h"

@class NSString;

@interface BLAPIAddTagRespose : BLAPIBaseResponse
{
    NSString *_color;
    NSString *_tagId;
}

@property(copy, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

