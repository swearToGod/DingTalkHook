//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTSectionViewItem : NSObject
{
    NSString *_title;
    NSString *_comment;
    CDUnknownBlockType _commentClickBlock;
}

+ (id)itemWithTitle:(id)arg1 comment:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType commentClickBlock; // @synthesize commentClickBlock=_commentClickBlock;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

