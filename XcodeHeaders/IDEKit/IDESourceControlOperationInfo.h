/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IDESourceControlWorkingTree, IDEWorkspace, NSArray, NSOperationQueue, NSString;

@interface IDESourceControlOperationInfo : NSObject <DVTInvalidation>
{
    NSOperationQueue *_queue;
    IDESourceControlWorkingTree *_workingTree;
    IDEWorkspace *_workspace;
    NSArray *_itemsToOperateOn;
}

+ (id)containerFileTypesBlacklistedFromOutlineViewCompression;
+ (void)initialize;
- (void).cxx_destruct;
- (id)calculateContainersForItem:(id)arg1;
- (id)init;
@property(retain) NSArray *itemsToOperateOn; // @synthesize itemsToOperateOn=_itemsToOperateOn;
- (void)primitiveInvalidate;
- (id)processInfoWithProgressBlock:(id)arg1 isSingleOperation:(void)arg2 completionBlock:(BOOL)arg3;
@property(retain) IDESourceControlWorkingTree *workingTree; // @synthesize workingTree=_workingTree;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
