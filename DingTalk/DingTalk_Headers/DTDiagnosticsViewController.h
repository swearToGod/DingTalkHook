//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@interface DTDiagnosticsViewController : DTTableViewController
{
}

- (void)cleanSearchIndexWithButtonIndex:(long long)arg1;
- (void)cleanSearchIndex;
- (void)revertToNewlyInstalled;
- (void)uploadFileContent:(id)arg1 message:(id)arg2;
- (id)infoForExecuteSQL:(id)arg1 inDatabase:(id)arg2;
- (id)diagnosticsInfoWithSQL:(id)arg1 header:(id)arg2 footer:(id)arg3;
- (void)diagnosticsSQL:(id)arg1;
- (void)diagnosticsConverstaionStatus;
- (long long)folderSizeAtPath:(id)arg1;
- (id)searchIndexDirectorySizeInfo;
- (id)mobileDBDirectorySizeInfo;
- (id)mainDBDirectorySizeInfo;
- (id)sqliteMasterRowInfo;
- (id)queryTableInfo;
- (void)dumpTableStructure;
- (id)contentOfDataCountForDatabase:(id)arg1;
- (void)dbDataCount;
- (id)fileSizeDictionaryAtPath:(id)arg1;
- (void)fileSizeOfDingTalk;
- (id)testFileWriteOperation;
- (void)manualUploadLog;
- (void)openNetInsepct;
- (void)tidyDatasource;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

