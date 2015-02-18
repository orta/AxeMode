/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEDebugBarContentProvider.h>

@class DVTGradientImageButton, DVTObservingToken, IDEStepGradientImageButton;

@interface IDEProcessControlDebugBarContentProvider : IDEDebugBarContentProvider
{
    DVTGradientImageButton *_pauseResumeButton;
    DVTGradientImageButton *_breakpointStateButton;
    IDEStepGradientImageButton *_stepOverButton;
    IDEStepGradientImageButton *_stepInButton;
    DVTGradientImageButton *_stepOutButton;
    DVTObservingToken *_currentStackFrameObserverToken;
}

+ (id)assetBundle;
+ (id)iconImage_breakpointsEnable;
+ (id)iconImage_pause;
+ (id)iconImage_resume;
+ (id)iconImage_stepIn;
+ (id)iconImage_stepInInstruction;
+ (id)iconImage_stepInThread;
+ (id)iconImage_stepOut;
+ (id)iconImage_stepOver;
+ (id)iconImage_stepOverInstruction;
+ (id)iconImage_stepOverThread;
- (void).cxx_destruct;
- (BOOL)_controlKeyOnlyInCurrentEvent;
- (BOOL)_controlShiftKeyOnlyInCurrentEvent;
- (void)currentDebugSessionDidChange;
- (void)currentDebugSessionStateDidChange;
- (void)currentStackFrameDidChange:(id)arg1;
- (id)init;
- (void)pauseOrResume:(id)arg1;
- (void)stepIn:(id)arg1;
- (void)stepInByInstruction:(id)arg1;
- (void)stepInSuspendingOtherThreads:(id)arg1;
- (void)stepOut:(id)arg1;
- (void)stepOver:(id)arg1;
- (void)stepOverByInstruction:(id)arg1;
- (void)stepOverSuspendingOtherThreads:(id)arg1;
- (void)wasAttachedToDebugBar:(id)arg1;
- (void)willBeDetachedFromDebugBar:(id)arg1;
- (void)workspaceDidFinishLoading;

@end
