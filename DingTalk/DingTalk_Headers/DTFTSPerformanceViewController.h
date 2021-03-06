//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class NSArray, NSString, OpenDatabase, OpenMDHandler;

@interface DTFTSPerformanceViewController : DTTableViewController
{
    unsigned long long _number;
    NSArray *_datas;
    NSString *_searchText;
    NSString *_conversationId;
    OpenDatabase *_database;
    OpenMDHandler *_handler;
    NSString *_bizTableName;
    OpenDatabase *_ftsDatabase;
    NSString *_ftsTableName;
    NSString *_filePath;
    Class _clazz;
}

@property(retain, nonatomic) Class clazz; // @synthesize clazz=_clazz;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *ftsTableName; // @synthesize ftsTableName=_ftsTableName;
@property(retain, nonatomic) OpenDatabase *ftsDatabase; // @synthesize ftsDatabase=_ftsDatabase;
@property(copy, nonatomic) NSString *bizTableName; // @synthesize bizTableName=_bizTableName;
@property(retain, nonatomic) OpenMDHandler *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) OpenDatabase *database; // @synthesize database=_database;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(copy, nonatomic) NSArray *datas; // @synthesize datas=_datas;
@property(nonatomic) unsigned long long number; // @synthesize number=_number;
- (void).cxx_destruct;
- (void)asyncTestWriteByTransaction:(id)arg1;
- (void)asyncTestWriteBySQL:(id)arg1;
- (void)clearDatabase;
- (void)showResults:(id)arg1 item:(id)arg2;
- (void)showMessage:(id)arg1 finish:(_Bool)arg2;
- (void)showMessage:(id)arg1;
- (void)clearBizData;
- (id)readModelsWithCount:(unsigned long long)arg1;
- (unsigned long long)countOfBiz;
- (void)loadComponent;
- (void)loadDatasource;
- (void)loadConfigureOfChat;
- (void)viewDidLoad;

@end

