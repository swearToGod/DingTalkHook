//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YapDatabaseReadTransaction.h"

@interface YapDatabaseReadWriteTransaction : YapDatabaseReadTransaction
{
    _Bool rollback;
    id customObjectForNotification;
}

@property(retain, nonatomic) id yapDatabaseModifiedNotificationCustomObject; // @synthesize yapDatabaseModifiedNotificationCustomObject=customObjectForNotification;
- (void).cxx_destruct;
- (void)removeAllValuesForExtension:(id)arg1;
- (void)removeValueForKey:(id)arg1 extension:(id)arg2;
- (void)setDataValue:(id)arg1 forKey:(id)arg2 extension:(id)arg3;
- (void)setStringValue:(id)arg1 forKey:(id)arg2 extension:(id)arg3;
- (void)setDoubleValue:(double)arg1 forKey:(id)arg2 extension:(id)arg3;
- (void)setIntValue:(int)arg1 forKey:(id)arg2 extension:(id)arg3;
- (void)setBoolValue:(_Bool)arg1 forKey:(id)arg2 extension:(id)arg3;
- (void)removeRegisteredExtensionTransactionWithName:(id)arg1;
- (void)addRegisteredExtensionTransaction:(id)arg1 withName:(id)arg2;
- (void)removeAllObjectsInAllCollections;
- (void)removeAllObjectsInCollection:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1 inCollection:(id)arg2;
- (void)removeObjectForKey:(id)arg1 inCollection:(id)arg2;
- (void)removeObjectForKey:(id)arg1 inCollection:(id)arg2 withRowid:(long long)arg3;
- (void)touchMetadataForKey:(id)arg1 inCollection:(id)arg2;
- (void)touchObjectForKey:(id)arg1 inCollection:(id)arg2;
- (void)replaceMetadata:(id)arg1 forKey:(id)arg2 inCollection:(id)arg3 withRowid:(long long)arg4 serializedMetadata:(id)arg5;
- (void)replaceMetadata:(id)arg1 forKey:(id)arg2 inCollection:(id)arg3 withSerializedMetadata:(id)arg4;
- (void)replaceMetadata:(id)arg1 forKey:(id)arg2 inCollection:(id)arg3;
- (void)replaceObject:(id)arg1 forKey:(id)arg2 inCollection:(id)arg3 withRowid:(long long)arg4 serializedObject:(id)arg5;
- (void)replaceObject:(id)arg1 forKey:(id)arg2 inCollection:(id)arg3 withSerializedObject:(id)arg4;
- (void)replaceObject:(id)arg1 forKey:(id)arg2 inCollection:(id)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 inCollection:(id)arg3 withMetadata:(id)arg4 serializedObject:(id)arg5 serializedMetadata:(id)arg6;
- (void)setObject:(id)arg1 forKey:(id)arg2 inCollection:(id)arg3 withMetadata:(id)arg4;
- (void)setObject:(id)arg1 forKey:(id)arg2 inCollection:(id)arg3;
- (void)rollback;

@end

