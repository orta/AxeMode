/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTSourceControlRemoteRepository, DVTSourceControlWorkingCopy, DVTSourceControlWorkspaceBlueprint, IDESourceControlWorkingTree, NSAttributedString, NSMenuItem, NSString;

@interface IDESourceControlWorkingCopyMenuObject : NSObject
{
    DVTSourceControlWorkingCopy *_workingCopy;
    DVTSourceControlRemoteRepository *_remoteRepository;
    DVTSourceControlWorkspaceBlueprint *_blueprint;
    IDESourceControlWorkingTree *_workingTree;
    NSMenuItem *_menuItem;
    NSString *_workingCopyName;
    NSString *_currentBranchName;
    NSAttributedString *_menuItemAttributedTitle;
}

+ (id)_branchImage;
+ (id)_iconAsAttributedStringForImage:(id)arg1;
+ (id)_warningImage;
+ (id)_workingCopyConfigurationImage;
+ (id)_workingCopyImage;
+ (id)titleForWorkingCopyName:(id)arg1 branchName:(id)arg2 dimmingIcons:(BOOL)arg3 includeIconInTitles:(BOOL)arg4;
+ (id)titleForWorkingCopyName:(id)arg1 branchName:(id)arg2 dimmingIcons:(BOOL)arg3 warningIcon:(BOOL)arg4 includeIconInTitles:(BOOL)arg5;
- (void).cxx_destruct;
@property(readonly) DVTSourceControlWorkspaceBlueprint *blueprint; // @synthesize blueprint=_blueprint;
- (void)dealloc;
- (id)initWithMissingRepository:(id)arg1 fromBlueprint:(id)arg2;
- (id)initWithWorkingCopy:(id)arg1;
- (id)initWithWorkingTree:(id)arg1;
- (void)loadMenuItem;
- (void)menuDidClose;
@property(readonly) NSMenuItem *menuItem;
@property(readonly) DVTSourceControlRemoteRepository *remoteRepository; // @synthesize remoteRepository=_remoteRepository;
- (void)teardown;
@property(readonly) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy=_workingCopy;
@property(readonly) IDESourceControlWorkingTree *workingTree; // @synthesize workingTree=_workingTree;

@end
