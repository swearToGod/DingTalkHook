//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface UTShareToWeChatContent : NSObject
{
    _Bool _isAliUrl;
    NSArray *_images;
    NSString *_title;
    NSString *_linkUrl;
    NSString *_wxdescription;
}

@property(nonatomic) _Bool isAliUrl; // @synthesize isAliUrl=_isAliUrl;
@property(retain, nonatomic) NSString *wxdescription; // @synthesize wxdescription=_wxdescription;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;

@end

