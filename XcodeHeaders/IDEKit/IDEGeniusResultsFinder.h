/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTExtension, DVTPerformanceMetric, DVTStackBacktrace, IDEEditorDocument, IDENavigableItemCoordinator, IDEWorkspace, IDEWorkspaceTabController, NSArray, NSSet, NSString;

@interface IDEGeniusResultsFinder : NSObject <DVTInvalidation>
{
    DVTExtension *_extension;
    IDEWorkspaceTabController *_workspaceTabController;
    IDENavigableItemCoordinator *_navItemCoordinator;
    NSArray *_documentLocations;
    NSSet *_geniusResults;
    IDEEditorDocument *_editorDocument;
    BOOL _idle;
    DVTPerformanceMetric *_nonIdlePerformanceMetric;
}

+ (Class)editorDocumentClass;
+ (void)initialize;
- (void).cxx_destruct;
- (id)_initWithWorkspaceTabController:(id)arg1 navigableItemCoordinator:(id)arg2;
- (void)_primitiveSetGeniusResults:(id)arg1;
- (void)_updateGeniusResults;
@property(readonly, copy) NSArray *documentLocations; // @synthesize documentLocations=_documentLocations;
@property(retain) IDEEditorDocument *editorDocument; // @synthesize editorDocument=_editorDocument;
@property(retain) DVTExtension *extension; // @synthesize extension=_extension;
- (void)findGeniusResultsForEditorDocument:(id)arg1 selectedDocumentLocations:(id)arg2;
@property(copy) NSSet *geniusResults; // @synthesize geniusResults=_geniusResults;
@property(nonatomic) BOOL idle; // @synthesize idle=_idle;
- (id)init;
@property(retain) DVTPerformanceMetric *nonIdlePerformanceMetric; // @synthesize nonIdlePerformanceMetric=_nonIdlePerformanceMetric;
- (void)primitiveInvalidate;
@property(retain) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(readonly) IDEWorkspace *workspace;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

