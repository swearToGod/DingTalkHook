//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPIModel.h"

@class NSString;

@interface BLRecipientAPIModel : BLBaseAPIModel
{
    NSString *_address;
    NSString *_alias;
    unsigned long long _source;
}

@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end

