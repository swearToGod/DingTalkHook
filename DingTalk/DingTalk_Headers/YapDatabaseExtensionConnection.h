//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface YapDatabaseExtensionConnection : NSObject
{
}

- (id)extension;
- (void)processChangeset:(id)arg1;
- (void)getInternalChangeset:(id *)arg1 externalChangeset:(id *)arg2 hasDiskChanges:(_Bool *)arg3;
- (void)_flushMemoryWithFlags:(unsigned long long)arg1;
- (id)newReadWriteTransaction:(id)arg1;
- (id)newReadTransaction:(id)arg1;

@end

