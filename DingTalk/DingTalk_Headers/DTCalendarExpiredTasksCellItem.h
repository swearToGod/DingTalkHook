//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCellItem.h"

@class NSString;

@interface DTCalendarExpiredTasksCellItem : DTBaseCellItem
{
    unsigned long long _expiredDays;
    NSString *_title;
    NSString *_subtitle;
    NSString *_url;
}

+ (id)cellModelFromCalendarInstance:(id)arg1;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long expiredDays; // @synthesize expiredDays=_expiredDays;
- (void).cxx_destruct;
- (id)cellForItem;
- (double)heightForCell;
- (id)reuseIdentifier;

@end

