//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBSwizzleHelper : NSObject
{
}

+ (_Bool)isMainBundleClass:(Class)arg1;
+ (void)addOverwrite:(Class)arg1 newSelector:(SEL)arg2 superSelector:(SEL)arg3;
+ (struct objc_method *)superMethod:(Class)arg1 selector:(SEL)arg2;
+ (_Bool)isNSObjectInstanceMethodOverwrite:(Class)arg1 selector:(SEL)arg2;
+ (_Bool)isClassMethodOverwrite:(Class)arg1 selector:(SEL)arg2;
+ (_Bool)isSelectorReturnType:(SEL)arg1;
+ (char *)returnTypeWithClass:(Class)arg1 isClass:(_Bool)arg2 selector:(SEL)arg3;
+ (void)swizzleClass:(Class)arg1 isClass:(_Bool)arg2 origSel:(SEL)arg3 newImp:(CDUnknownFunctionPointerType)arg4 origImp:(CDUnknownFunctionPointerType *)arg5;
+ (void)swizzleClass:(Class)arg1 isClass:(_Bool)arg2 origSel:(SEL)arg3 newImp:(CDUnknownFunctionPointerType)arg4;
+ (void)swizzleClass:(Class)arg1 isClass:(_Bool)arg2 origSel:(SEL)arg3 newSel:(SEL)arg4;

@end

