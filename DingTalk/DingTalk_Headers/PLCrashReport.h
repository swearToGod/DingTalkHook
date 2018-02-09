//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, PLCrashReportApplicationInfo, PLCrashReportExceptionInfo, PLCrashReportMachExceptionInfo, PLCrashReportMachineInfo, PLCrashReportProcessInfo, PLCrashReportSignalInfo, PLCrashReportSystemInfo;

@interface PLCrashReport : NSObject
{
    struct _PLCrashReportDecoder *_decoder;
    PLCrashReportSystemInfo *_systemInfo;
    PLCrashReportMachineInfo *_machineInfo;
    PLCrashReportApplicationInfo *_applicationInfo;
    PLCrashReportProcessInfo *_processInfo;
    PLCrashReportSignalInfo *_signalInfo;
    PLCrashReportMachExceptionInfo *_machExceptionInfo;
    NSArray *_threads;
    NSArray *_images;
    PLCrashReportExceptionInfo *_exceptionInfo;
    struct __CFUUID *_uuid;
}

@property(nonatomic) struct __CFUUID *uuidRef; // @synthesize uuidRef=_uuid;
@property(retain, nonatomic) PLCrashReportExceptionInfo *exceptionInfo; // @synthesize exceptionInfo=_exceptionInfo;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(retain, nonatomic) PLCrashReportMachExceptionInfo *machExceptionInfo; // @synthesize machExceptionInfo=_machExceptionInfo;
@property(retain, nonatomic) PLCrashReportSignalInfo *signalInfo; // @synthesize signalInfo=_signalInfo;
@property(retain, nonatomic) PLCrashReportProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(retain, nonatomic) PLCrashReportApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
@property(retain, nonatomic) PLCrashReportMachineInfo *machineInfo; // @synthesize machineInfo=_machineInfo;
@property(retain, nonatomic) PLCrashReportSystemInfo *systemInfo; // @synthesize systemInfo=_systemInfo;
@property(readonly, nonatomic) _Bool hasExceptionInfo;
@property(readonly, nonatomic) _Bool hasProcessInfo;
@property(readonly, nonatomic) _Bool hasMachineInfo;
- (id)imageForAddress:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithError:(id *)arg1;
- (id)extractMachExceptionInfo:(struct _Plcrash__CrashReport__Signal__MachException *)arg1 error:(id *)arg2;
- (id)extractSignalInfo:(struct _Plcrash__CrashReport__Signal *)arg1 error:(id *)arg2;
- (id)extractExceptionInfo:(struct _Plcrash__CrashReport__Exception *)arg1 error:(id *)arg2;
- (id)extractImageInfo:(struct _Plcrash__CrashReport *)arg1 error:(id *)arg2;
- (id)extractThreadInfo:(struct _Plcrash__CrashReport *)arg1 error:(id *)arg2;
- (id)extractStackFrameInfo:(struct _Plcrash__CrashReport__Thread__StackFrame *)arg1 error:(id *)arg2;
- (id)extractSymbolInfo:(struct _Plcrash__CrashReport__Symbol *)arg1 error:(id *)arg2;
- (id)extractProcessInfo:(struct _Plcrash__CrashReport__ProcessInfo *)arg1 error:(id *)arg2;
- (id)extractApplicationInfo:(struct _Plcrash__CrashReport__ApplicationInfo *)arg1 error:(id *)arg2;
- (id)extractMachineInfo:(struct _Plcrash__CrashReport__MachineInfo *)arg1 error:(id *)arg2;
- (id)synthesizeProcessorInfoFromArchitecture:(int)arg1 error:(id *)arg2;
- (id)extractProcessorInfo:(struct _Plcrash__CrashReport__Processor *)arg1 error:(id *)arg2;
- (id)extractSystemInfo:(struct _Plcrash__CrashReport__SystemInfo *)arg1 processorInfo:(id)arg2 error:(id *)arg3;
- (struct _Plcrash__CrashReport *)decodeCrashData:(id)arg1 error:(id *)arg2;

@end

