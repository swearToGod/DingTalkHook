//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface YapDatabaseSecondaryIndexColumn : NSObject
{
    NSString *name;
    long long type;
}

@property(readonly, nonatomic) long long type; // @synthesize type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 type:(long long)arg2;

@end

