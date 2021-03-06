/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEOutlineBasedNavigator.h>

#import "IDETemplateSupportingNavigator.h"
#import "IDETestingSelection.h"
#import "NSMenuDelegate.h"

@class DVTObservingToken, IDENavigatorDataCell, NSDictionary, NSMutableSet, NSSet, NSString, NSTableColumn;

@interface IDEStructureNavigator : IDEOutlineBasedNavigator <NSMenuDelegate, IDETemplateSupportingNavigator, IDETestingSelection>
{
    NSTableColumn *_mainTableColumn;
    IDENavigatorDataCell *_containerFileRefCell;
    IDENavigatorDataCell *_aggregateContainerFileRefCell;
    IDENavigatorDataCell *_groupCell;
    IDENavigatorDataCell *_fileReferenceCell;
    IDENavigatorDataCell *_plainObjectCell;
    NSSet *_expandedItems;
    NSMutableSet *_expandedItemsBeforeFiltering;
    id <IDEStructureEditingDropTarget> _dropTarget;
    BOOL _restoringState;
    BOOL _clearingFilterPredicate;
    BOOL _scmStatusFilteringEnabled;
    BOOL _scmStatusFilteringAllowed;
    BOOL _recentDocumentFilteringEnabled;
    NSString *_fileNamePatternString;
    NSDictionary *_previouslyRestoredStateDictionary;
    NSMutableSet *_observingAndBindingTokens;
    DVTObservingToken *_recentEditorDocumentURLsObservingToken;
    DVTObservingToken *_scmFilterObservingToken;
    DVTObservingToken *_scmEnabledToken;
}

