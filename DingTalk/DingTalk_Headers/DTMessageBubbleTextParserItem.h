//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIView;

@interface DTMessageBubbleTextParserItem : NSObject
{
    _Bool _needParseLink;
    NSString *_text;
    UIView *_label;
}

@property(nonatomic) __weak UIView *label; // @synthesize label=_label;
@property(nonatomic) _Bool needParseLink; // @synthesize needParseLink=_needParseLink;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

