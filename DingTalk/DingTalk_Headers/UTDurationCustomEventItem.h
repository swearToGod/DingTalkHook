//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface UTDurationCustomEventItem : NSObject
{
    NSString *_eventId;
    NSMutableDictionary *_properties;
    long long _timestamp;
}

@property long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain) NSMutableDictionary *properties; // @synthesize properties=_properties;
@property(retain) NSString *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;

@end

