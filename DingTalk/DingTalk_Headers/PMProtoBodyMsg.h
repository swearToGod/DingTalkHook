//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface PMProtoBodyMsg : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *from; // @dynamic from;
@property(nonatomic) _Bool sendFullTags; // @dynamic sendFullTags;
@property(retain, nonatomic) NSMutableArray *sendTagsArray; // @dynamic sendTagsArray;
@property(readonly, nonatomic) unsigned long long sendTagsArray_Count; // @dynamic sendTagsArray_Count;
@property(nonatomic) long long timestamp; // @dynamic timestamp;
@property(copy, nonatomic) NSString *to; // @dynamic to;

@end

