//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary;

@interface YYTextHighlight : NSObject <NSCoding, NSCopying>
{
    NSDictionary *_attributes;
    NSDictionary *_userInfo;
    CDUnknownBlockType _tapAction;
    CDUnknownBlockType _longPressAction;
}

+ (id)highlightWithBackgroundColor:(id)arg1;
+ (id)highlightWithAttributes:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType longPressAction; // @synthesize longPressAction=_longPressAction;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (void)setAttachment:(id)arg1;
- (void)setBorder:(id)arg1;
- (void)setBackgroundBorder:(id)arg1;
- (void)setStrikethrough:(id)arg1;
- (void)setUnderline:(id)arg1;
- (void)setInnerShadow:(id)arg1;
- (void)setShadow:(id)arg1;
- (void)setTextAttribute:(id)arg1 value:(id)arg2;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeWidth:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)_makeMutableAttributes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

