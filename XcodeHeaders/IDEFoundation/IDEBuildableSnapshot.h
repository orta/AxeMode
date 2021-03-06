/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTDispatchLock, IDEActivityLogSection, IDEBuildParameters, NSArray, NSMutableArray, NSString;

@interface IDEBuildableSnapshot : NSObject
{
    id <IDEBuildable> _buildable;
    NSString *_name;
    IDEBuildParameters *_buildParameters;
    IDEActivityLogSection *_activityLogSection;
    BOOL _cleanupDidRun;
    int _buildResult;
    DVTDispatchLock *_syncLock;
    NSMutableArray *_postprocessingBlocks;
    NSArray *_currentBuildTasks;
    NSMutableArray *_readyBuildCommands;
    NSMutableArray *_startedBuildTasks;
}

+ (id)_enqueue_semaphore;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_buildCommandDidRestoreCachedOutputs:(id)arg1;
- (void)_buildTaskDidStartForBuilder:(id)arg1 buildTask:(id)arg2;
- (void)_cleanupOnlyOnceForBuilder:(id)arg1;
- (void)_updateBuildOperationStatusForBuilder:(id)arg1 buildTask:(id)arg2;
@property(retain) IDEActivityLogSection *activityLogSection; // @synthesize activityLogSection=_activityLogSection;
- (void)addPostprocessingBlocks:(id)arg1;
- (void)buildDidFinishForBuilder:(id)arg1 buildPlan:(id)arg2;
- (void)buildForBuilderDidFinish:(id)arg1;
- (BOOL)buildForBuilderWillStart:(id)arg1;
@property(readonly) IDEBuildParameters *buildParameters; // @synthesize buildParameters=_buildParameters;
- (id)buildPlanForBuilder:(id)arg1 buildCommand:(int)arg2 buildOnlyTheseFiles:(id)arg3;
@property int buildResult; // @synthesize buildResult=_buildResult;
- (void)buildTask:(id)arg1 activityLogSectionDidChange:(id)arg2 forBuilder:(id)arg3;
- (void)buildTask:(id)arg1 addsPostprocessingBlocks:(id)arg2 forBuilder:(id)arg3;
- (void)buildTask:(id)arg1 didSetExitCode:(int)arg2 forBuilder:(id)arg3;
- (void)buildTask:(id)arg1 didStartExecutingForBuilder:(id)arg2;
- (void)buildTask:(id)arg1 updatesBuildStatusForBuilder:(id)arg2;
- (id)buildTaskForBuildCommand:(id)arg1 builder:(id)arg2;
@property(readonly) id <IDEBuildable> buildable; // @synthesize buildable=_buildable;
- (void)builderWasCancelled:(id)arg1;
- (void)cleanupForBuilder:(id)arg1;
@property(retain) NSArray *currentBuildTasks; // @synthesize currentBuildTasks=_currentBuildTasks;
- (id)description;
- (id)initFromBuildable:(id)arg1 withBuildParameters:(id)arg2;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)nextBuildCommandsToRunForBuilder:(id)arg1 buildCommand:(int)arg2 buildOnlyTheseFiles:(id)arg3;
- (id)nextBuildTasksToRunForBuilder:(id)arg1 buildCommand:(int)arg2 buildOnlyTheseFiles:(id)arg3;
- (int)performBuildForBuilder:(id)arg1 buildCommand:(int)arg2 buildOnlyTheseFiles:(id)arg3;
@property(retain) NSMutableArray *postprocessingBlocks; // @synthesize postprocessingBlocks=_postprocessingBlocks;
- (BOOL)prepareForBuildingForBuilder:(id)arg1;
- (BOOL)prepareForBuildingWithBuildPlan:(id)arg1;
@property(retain) NSMutableArray *readyBuildCommands; // @synthesize readyBuildCommands=_readyBuildCommands;
@property(retain) NSMutableArray *startedBuildTasks; // @synthesize startedBuildTasks=_startedBuildTasks;
@property(retain) DVTDispatchLock *syncLock; // @synthesize syncLock=_syncLock;

@end

