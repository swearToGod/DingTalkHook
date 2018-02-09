//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PMMessage : NSObject
{
    NSString *_messageId;
    long long _subType;
    NSString *_topic;
    long long _source;
}

@property(nonatomic) long long source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) long long subType; // @synthesize subType=_subType;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (void)fromDictionary:(id)arg1;
- (id)toDictionary;
- (id)toPMBaseMessage;
- (void)fromPMBaseMessage:(id)arg1;

@end

