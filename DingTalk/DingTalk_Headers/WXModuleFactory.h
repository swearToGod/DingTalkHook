//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface WXModuleFactory : NSObject
{
    NSMutableDictionary *_moduleMap;
    NSLock *_moduleLock;
}

+ (id)moduleMethodMapsWithName:(id)arg1;
+ (id)registerModule:(id)arg1 withClass:(Class)arg2;
+ (SEL)selectorWithModuleName:(id)arg1 methodName:(id)arg2 isSync:(_Bool *)arg3;
+ (Class)classWithModuleName:(id)arg1;
+ (id)moduleConfigs;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)_sharedInstance;
@property(retain, nonatomic) NSLock *moduleLock; // @synthesize moduleLock=_moduleLock;
@property(retain, nonatomic) NSMutableDictionary *moduleMap; // @synthesize moduleMap=_moduleMap;
- (void).cxx_destruct;
- (id)_getModuleConfigs;
- (id)_defaultModuleMethod;
- (id)_moduleMethodMapsWithName:(id)arg1;
- (id)_registerModule:(id)arg1 withClass:(Class)arg2;
- (SEL)_selectorWithModuleName:(id)arg1 methodName:(id)arg2 isSync:(_Bool *)arg3;
- (Class)_classWithModuleName:(id)arg1;
- (id)init;

@end

