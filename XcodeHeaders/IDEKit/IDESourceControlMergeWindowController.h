/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDESourceControlReviewFilesWindowController.h>

#import "IDEWorkspaceDocumentProvider.h"

@class DVTBorderedView, DVTDiffDescriptor, DVTObservingToken, IDESourceControlMergeDataSource, IDEWorkspaceDocument, NSArray, NSButton, NSPopUpButton, NSSegmentedControl, NSString;

@interface IDESourceControlMergeWindowController : IDESourceControlReviewFilesWindowController <IDEWorkspaceDocumentProvider>
{
    NSButton *_mergeButton;
    DVTBorderedView *_reviewFilesView;
    NSButton *_deleteBranchCheckbox;
    NSSegmentedControl *_perDiffSegmentedControl;
    NSPopUpButton *_mergeStrategyPullDownMenu;
    NSArray *_operationInfo;
    IDESourceControlMergeDataSource *_workspaceDataSource;
    IDESourceControlMergeDataSource *_fileSystemDataSource;
    IDESourceControlMergeDataSource *_flatDataSource;
    BOOL _mergeInProgress;
    DVTObservingToken *_mergeDirectionObservationToken;
    DVTObservingToken *_descriptorResolvedObservationToken;
    DVTObservingToken *_conflictCountObservationToken;
}

- (void).cxx_destruct;
- (void)_merge;
- (void)_switchBackToOriginalBranch;
- (void)beginSheetForWindow:(id)arg1;
- (void)cancel:(id)arg1;
- (id)fileSystemDataSource;
- (id)flatDataSource;
- (void)handleErrors:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)itemsForWorkingTree:(id)arg1;
- (void)merge:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(copy) NSArray *operationInfo; // @synthesize operationInfo=_operationInfo;
- (id)operationInfoForWorkingTree:(id)arg1;
- (void)overwriteOriginalDocumentsWithMergeDocuments;
- (void)overwriteOriginalDocumentsWithMergeDocumentsForWorkingTree:(id)arg1;
- (void)selectMergeStrategyAllDiffs:(id)arg1;
- (void)selectMergeStrategyForSelectedDiff:(id)arg1;
@property(readonly) DVTDiffDescriptor *selectedMergeDescriptor;
- (void)setupConflictResolutionSupport;
- (void)setupMergeStrategyPullDown;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2;
- (BOOL)shouldEnableMergeButton;
- (unsigned long long)totalConflictCount;
- (void)updatePerDiffSegmentedControl;
- (void)windowDidLoad;
- (id)windowNibName;
- (id)workingTreeItemFilterPredicate;
- (id)workspaceDataSource;
@property(readonly) IDEWorkspaceDocument *workspaceDocument;
- (id)workspaceItemFilterPredicate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
