//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DDLog : NSObject
{
}

+ (void)lt_flush;
+ (void)lt_log:(id)arg1;
+ (id)lt_allLoggers;
+ (void)lt_removeAllLoggers;
+ (void)lt_removeLogger:(id)arg1;
+ (void)lt_addLogger:(id)arg1 logLevel:(int)arg2;
+ (void)setLogLevel:(int)arg1 forClassWithName:(id)arg2;
+ (void)setLogLevel:(int)arg1 forClass:(Class)arg2;
+ (int)logLevelForClassWithName:(id)arg1;
+ (int)logLevelForClass:(Class)arg1;
+ (id)registeredClassNames;
+ (id)registeredClasses;
+ (_Bool)isRegisteredClass:(Class)arg1;
+ (void)flushLog;
+ (void)log:(_Bool)arg1 message:(id)arg2;
+ (void)log:(_Bool)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(int)arg7 tag:(id)arg8 format:(id)arg9 args:(char *)arg10;
+ (void)log:(_Bool)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(int)arg7 tag:(id)arg8 format:(id)arg9;
+ (void)queueLogMessage:(id)arg1 asynchronously:(_Bool)arg2;
+ (id)allLoggers;
+ (void)removeAllLoggers;
+ (void)removeLogger:(id)arg1;
+ (void)addLogger:(id)arg1 withLogLevel:(int)arg2;
+ (void)addLogger:(id)arg1;
+ (void)applicationWillTerminate:(id)arg1;
+ (struct dispatch_queue_s *)loggingQueue;
+ (void)initialize;

@end

