//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTMessageBubbleAttachmentProtocol-Protocol.h"
#import "DTMessageImageProgressDelegate-Protocol.h"
#import "UIDragInteractionDelegate-Protocol.h"

@class DTImageLoadingView, DTMessageBubbleAttachmentImageLoader, DTMessageBubbleImageItem, DTWebImageView, FLAnimatedImageView, NSString, UIActivityIndicatorView, UIImageView, UILabel;
@protocol DTMessageCollectionViewCellAttachmentProtocol;

@interface DTMessageBubbleAttachmentImageView : UIView <DTMessageImageProgressDelegate, UIDragInteractionDelegate, DTMessageBubbleAttachmentProtocol>
{
    _Bool _hadDrag;
    _Bool _showedSmallImage;
    _Bool _showedFinalImage;
    FLAnimatedImageView *_imageView;
    id <DTMessageCollectionViewCellAttachmentProtocol> _delegate;
    UIImageView *_edgeImageView;
    DTWebImageView *_sdwebImageView;
    DTImageLoadingView *_progressView;
    UIView *_maskProgressView;
    UIImageView *_gifIconImageView;
    UIActivityIndicatorView *_indicatorView;
    UILabel *_encryptDescLabel;
    DTMessageBubbleAttachmentImageLoader *_loader;
    DTMessageBubbleImageItem *_imageItem;
    NSString *_imageDownloadUrl;
}

+ (struct CGSize)calculateSizeWithItem:(id)arg1 constraintsSize:(struct CGSize)arg2;
@property(nonatomic) _Bool showedFinalImage; // @synthesize showedFinalImage=_showedFinalImage;
@property(nonatomic) _Bool showedSmallImage; // @synthesize showedSmallImage=_showedSmallImage;
@property(copy, nonatomic) NSString *imageDownloadUrl; // @synthesize imageDownloadUrl=_imageDownloadUrl;
@property(retain, nonatomic) DTMessageBubbleImageItem *imageItem; // @synthesize imageItem=_imageItem;
@property(retain, nonatomic) DTMessageBubbleAttachmentImageLoader *loader; // @synthesize loader=_loader;
@property(retain, nonatomic) UILabel *encryptDescLabel; // @synthesize encryptDescLabel=_encryptDescLabel;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIImageView *gifIconImageView; // @synthesize gifIconImageView=_gifIconImageView;
@property(retain, nonatomic) UIView *maskProgressView; // @synthesize maskProgressView=_maskProgressView;
@property(retain, nonatomic) DTImageLoadingView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) DTWebImageView *sdwebImageView; // @synthesize sdwebImageView=_sdwebImageView;
@property(retain, nonatomic) UIImageView *edgeImageView; // @synthesize edgeImageView=_edgeImageView;
@property(nonatomic) __weak id <DTMessageCollectionViewCellAttachmentProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FLAnimatedImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)dragItem;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (void)setMagicImage:(id)arg1 needStopAnimation:(_Bool)arg2;
- (void)setImage:(id)arg1 isSmall:(_Bool)arg2 gifIconHidden:(_Bool)arg3 incomming:(_Bool)arg4;
- (void)setImage:(id)arg1 gifIconHidden:(_Bool)arg2 incomming:(_Bool)arg3;
- (void)dismissProgress;
- (void)setGifIconHidden:(_Bool)arg1 incomming:(_Bool)arg2;
- (void)configWithItem:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)messageImageProgressChanged:(id)arg1 finished:(_Bool)arg2 progress:(double)arg3;
- (void)checkProgressInCache;
- (void)prepareForReUsed:(id)arg1;
- (void)removeEdgeImageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureImageView;
- (void)dealloc;
- (_Bool)fixStopAnimatedImageWhenHidden;

// Remaining properties
@property(nonatomic) __weak id <DTMessageCollectionViewCellAttachmentProtocol> attachmentDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

