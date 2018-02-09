//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

@class NSString, UIImage;
@protocol WXImageOperationProtocol;

@interface WXImageComponent : WXComponent
{
    _Bool _imageLoadEvent;
    _Bool _imageDownloadFinish;
    NSString *_imageSrc;
    NSString *_placeholdSrc;
    double _blurRadius;
    long long _resizeMode;
    long long _imageQuality;
    long long _imageSharp;
    UIImage *_image;
    id <WXImageOperationProtocol> _imageOperation;
    id <WXImageOperationProtocol> _placeholderOperation;
}

@property(nonatomic) _Bool imageDownloadFinish; // @synthesize imageDownloadFinish=_imageDownloadFinish;
@property(nonatomic) _Bool imageLoadEvent; // @synthesize imageLoadEvent=_imageLoadEvent;
@property(retain, nonatomic) id <WXImageOperationProtocol> placeholderOperation; // @synthesize placeholderOperation=_placeholderOperation;
@property(retain, nonatomic) id <WXImageOperationProtocol> imageOperation; // @synthesize imageOperation=_imageOperation;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long imageSharp; // @synthesize imageSharp=_imageSharp;
@property(nonatomic) long long imageQuality; // @synthesize imageQuality=_imageQuality;
@property(nonatomic) long long resizeMode; // @synthesize resizeMode=_resizeMode;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(retain, nonatomic) NSString *placeholdSrc; // @synthesize placeholdSrc=_placeholdSrc;
@property(retain, nonatomic) NSString *imageSrc; // @synthesize imageSrc=_imageSrc;
- (void).cxx_destruct;
- (void)_clipsToBounds;
- (id)imageLoader;
- (void)cancelImage;
- (void)readyToRender;
- (void)updateContentImageWithFailedBlock:(CDUnknownBlockType)arg1;
- (void)updatePlaceHolderWithFailedBlock:(CDUnknownBlockType)arg1;
- (void)updateImage;
- (void)_frameDidCalculated:(_Bool)arg1;
- (void)viewWillUnload;
- (id)drawRect:(struct CGRect)arg1;
- (_Bool)needsDrawRect;
- (void)viewDidLoad;
- (void)updateAttributes:(id)arg1;
- (void)updateStyles:(id)arg1;
- (void)removeEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (id)loadView;
- (void)configFilter:(id)arg1;
- (void)configPlaceHolder:(id)arg1;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

@end

