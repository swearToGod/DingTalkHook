//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTRightsLevelDetailItem : NSObject
{
    NSString *_time;
    unsigned long long _rightsType;
    CDUnknownBlockType _clickBlock;
}

+ (id)convertToOrgLevelFormatWithOrgLevel:(long long)arg1;
+ (id)itemWithDict:(id)arg1;
+ (id)itemWithTime:(id)arg1 andType:(unsigned long long)arg2;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(nonatomic) unsigned long long rightsType; // @synthesize rightsType=_rightsType;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
- (void).cxx_destruct;

@end

