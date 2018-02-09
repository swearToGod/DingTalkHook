//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSDate, NSNumber, NSString;

@interface DTTryOutSuiteModel : Marshal
{
    _Bool _isOrganizer;
    _Bool _haveAuthed;
    _Bool _haveTryOuted;
    NSNumber *_id_;
    NSDate *_gmtCreate;
    NSDate *_gmtModified;
    NSNumber *_orgId;
    NSString *_name;
    NSString *_suiteDescription;
    NSString *_logo;
    NSArray *_descripScopes;
    NSArray *_microAppList;
    NSString *_detailDescription;
    NSString *_supplierName;
    NSString *_productCode;
    NSString *_extension;
}

@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(nonatomic) _Bool haveTryOuted; // @synthesize haveTryOuted=_haveTryOuted;
@property(copy, nonatomic) NSString *productCode; // @synthesize productCode=_productCode;
@property(copy, nonatomic) NSString *supplierName; // @synthesize supplierName=_supplierName;
@property(nonatomic) _Bool haveAuthed; // @synthesize haveAuthed=_haveAuthed;
@property(nonatomic) _Bool isOrganizer; // @synthesize isOrganizer=_isOrganizer;
@property(copy, nonatomic) NSString *detailDescription; // @synthesize detailDescription=_detailDescription;
@property(copy, nonatomic) NSArray *microAppList; // @synthesize microAppList=_microAppList;
@property(copy, nonatomic) NSArray *descripScopes; // @synthesize descripScopes=_descripScopes;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *suiteDescription; // @synthesize suiteDescription=_suiteDescription;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *orgId; // @synthesize orgId=_orgId;
@property(retain, nonatomic) NSDate *gmtModified; // @synthesize gmtModified=_gmtModified;
@property(retain, nonatomic) NSDate *gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(retain, nonatomic) NSNumber *id_; // @synthesize id_=_id_;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

