//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface YapDatabaseQuery : NSObject
{
    NSString *queryString;
    NSArray *queryParameters;
}

+ (id)queryMatchingAll;
+ (id)queryWithFormat:(id)arg1;
@property(readonly, nonatomic) NSArray *queryParameters; // @synthesize queryParameters;
@property(readonly, nonatomic) NSString *queryString; // @synthesize queryString;
- (void).cxx_destruct;
- (id)initWithQueryString:(id)arg1 queryParameters:(id)arg2;

@end

