//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface YYKeychain : NSObject
{
}

+ (id)errorWithCode:(int)arg1;
+ (id)selectItems:(id)arg1;
+ (id)selectItems:(id)arg1 error:(id *)arg2;
+ (id)selectOneItem:(id)arg1;
+ (id)selectOneItem:(id)arg1 error:(id *)arg2;
+ (_Bool)deleteItem:(id)arg1;
+ (_Bool)deleteItem:(id)arg1 error:(id *)arg2;
+ (_Bool)updateItem:(id)arg1;
+ (_Bool)updateItem:(id)arg1 error:(id *)arg2;
+ (_Bool)insertItem:(id)arg1;
+ (_Bool)insertItem:(id)arg1 error:(id *)arg2;
+ (_Bool)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3;
+ (_Bool)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3 error:(id *)arg4;
+ (_Bool)deletePasswordForService:(id)arg1 account:(id)arg2;
+ (_Bool)deletePasswordForService:(id)arg1 account:(id)arg2 error:(id *)arg3;
+ (id)getPasswordForService:(id)arg1 account:(id)arg2;
+ (id)getPasswordForService:(id)arg1 account:(id)arg2 error:(id *)arg3;

@end

