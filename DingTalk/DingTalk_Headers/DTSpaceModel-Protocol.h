//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTCModel-Protocol.h"

@class NSString;

@protocol DTSpaceModel <DTCModel>
@property(nonatomic) unsigned long long tag;
@property(nonatomic) _Bool isEncrypt;
@property(nonatomic) _Bool priority;
@property(nonatomic) long long appId;
@property(nonatomic) _Bool copyable;
@property(nonatomic) long long mid;
@property(copy, nonatomic) NSString *cname;
@property(copy, nonatomic) NSString *cid;
@property(nonatomic) long long oid;
@property(copy, nonatomic) NSString *fileType;
@property(nonatomic) unsigned long long fileSize;
@property(copy, nonatomic) NSString *fileName;
@property(copy, nonatomic) NSString *path;
@property(copy, nonatomic) NSString *itemId;
@property(copy, nonatomic) NSString *spaceId;
@end

