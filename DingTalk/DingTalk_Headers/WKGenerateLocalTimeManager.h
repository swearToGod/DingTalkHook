//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface WKGenerateLocalTimeManager : NSObject
{
    int _lock;
    NSMutableDictionary *_diffTimeCache;
    double _lastWriteTime;
}

+ (id)shareInstance;
@property(nonatomic) double lastWriteTime; // @synthesize lastWriteTime=_lastWriteTime;
@property(retain, nonatomic) NSMutableDictionary *diffTimeCache; // @synthesize diffTimeCache=_diffTimeCache;
- (void).cxx_destruct;
- (id)getFilePath;
- (double)getDiffTime;
- (_Bool)writeFile;
- (_Bool)saveDiffTime:(double)arg1;
- (_Bool)saveServerTime:(double)arg1;
- (double)localTime;
- (void)dealloc;
- (id)init;

@end

