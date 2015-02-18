/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IDEWorkspace, NSString;

@interface IDEContextAutocreationController : NSObject <DVTInvalidation>
{
    IDEWorkspace *_workspace;
    BOOL _batchAddingBlueprints;
    BOOL _needsBatchSchemeAutocreation;
}

+ (id)contextAutocreationControllerForWorkspace:(id)arg1;
+ (void)initialize;
+ (id)logAspect;
- (void).cxx_destruct;
- (id)_applicationBuildablesInWorkspace:(id)arg1;
- (id)_applicationsInWorkspaceThatDependOnBuildable:(id)arg1;
- (void)_autocreateSchemesForcingAutocreate:(BOOL)arg1 fromAddingBlueprint:(BOOL)arg2;
- (id)_configFromArray:(id)arg1 matchingPrefix:(id)arg2 preferringConfig:(id)arg3;
- (id)_expandedPlatformForBuildableProduct:(id)arg1;
- (BOOL)_isAppExtension:(id)arg1;
- (BOOL)_isWatchApp:(id)arg1;
- (BOOL)_isWatchAppExtension:(id)arg1;
- (id)_newSchemeSpecifierForName:(id)arg1;
- (id)_platformProductTypeOfBuildable:(id)arg1;
- (void)_setDefaultBuildActionForScheme:(id)arg1 forBuildable:(id)arg2;
- (void)_setDefaultConfigurationsInScheme:(id)arg1 forBuildable:(id)arg2;
- (void)_setDefaultLaunchActionForScheme:(id)arg1 forBuildable:(id)arg2;
- (void)_setDefaultProfileActionForScheme:(id)arg1 forBuildable:(id)arg2;
- (BOOL)_shouldAutocreateSchemesForBuildableProduct:(id)arg1;
- (id)_watchKitStoryboardFiles;
- (void)addBuildable:(id)arg1 toScheme:(id)arg2;
- (void)autocreateSchemesForcingAutocreate:(BOOL)arg1;
- (id)buildablesNotPartOfExistingContextAmongBuildables:(id)arg1;
- (id)buildablesToAutocreateSchemesForcedAutocreate:(BOOL)arg1;
- (id)candidateBuildablesForcedAutocreate:(BOOL)arg1;
- (id)createDefaultSchemeForBuildable:(id)arg1;
- (id)createSchemeForBuildable:(id)arg1 withName:(id)arg2;
- (void)didBatchAddMultipleBlueprints:(id)arg1;
- (id)initForWorkspace:(id)arg1;
- (BOOL)isAutocreationSuppressedForBuildable:(id)arg1;
- (id)orderBuildables:(id)arg1;
- (id)parentBuildableForBuildable:(id)arg1;
- (void)primitiveInvalidate;
- (void)suppressAutocreationForBuildables:(id)arg1;
- (void)willBatchAddMultipleBlueprints:(id)arg1;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
