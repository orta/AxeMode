/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "IDEContainerDelegate.h"

@protocol IDEWorkspaceDelegate <IDEContainerDelegate>
- (void)_workspace:(id)arg1 failedToResolveContainerForProjectFile:(id)arg2;

@optional
- (void)_workspace:(id)arg1 didChangeFinishedLoadingTo:(BOOL)arg2;
- (void)_workspace:(id)arg1 didChangeSimpleFilesFocusedTo:(BOOL)arg2;
@end

