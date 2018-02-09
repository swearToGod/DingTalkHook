//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTAbstractPart.h"

@class NSString;

@interface DTIMAPPart : DTAbstractPart
{
    NSString *_partID;
    unsigned long long _size;
    long long _encoding;
}

+ (id)attachmentWithIMAPBodyMultipart:(struct mailimap_body_type_mpart *)arg1 withPartID:(id)arg2;
+ (id)attachmentWithIMAPBody1Part:(struct mailimap_body_type_1part *)arg1 withPartID:(id)arg2;
+ (id)attachmentWithIMAPBody1PartText:(struct mailimap_body_type_text *)arg1 extension:(struct mailimap_body_ext_1part *)arg2;
+ (id)attachmentWithIMAPBody1PartMessage:(struct mailimap_body_type_msg *)arg1 extension:(struct mailimap_body_ext_1part *)arg2 partID:(id)arg3;
+ (id)attachmentWithIMAPBody1PartBasic:(struct mailimap_body_type_basic *)arg1 extension:(struct mailimap_body_ext_1part *)arg2;
+ (id)attachmentWithIMAPBodyInternal:(struct mailimap_body *)arg1 withPartID:(id)arg2;
+ (id)attachmentWithIMAPBody:(struct mailimap_body *)arg1;
@property(nonatomic) long long encoding; // @synthesize encoding=_encoding;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *partID; // @synthesize partID=_partID;
- (void).cxx_destruct;
- (void)importIMAPFields:(struct mailimap_body_fields *)arg1 extension:(struct mailimap_body_ext_1part *)arg2;

@end

