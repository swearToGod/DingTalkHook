//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTBizMessage, NSString;

@interface DTMessageBubbleLocationItem : NSObject
{
    NSString *_locationString;
    DTBizMessage *_message;
}

+ (id)buildWithMessage:(id)arg1;
@property(retain, nonatomic) DTBizMessage *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
- (void).cxx_destruct;

@end

