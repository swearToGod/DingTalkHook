//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTDynamicEmotionModel;

@interface DTSearchStickerViewModel : NSObject
{
    struct CGSize _contentSize;
    long long _emotionId;
    long long _packageId;
    long long _type;
    DTDynamicEmotionModel *_sticker;
}

+ (id)viewModelsWithStickers:(id)arg1;
@property(readonly, nonatomic) DTDynamicEmotionModel *sticker; // @synthesize sticker=_sticker;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long packageId; // @synthesize packageId=_packageId;
@property(nonatomic) long long emotionId; // @synthesize emotionId=_emotionId;
- (void).cxx_destruct;
- (id)thumbnailURL;
- (struct CGSize)contentSize;
- (void)commonInit;
- (id)initWithStickerModel:(id)arg1;
- (id)init;

@end

