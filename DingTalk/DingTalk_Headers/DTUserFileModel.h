//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface DTUserFileModel : NSObject
{
    _Bool _encrypt;
    _Bool _async;
    NSData *_data;
    NSString *_bizDirName;
    NSString *_fileName;
}

+ (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1;
+ (_Bool)setupSkipBackupAttributes;
+ (_Bool)isExistWithBizDirName:(id)arg1 fileName:(id)arg2;
+ (id)buildWithData:(id)arg1 encrypt:(_Bool)arg2 async:(_Bool)arg3 bizDirName:(id)arg4 fileName:(id)arg5;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *bizDirName; // @synthesize bizDirName=_bizDirName;
@property(nonatomic) _Bool async; // @synthesize async=_async;
@property(nonatomic) _Bool encrypt; // @synthesize encrypt=_encrypt;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (_Bool)delete;
- (id)readDataFromFile;
- (_Bool)save;
- (_Bool)isFileExsit;
- (id)filePath;
- (id)userFileDirPath;
- (id)fileNameMD5;

@end

