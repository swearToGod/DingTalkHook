//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTSearchDeptModel : Marshal
{
    NSNumber *_deptId;
    NSString *_deptName;
    NSNumber *_memberCount;
}

@property(retain, nonatomic) NSNumber *memberCount; // @synthesize memberCount=_memberCount;
@property(copy, nonatomic) NSString *deptName; // @synthesize deptName=_deptName;
@property(retain, nonatomic) NSNumber *deptId; // @synthesize deptId=_deptId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

