//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface DTPostModel : NSObject
{
    _Bool _atAll;
    NSString *_postAddr;
    NSString *_title;
    NSString *_message;
    NSString *_attchTitle;
    NSString *_attchURL;
    NSArray *_atMobiles;
    NSString *_content;
}

@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSArray *atMobiles; // @synthesize atMobiles=_atMobiles;
@property(nonatomic) _Bool atAll; // @synthesize atAll=_atAll;
@property(copy, nonatomic) NSString *attchURL; // @synthesize attchURL=_attchURL;
@property(copy, nonatomic) NSString *attchTitle; // @synthesize attchTitle=_attchTitle;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *postAddr; // @synthesize postAddr=_postAddr;
- (void).cxx_destruct;
- (id)constructContentForTypeText;

@end

