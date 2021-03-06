/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "DVTInvalidation.h"
#import "IDEComparisonEditorDataSource.h"
#import "IDELocalizationController.h"
#import "IDEReviewFilesDataSource.h"

@class DVTBorderedView, DVTObservingToken, DVTStackBacktrace, IDELocalizationImportContext, IDELocalizationImporter, IDENavigableItemCoordinator, IDENavigatorDataCell, IDEReviewFilesViewController, NSArray, NSMutableDictionary, NSMutableSet, NSString;

@interface IDELocalizationImportController : NSWindowController <IDEComparisonEditorDataSource, IDEReviewFilesDataSource, IDELocalizationController, DVTInvalidation>
{
    DVTBorderedView *layoutView;
    IDENavigableItemCoordinator *_issueNavItemCoordinator;
    IDENavigableItemCoordinator *_fileNavItemCoordinator;
    IDEReviewFilesViewController *_reviewFilesViewController;
    DVTObservingToken *_comparisonEditorObservingToken;
    IDENavigatorDataCell *_fileReferenceDataCell;
    IDENavigatorDataCell *_groupDataCell;
    IDENavigatorDataCell *_issueDataCell;
    NSMutableSet *_bindingTokens;
    NSMutableDictionary *_filesToTempDocuments;
    BOOL _complete;
    IDELocalizationImportContext *_context;
    NSArray *_workspaceNavigableItems;
    NSArray *_fileSystemNavigableItems;
    NSArray *_flatNavigableItems;
    NSArray *_issueNavigableItems;
    IDELocalizationImporter *_worker;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_beginReviewFiles:(id)arg1 resolveBlock:(id)arg2;
- (id)_configuredOpenPanel;
- (id)_documentForLocation:(id)arg1 completionBlock:(id)arg2;
- (id)_fileCell;
- (id)_groupCell;
- (id)_issueCell;
- (void)cancel;
- (void)cancel:(id)arg1;
@property BOOL complete; // @synthesize complete=_complete;
@property(retain, nonatomic) IDELocalizationImportContext *context; // @synthesize context=_context;
@property(readonly, copy) NSString *description;
- (id)documentForPrimaryDocumentLocation:(id)arg1 completionBlock:(id)arg2;
- (id)documentForSecondaryDocumentLocation:(id)arg1 completionBlock:(id)arg2;
@property(retain) NSArray *fileSystemNavigableItems; // @synthesize fileSystemNavigableItems=_fileSystemNavigableItems;
@property(retain) NSArray *flatNavigableItems; // @synthesize flatNavigableItems=_flatNavigableItems;
- (void)import:(id)arg1;
- (id)initWithWindowNibName:(id)arg1;
@property(retain) NSArray *issueNavigableItems; // @synthesize issueNavigableItems=_issueNavigableItems;
- (void)primitiveInvalidate;
- (id)reviewFilesNavigator:(id)arg1 documentLocationForNavigableItem:(id)arg2;
- (id)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 dataCellForNavigableItem:(id)arg3;
- (double)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 rowHeightForNavigableItem:(id)arg3;
@property(retain) IDELocalizationImporter *worker; // @synthesize worker=_worker;
@property(retain) NSArray *workspaceNavigableItems; // @synthesize workspaceNavigableItems=_workspaceNavigableItems;
- (BOOL)shouldSelectFirstDiff;
- (void)start;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

