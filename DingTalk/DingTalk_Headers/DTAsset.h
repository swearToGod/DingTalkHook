//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSBlockOperation, NSString, PHCachingImageManager;
@protocol DTAssetDelegate;

@interface DTAsset : NSObject
{
    _Bool _selected;
    _Bool _blocked;
    _Bool _isGif;
    _Bool _hasRecognizeGif;
    int _index;
    id <DTAssetDelegate> _parent;
    id _asset;
    long long _liveSelectState;
    PHCachingImageManager *_imageManager;
    long long _originAssetSize;
    NSString *_durationText;
    NSBlockOperation *_propertyOperation;
    CDUnknownBlockType _checkIsGifBlock;
    struct CGSize _assetSize;
}

+ (id)formatDuration:(double)arg1;
+ (long long)imageOrientationFromAlAssetOrientation:(long long)arg1;
+ (void)loadAssetWithLocalIdentifier:(id)arg1 doneBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType checkIsGifBlock; // @synthesize checkIsGifBlock=_checkIsGifBlock;
@property(nonatomic) __weak NSBlockOperation *propertyOperation; // @synthesize propertyOperation=_propertyOperation;
@property(copy, nonatomic) NSString *durationText; // @synthesize durationText=_durationText;
@property(nonatomic) long long originAssetSize; // @synthesize originAssetSize=_originAssetSize;
@property(retain, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(nonatomic) _Bool hasRecognizeGif; // @synthesize hasRecognizeGif=_hasRecognizeGif;
@property(nonatomic) _Bool isGif; // @synthesize isGif=_isGif;
@property(nonatomic) long long liveSelectState; // @synthesize liveSelectState=_liveSelectState;
@property(nonatomic) int index; // @synthesize index=_index;
@property(nonatomic, getter=isBlocked) _Bool blocked; // @synthesize blocked=_blocked;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) id asset; // @synthesize asset=_asset;
@property(nonatomic) __weak id <DTAssetDelegate> parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (long long)orientation;
- (id)createTime;
- (id)imageData;
- (id)fileName;
- (id)fullScreenImageIgnoreType:(_Bool)arg1;
- (id)fullSceenImage;
- (id)thumnailImage:(struct CGSize)arg1;
- (void)originAssetSizeWithSync:(_Bool)arg1 doneBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *videoDurationText;
- (_Bool)isLivePhoto;
- (void)calculateVideoFileSizeInBytesWithAsset:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)videoAttributesWithSync:(_Bool)arg1 doneBlock:(CDUnknownBlockType)arg2;
- (void)videoURL:(CDUnknownBlockType)arg1;
- (double)videoDuration;
- (_Bool)isVideo;
@property(readonly, nonatomic) unsigned long long selectedIndex;
- (void)toggleSelection;
- (void)requestImageWithResultHandler:(CDUnknownBlockType)arg1;
- (_Bool)isAllowedCheckIsGif;
@property(readonly, nonatomic) struct CGSize assetSize; // @synthesize assetSize=_assetSize;
- (id)localIdentifier;
- (id)initWithAsset:(id)arg1;

@end

