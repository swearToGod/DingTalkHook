//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface JSONClassField : NSObject
{
    _Bool _isStructType;
    _Bool _isReadonly;
    _Bool _isIdType;
    Class _fieldTypeClass;
    NSString *_fieldName;
    NSString *_fieldType;
}

@property(nonatomic) _Bool isIdType; // @synthesize isIdType=_isIdType;
@property(nonatomic) _Bool isReadonly; // @synthesize isReadonly=_isReadonly;
@property(nonatomic) _Bool isStructType; // @synthesize isStructType=_isStructType;
@property(retain, nonatomic) NSString *fieldType; // @synthesize fieldType=_fieldType;
@property(retain, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (void).cxx_destruct;
@property(readonly, nonatomic) Class fieldTypeClass; // @synthesize fieldTypeClass=_fieldTypeClass;

@end

