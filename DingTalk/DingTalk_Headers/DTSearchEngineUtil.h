//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTSearchEngineUtil : NSObject
{
}

+ (basic_string_7c0a1c0b)cStringWithNSString:(id)arg1;
+ (id)findObjectsOfClass:(Class)arg1 withColumn:(id)arg2 columnValues:(id)arg3 openDatabase:(id)arg4 tableName:(id)arg5;
+ (id)summaryAllOfText:(id)arg1 highlightKeyword:(id)arg2;
+ (id)summaryOfText:(id)arg1 withKeyword:(id)arg2 length:(long long)arg3 noNewLineAndTabChar:(_Bool)arg4 highlight:(_Bool)arg5;
+ (id)summaryOfText:(id)arg1 highlightKeyword:(id)arg2 maxWidth:(double)arg3 font:(id)arg4 noNewLineAndTabChar:(_Bool)arg5;
+ (id)summaryOfText:(id)arg1 highlightKeyword:(id)arg2 maxWidth:(double)arg3 font:(id)arg4;
+ (id)pinyinOfTextWithSystemLib:(id)arg1;
+ (id)pinyinOfText:(id)arg1;

@end

