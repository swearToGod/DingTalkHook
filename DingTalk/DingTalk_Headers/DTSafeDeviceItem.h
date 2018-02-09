//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIFont;

@interface DTSafeDeviceItem : NSObject
{
    _Bool _isSwitchOn;
    _Bool _canEdit;
    NSString *_name;
    NSString *_detail;
    NSString *_deviceId;
    double _cellHeight;
    long long _style;
    CDUnknownBlockType _selectBlock;
    UIFont *_textFont;
}

+ (id)itemWithDeviceModel:(id)arg1;
+ (id)itemWithName:(id)arg1 detail:(id)arg2 deviceId:(id)arg3 canEdit:(_Bool)arg4 style:(long long)arg5 selectBlock:(CDUnknownBlockType)arg6;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(nonatomic) _Bool canEdit; // @synthesize canEdit=_canEdit;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool isSwitchOn; // @synthesize isSwitchOn=_isSwitchOn;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

