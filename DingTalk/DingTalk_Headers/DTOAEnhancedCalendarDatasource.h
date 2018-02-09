//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDateFormatter, NSString, YYThreadSafeDictionary;
@protocol DTOAEnhancedCalendarDatasource;

@interface DTOAEnhancedCalendarDatasource : NSObject
{
    NSString *_corpId;
    NSArray *_bizTypes;
    id <DTOAEnhancedCalendarDatasource> _delegate;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_dateMonthFormatter;
    YYThreadSafeDictionary *_mothItemInfos;
}

@property(retain, nonatomic) YYThreadSafeDictionary *mothItemInfos; // @synthesize mothItemInfos=_mothItemInfos;
@property(retain, nonatomic) NSDateFormatter *dateMonthFormatter; // @synthesize dateMonthFormatter=_dateMonthFormatter;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) __weak id <DTOAEnhancedCalendarDatasource> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *bizTypes; // @synthesize bizTypes=_bizTypes;
@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
- (void).cxx_destruct;
- (id)monthStorageKeyForDate:(id)arg1;
- (id)dailyStorageKeyForDate:(id)arg1;
- (id)monthItemInfoForDate:(id)arg1;
- (void)fetchMothItemInfoForData:(id)arg1;
- (void)refreshMonthItemInfoForDate:(id)arg1;
- (_Bool)isEmpty;
- (void)callBackDataChanged;
- (void)handleOACalendarResponse:(id)arg1 date:(id)arg2;
- (void)queryOACalendarInfo:(long long)arg1 endDate:(long long)arg2 date:(id)arg3;
- (void)queryOACalendarWithDate:(id)arg1 offset:(long long)arg2;
- (void)queryOACalendarWithDate:(id)arg1;
- (id)init;

@end

