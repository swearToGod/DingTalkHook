//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LACommonUtils : NSObject
{
}

+ (_Bool)isFullColor:(id)arg1;
+ (_Bool)isClearColor:(id)arg1;
+ (double)containerHSVValueWithColor:(id)arg1;
+ (void)httpDownloadJSON:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
+ (id)extractMIMETypeFromHeader:(id)arg1;
+ (_Bool)shouldLogForJSAPI:(id)arg1;
+ (_Bool)isAliPageURL:(id)arg1;
+ (_Bool)isAliBundleURL:(id)arg1;
+ (_Bool)isVersion:(id)arg1 biggerThanVersion:(id)arg2;
+ (unsigned long long)la_systemMajorVersion;
+ (_Bool)boolValue:(id)arg1 forKey:(id)arg2 defaultValue:(_Bool)arg3;
+ (id)noNilString:(id)arg1;

@end

