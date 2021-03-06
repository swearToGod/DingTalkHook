//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSItemProviderReading-Protocol.h"

@class NSData, NSString;

@interface DTFileItemProvider : NSObject <NSItemProviderReading>
{
    NSData *_data;
    NSString *_typeIdentifier;
}

+ (id)fileTypeFromIdentifier:(id)arg1;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
@property(retain, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 typeIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

