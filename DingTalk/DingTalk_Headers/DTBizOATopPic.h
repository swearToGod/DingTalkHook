//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface DTBizOATopPic : NSObject <NSCoding, NSCopying>
{
    NSString *_pic;
    NSString *_picLink;
    NSString *_picText;
}

@property(copy, nonatomic) NSString *picText; // @synthesize picText=_picText;
@property(copy, nonatomic) NSString *picLink; // @synthesize picLink=_picLink;
@property(copy, nonatomic) NSString *pic; // @synthesize pic=_pic;
- (void).cxx_destruct;
- (_Bool)isEqualToWidget:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

