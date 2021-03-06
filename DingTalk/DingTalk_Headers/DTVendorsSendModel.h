//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTMessageSendModel.h"

@class DTAsset, NSDictionary, WKAttachmentCustom, WKBizMessage;
@protocol NSCopying><NSCoding;

@interface DTVendorsSendModel : DTMessageSendModel
{
    _Bool _isShare;
    long long _attachmentType;
    unsigned long long _fileType;
    WKBizMessage *_wkBizMessage;
    WKAttachmentCustom *_customAttachment;
    DTAsset *_videoAsset;
    NSDictionary<NSCopying><NSCoding> *_userInfo;
}

+ (id)buildWithSendInfo:(id)arg1 attachmentType:(long long)arg2;
+ (id)buildWithSendInfo:(id)arg1 conversation:(id)arg2 attachmentType:(long long)arg3 isEncrypt:(_Bool)arg4;
@property(retain, nonatomic) NSDictionary<NSCopying><NSCoding> *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) DTAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(nonatomic) _Bool isShare; // @synthesize isShare=_isShare;
@property(retain, nonatomic) WKAttachmentCustom *customAttachment; // @synthesize customAttachment=_customAttachment;
@property(retain, nonatomic) WKBizMessage *wkBizMessage; // @synthesize wkBizMessage=_wkBizMessage;
@property(nonatomic) unsigned long long fileType; // @synthesize fileType=_fileType;
@property(nonatomic) long long attachmentType; // @synthesize attachmentType=_attachmentType;
- (void).cxx_destruct;

@end

