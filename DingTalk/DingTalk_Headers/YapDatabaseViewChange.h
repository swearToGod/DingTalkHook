//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface YapDatabaseViewChange : NSObject
{
}

+ (void)getSectionChanges:(id *)arg1 rowChanges:(id *)arg2 withOriginalMappings:(id)arg3 finalMappings:(id)arg4 fromChanges:(id)arg5;
+ (void)postProcessAndFilterSectionChanges:(id)arg1 withOriginalMappings:(id)arg2 finalMappings:(id)arg3;
+ (void)postProcessAndFilterRowChanges:(id)arg1 withOriginalMappings:(id)arg2 finalMappings:(id)arg3;
+ (void)consolidateSectionChanges:(id)arg1;
+ (void)consolidateRowChanges:(id)arg1;
+ (void)processRowChanges:(id)arg1 withOriginalMappings:(id)arg2 finalMappings:(id)arg3;
+ (void)preProcessChanges:(id)arg1 withOriginalMappings:(id)arg2 finalMappings:(id)arg3 andGetSectionChanges:(id *)arg4 rowChanges:(id *)arg5;

@end

