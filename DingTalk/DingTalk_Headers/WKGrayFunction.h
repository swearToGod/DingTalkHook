//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface WKGrayFunction : NSObject
{
    struct _opaque_pthread_mutex_t grayMutexLock;
    NSMutableDictionary *_grayFunctionMap;
    NSMutableDictionary *_grayFunctionBlockMap;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *grayFunctionBlockMap; // @synthesize grayFunctionBlockMap=_grayFunctionBlockMap;
@property(retain, nonatomic) NSMutableDictionary *grayFunctionMap; // @synthesize grayFunctionMap=_grayFunctionMap;
- (void).cxx_destruct;
- (id)valueObjForGrayKey:(id)arg1;
- (long long)integerValueForGrayKey:(id)arg1 defaultValue:(long long)arg2;
- (_Bool)boolValueForGrayKey:(id)arg1 defaultValue:(_Bool)arg2;
- (void)setValueBlock:(CDUnknownBlockType)arg1 forGrayKey:(id)arg2;
- (void)setIntegerValue:(long long)arg1 forGrayKey:(id)arg2;
- (void)setBoolValue:(_Bool)arg1 forGrayKey:(id)arg2;
- (void)dealloc;
- (id)init;

@end

