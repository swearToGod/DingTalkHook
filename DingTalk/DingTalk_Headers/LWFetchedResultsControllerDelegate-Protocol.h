//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LWFetchedResultsController;

@protocol LWFetchedResultsControllerDelegate <NSObject>

@optional
- (void)controllerDidRollback:(LWFetchedResultsController *)arg1;
- (void)controllerDidChangeContent:(LWFetchedResultsController *)arg1;
- (void)controller:(LWFetchedResultsController *)arg1 didChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(long long)arg4 newIndex:(unsigned long long)arg5;
- (void)controllerWillChangeContent:(LWFetchedResultsController *)arg1;
@end

