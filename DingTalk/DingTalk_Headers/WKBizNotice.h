//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSNumber, NSString;

@interface WKBizNotice : NSObject
{
    NSNumber *_type;
    NSData *_content;
    NSString *_messageId;
}

+ (id)convertFromIDLModels:(id)arg1;
+ (id)convertFromIDLModel:(id)arg1;
+ (id)covert2BizNotices:(id)arg1;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(retain, nonatomic) NSData *content; // @synthesize content=_content;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