+ (id)_structureNavigatorDragTypes;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingScmStatusFilteringEnabled;
- (void).cxx_destruct;
- (id)_containerNameForNavigableItem:(id)arg1;
- (id)_destinationGroupForSelectedItem:(id)arg1 destinationIndex:(long long *)arg2;
- (void)_editChildItemAtIndex:(unsigned long long)arg1 ofParentItem:(id)arg2;
- (void)_expandNavigableItem:(id)arg1;
- (void)_expandOutlineViewItem:(id)arg1;
- (id)_expandedItemsAsNameTree;
- (id)_expandedItemsBeforeFilteringAsNameTree;
- (void)_handleCancelAction;
- (BOOL)_isNavigableItem:(id)arg1 childOfNavigableItems:(id)arg2;
- (BOOL)_isSelectionFileReferenceNavigableItem;
- (id)_itemFromContextualClickedRows;
- (id)_navigableItemForOutlineViewItem:(id)arg1 representedObject:(id *)arg2;
- (id)_openSpecifierForNavigableItem:(id)arg1;
- (id)_outlineViewItemForNavigableItem:(id)arg1;
- (void)_replaceItemsInMenu:(id)arg1 withItemsInMenu:(id)arg2;
- (void)_revealNavigableItems:(id)arg1;
- (id)_selectedItemsAsNameTree;
- (void)_setExpandedItemsFromNameTree:(id)arg1;
- (void)_setSelectedItemsFromNameTree:(id)arg1;
- (void)_setupTemplateContext:(id)arg1 useContextualMenuSelection:(BOOL)arg2;
- (void)_synchronizeFilteringWithOutlineView;
- (BOOL)_testOrAddFiles:(BOOL)arg1 useContextualMenuSelection:(BOOL)arg2;
- (BOOL)_testOrAddNewGroup:(BOOL)arg1 useContextualMenuSelection:(BOOL)arg2;
- (BOOL)_testOrDeleteItems:(BOOL)arg1 useContextualMenuSelection:(BOOL)arg2;
- (BOOL)_testOrGroupSelected:(BOOL)arg1 useContextualMenuSelection:(BOOL)arg2;
- (BOOL)_testOrSort:(BOOL)arg1 byNameOrByType:(BOOL)arg2 useContextualMenuSelection:(BOOL)arg3;
- (id)_titleForAddFilesMenuItemUsingContextualMenuSelection:(BOOL)arg1;
- (void)_toggleExpandedStateOf:(id)arg1;
- (void)addFiles:(id)arg1;
- (void)addTemplateInstantiatedItems:(id)arg1 primaryItem:(id)arg2;
- (id)aggregateContainerFileRefCell;
- (id)aggregateSourceControlCategoryStatusCellsWithRepresentedObject:(id)arg1;
- (void)clearFilterPredicate;
- (void)commitStateToDictionary:(id)arg1;
- (void)configureStateSavingObservers;
- (id)containerFileRefCell;
- (void)contextMenu_addFiles:(id)arg1;
- (void)contextMenu_delete:(id)arg1;
- (void)contextMenu_groupSelected:(id)arg1;
- (void)contextMenu_newDocument:(id)arg1;
- (void)contextMenu_newGroup:(id)arg1;
- (void)contextMenu_newProject:(id)arg1;
- (void)contextMenu_showFileInspector:(id)arg1;
- (void)contextMenu_sortFilesByName:(id)arg1;
- (void)contextMenu_sortFilesByType:(id)arg1;
- (id)defaultDestinationGroupForTemplateInstantiationWithDestinationIndex:(long long *)arg1;
- (void)delete:(id)arg1;
- (id)domainIdentifier;
- (void)expandInstantiatedTemplateItem:(id)arg1;
@property(copy, nonatomic) NSString *fileNamePatternString; // @synthesize fileNamePatternString=_fileNamePatternString;
- (id)fileReferenceCell;
- (id)filterButtonAccessibilityDescription;
- (id)filterButtonMenu;
- (id)filterButtonToolTip;
- (void)filterButton_addFiles:(id)arg1;
- (void)filterButton_newFile:(id)arg1;
- (void)filterButton_newPlayground:(id)arg1;
- (id)filterDefinitionIdentifier;
- (void)fiterButton_newProject:(id)arg1;
- (void)focusedEditorDidSelectItem:(id)arg1;
- (id)groupCell;
- (void)groupSelected:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)menuNeedsUpdate:(id)arg1;
- (void)navigableItemCoordinatorDidForgetNavigableItems:(id)arg1;
- (id)newBasicContainerFileRefCell;
- (void)newGroup:(id)arg1;
- (void)newTemplateWithTemplateKind:(id)arg1 useContextualMenuSelection:(BOOL)arg2;
- (void)openInAdjacentEditorWithShiftPlusAlternate:(id)arg1;
- (void)openInNewTab:(id)arg1;
- (void)openInNewWindow:(id)arg1;
- (id)openSpecifierForNavigableItem:(id)arg1 error:(id *)arg2;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (struct _NSRange)outlineView:(id)arg1 initialSelectionRangeForCell:(id)arg2 proposedRange:(struct _NSRange)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (id)plainObjectCell;
- (void)primitiveInvalidate;
@property(nonatomic) BOOL recentDocumentFilteringEnabled; // @synthesize recentDocumentFilteringEnabled=_recentDocumentFilteringEnabled;
- (void)revertStateWithDictionary:(id)arg1;
@property(nonatomic) BOOL scmStatusFilteringAllowed;
@property(nonatomic) BOOL scmStatusFilteringEnabled;
- (id)selectedTestsAndTestables;
- (void)setFilterPredicate:(id)arg1;
- (void)setObjects:(id)arg1;
@property(copy) NSString *visibleRectString;
- (void)setupTemplateContext:(id)arg1;
- (BOOL)shouldOpenNavigableItem:(id)arg1 eventType:(unsigned long long)arg2;
- (void)sortFilesByName:(id)arg1;
- (void)sortFilesByType:(id)arg1;
- (id)sourceControlCategoryStatusCellsWithRepresentedObject:(id)arg1;
- (void)triggerFilteringForDocumentURLs:(id)arg1;
- (void)updateFilterPredicate;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewDidInstall;
- (void)viewWillUninstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSSet *expandedItems; // @dynamic expandedItems;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSMutableSet *mutableExpandedItems; // @dynamic mutableExpandedItems;
@property(readonly) Class superclass;

@end

