//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MYJsonDecoder : NSObject
{
}

+ (id)decoder;
- (void)setDateValue:(id)arg1 toProperty:(id)arg2 ofObject:(id)arg3;
- (void)setStringValue:(id)arg1 toProperty:(id)arg2 ofObject:(id)arg3;
- (void)setNumberValue:(id)arg1 toProperty:(id)arg2 ofObject:(id)arg3 convertSelector:(SEL)arg4;
- (void)setProperty:(struct objc_property *)arg1 ofObject:(id)arg2 lookupDictionary:(id)arg3;
- (void)setupObject:(id)arg1 ofClass:(Class)arg2 lookupDictionary:(id)arg3;
- (id)decodeObjectOfClass:(Class)arg1 fromJSONObject:(id)arg2;
- (id)decodeDictionaryWithElementClass:(Class)arg1 fromJSONObject:(id)arg2;
- (id)decodeArrayWithElementClass:(Class)arg1 fromJSONObject:(id)arg2;
- (id)decodeWithClass:(Class)arg1 elementClass:(Class)arg2 fromJSONObject:(id)arg3;
- (id)decodeWithClassName:(id)arg1 elementClass:(Class)arg2 fromJSONObject:(id)arg3;
- (id)decodeWithClass:(Class)arg1 elementClass:(Class)arg2 fromJSONString:(id)arg3;

@end

