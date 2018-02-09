//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface DTAT : NSObject
{
    _Bool _isUpdating;
    _Bool _inputAt;
    _Bool _inputAtToChangeText;
    NSString *_lastInputViewText;
    NSString *_cId;
    NSMutableDictionary *_atDic;
    NSMutableDictionary *_atRangeDic;
    struct _NSRange _keyboardLastSelectRange;
}

@property(retain, nonatomic) NSMutableDictionary *atRangeDic; // @synthesize atRangeDic=_atRangeDic;
@property(retain, nonatomic) NSMutableDictionary *atDic; // @synthesize atDic=_atDic;
@property(retain, nonatomic) NSString *cId; // @synthesize cId=_cId;
@property(copy, nonatomic) NSString *lastInputViewText; // @synthesize lastInputViewText=_lastInputViewText;
@property(nonatomic) _Bool inputAtToChangeText; // @synthesize inputAtToChangeText=_inputAtToChangeText;
@property(nonatomic) _Bool inputAt; // @synthesize inputAt=_inputAt;
@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(nonatomic) struct _NSRange keyboardLastSelectRange; // @synthesize keyboardLastSelectRange=_keyboardLastSelectRange;
- (void).cxx_destruct;
- (void)clearAtDic:(_Bool)arg1;
- (_Bool)containsWithUid:(unsigned long long)arg1;
- (void)saveAtWithUid:(unsigned long long)arg1 nick:(id)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)selectRangeDidChanged:(struct _NSRange)arg1;
- (void)removeDeletedRange:(struct _NSRange)arg1;
- (id)exchangeNickToUidText:(id)arg1 cId:(id)arg2;
- (void)updateRangesWithStartSelectRange:(long long)arg1 endLocation:(long long)arg2 growText:(id)arg3;
- (_Bool)matchRange:(struct _NSRange)arg1;
- (id)containInRange:(struct _NSRange)arg1;
- (id)init;
- (id)initWithCId:(id)arg1;

@end

