/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTToolbarViewController.h"

#import "IDEPathCellDelegate.h"
#import "NSMenuDelegate.h"
#import "NSPathControlDelegate.h"

@class IDENavigableItem, IDENavigableItemCoordinator, IDEPathControl, NSString, NSToolbarItem;

@interface IDESchemeToolbarController : DVTToolbarViewController <NSPathControlDelegate, IDEPathCellDelegate, NSMenuDelegate>
{
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    IDENavigableItem *_rootNavigable;
    IDEPathControl *_pathControl;
    unsigned long long _menusOpen;
    NSToolbarItem *_toolbarItem;
}

+ (id)keyPathsForValuesAffectingPathControlIsEnabled;
+ (id)keyPathsForValuesAffectingSelectedNavigable;
- (void).cxx_destruct;
- (void)_editActiveContextAction:(id)arg1;
- (void)_manageContextsAction:(id)arg1;
- (void)_newContextAction:(id)arg1;
- (void)_noSchemeAction:(id)arg1;
- (void)_windowWillClose:(id)arg1;
- (id)_workspace;
- (id)_workspaceTabController;
- (void)didUpdateRunDestinationMenu:(id)arg1;
- (void)didUpdateSchemeMenu:(id)arg1;
- (id)initWithToolbarItemIdentifier:(id)arg1 window:(id)arg2;
- (void)loadView;
- (struct CGSize)maxSize;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (struct CGSize)minSize;
- (id)pathCell:(id)arg1 accessibilityDescriptionForPathComponentCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)pathCell:(id)arg1 didUpdateMenu:(id)arg2;
- (BOOL)pathCell:(id)arg1 shouldSeparateDisplayOfChildItemsForItem:(id)arg2;
- (id)pathCellNoSelectionTitle;
- (BOOL)pathControlIsEnabled;
- (void)primitiveInvalidate;
@property(retain) IDENavigableItem *rootNavigable; // @synthesize rootNavigable=_rootNavigable;
@property(retain) IDENavigableItem *selectedNavigable;
@property(nonatomic) __weak NSToolbarItem *toolbarItem; // @synthesize toolbarItem=_toolbarItem;
- (void)updatePathControlSize;
- (BOOL)validateUserInterfaceItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

