/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface IDEMenuBuilder : NSObject
{
}

+ (void)_appendItemsToMenu:(id)arg1 forMenuDefinitionIdentifier:(id)arg2 forViewController:(id)arg3 fillingExtensionIdToMenuMap:(id)arg4;
+ (id)_buildHelpSubmenuItemForMenuDefinitionIdentifier:(id)arg1 forViewController:(id)arg2 fillingExtensionIdToMenuMap:(id)arg3;
+ (id)_buildSubmenuItemForMenuDefinitionIdentifier:(id)arg1 forViewController:(id)arg2 fillingExtensionIdToMenuMap:(id)arg3;
+ (id)_menuItemForMenuItemElement:(id)arg1 inMenuWithIdentifierUsedForDebugging:(id)arg2 forViewController:(id)arg3 fillingExtensionIdToMenuMap:(id)arg4;
+ (void)_placePinnedGroups:(id)arg1 inMenu:(id)arg2 withPriorities:(id)arg3 topPinned:(BOOL)arg4;
+ (void)_replacePlaceholderItemWithTag:(unsigned long long)arg1 inMenu:(id)arg2 withGroups:(id)arg3 priorities:(id)arg4;
+ (void)appendItemsToMenu:(id)arg1 forMenuDefinitionIdentifier:(id)arg2 forViewController:(id)arg3 extensionIdToMenuMap:(id *)arg4;
+ (id)contextHelpMenuItemForHelpID:(id)arg1;
+ (void)insertMenuItemsForContextualMenuItemIdentifier:(id)arg1 intoMenu:(id)arg2 forSubArea:(id)arg3 fileType:(id)arg4 editorDocumentExtension:(id)arg5;
+ (id)menuForMenuDefinitionIdentifier:(id)arg1 extensionIdToMenuMap:(id *)arg2;
+ (id)menuForMenuDefinitionIdentifier:(id)arg1 forViewController:(id)arg2 extensionIdToMenuMap:(id *)arg3;

@end
