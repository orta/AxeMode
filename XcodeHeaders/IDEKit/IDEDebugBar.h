/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTGradientImageButton, DVTObservingToken, NSArray, NSMapTable;

@interface IDEDebugBar : IDEViewController
{
    DVTBorderedView *_containerView;
    DVTGradientImageButton *_showHideDebuggerAreaButton;
    NSArray *_contentProviders;
    id <IDEDebuggerBarEditorInfoProvider> _editorInfoProvider;
    id <IDEDebuggerBarConsoleInfoProvider> _consoleInfoProvider;
    DVTObservingToken *_showDebuggerAreaObserverToken;
    DVTObservingToken *_hasNewInterestingOutputObserverToken;
    NSMapTable *_contentProvidersToShownControlViews;
    NSMapTable *_contentProvidersToObserverTokens;
    id <IDEDebugBarContentProvider> _grabRectProvider;
    id <IDEDebugBarContentProvider> _sharedLibrariesXOffsetProvider;
    BOOL _hideStandardControls;
    id _selectedModelObject;
}

+ (id)standardDebugBarButtonOfClass:(Class)arg1 withImage:(id)arg2 alternateImage:(id)arg3 toolTip:(id)arg4 accessibilityDescription:(id)arg5;
+ (struct CGSize)standardDebugBarButtonSize;
+ (id)standardDebugBarButtonWithImage:(id)arg1 alternateImage:(id)arg2 toolTip:(id)arg3 accessibilityDescription:(id)arg4;
- (void).cxx_destruct;
- (void)_doToolTipWorkaround;
- (void)_hasNewInterestingOutputChanged;
- (double)_sharedLibrariesPopUpXOffset;
- (void)_showDebuggerAreaChanged;
- (struct CGRect)additionalGrabRectInTermsOfView:(id)arg1;
@property(retain) id <IDEDebuggerBarConsoleInfoProvider> consoleInfoProvider; // @synthesize consoleInfoProvider=_consoleInfoProvider;
@property(copy) NSArray *contentProviders;
@property(retain) id <IDEDebuggerBarEditorInfoProvider> editorInfoProvider; // @synthesize editorInfoProvider=_editorInfoProvider;
@property BOOL hideStandardControls; // @synthesize hideStandardControls=_hideStandardControls;
- (void)loadView;
- (void)primitiveInvalidate;
@property(retain) id selectedModelObject; // @synthesize selectedModelObject=_selectedModelObject;
- (void)showSharedLibrariesPopUp;
- (void)tile;
- (void)viewDidInstall;
- (void)viewWillUninstall;

@end

